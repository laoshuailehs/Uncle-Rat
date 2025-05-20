using System;
using System.Collections;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Pool;
using Random = System.Random;

namespace BombGame
{
  
    public class PlayerContor : MonoBehaviour,  IDamage
    {
        private Rigidbody2D rb;
        // public float health=10f;
        
        [Header("JumpAndRum")]
        public GameObject jumpCheckObj;
        public bool canJump;
        public bool isGrounded;
        public LayerMask groundLayer;
        public int speed=5;
        public int jumpForce=15;
        public float radius=0.2f;
        
        [Header("jumpParticles")]
        public GameObject fallParticles;
        public GameObject jumpParticles;


        [Header("Attack")] 
        private IObjectPool<GameObject> _bombPool;
        public GameObject bombPrefab;
        public GameObject attackPoint;
        public float attackforce=5f;
        public float angle = 45f;//角度
        private float _attackStartTime=0;
        public float attackTime=1f;
        private float _bombWaitTime;

        private bool _isDeath;

        private FixedJoystick _joystick;
        
        Random range= new Random();
        
        private void Awake()
        {
            
        }

        private void OnEnable()
        {
            // 替换原有初始化代码为：
            // bombPool = ObjectPoolManager.CreateGameObjectPool(
            //     BombPrefab, 
            //     defaultCapacity: 10, 
            //     maxSize: 50
            // );
            BombPoolService.Initialize(bombPrefab);
            EventManage.Instance.OnExperienceChanged+=CheckExperience;
            EventManage.Instance.OnLevelChanged+=CheckLevel;
        }

        void Start()
        {
            rb = GetComponent<Rigidbody2D>();
            _joystick = GameObject.FindObjectOfType<FixedJoystick>();
            // _bombWaitTime = bombPrefab.GetComponent<Bomb>().waitTime+0.17f;
            _bombWaitTime = 3.17f;
        }
        
        private void FixedUpdate()
        {
            if (_isDeath)return;
            Move();
            Jump();
            PlayFallParticles();
        }
        
        void Update()
        {
            _isDeath = GameGlobalSettings.Instance.Health  <= 0;
            if (_isDeath)return;
            InputCheck();
            // Attack();
        }

        void OnDisable()
        {
            EventManage.Instance.OnExperienceChanged-=CheckExperience;
        }
        
        void OnDestroy()
        {
            
        }
        
        /// <summary>
        /// 输入检测
        /// </summary>
        private void InputCheck()
        {
            isGrounded = Physics2D.OverlapCircle(jumpCheckObj.
                transform.position,radius,groundLayer);
            
            if(isGrounded&&Input.GetButtonDown("Jump"))
            {
                canJump = true;
            }
            
        }

        public void JumpAdk()
        {
            if (isGrounded)
            {
                canJump = true;
            }
        }
        
        /// <summary>
        /// 移动
        /// </summary>
        private void Move()
        {
            float horizontal = _joystick.Horizontal;
            // float horizontal= Input.GetAxisRaw("Horizontal");
        
            // rb.velocity = new Vector2(horizontal * speed, rb.velocity.y);
            // if (horizontal != 0)
            //     transform.localScale = new Vector3(horizontal, 1,1);
            if (horizontal > 0)
            {
                transform.localScale=new Vector3(1,1,1);
                rb.velocity = new Vector2(1 * speed, rb.velocity.y);
            }
            else if (horizontal < 0)
            {
                transform.localScale=new Vector3(-1,1,1);
                rb.velocity = new Vector2(-1 * speed, rb.velocity.y);
            }
            else
            {
                rb.velocity = new Vector2(0 * speed, rb.velocity.y);
            }
        
        }

        /// <summary>
        /// 跳跃
        /// </summary>
        private void Jump()
        {
            if (canJump)
            {
                rb.AddForce(new Vector2(0, jumpForce), ForceMode2D.Impulse);
                jumpParticles.transform.position =new Vector2(transform.position.x+0.11f,transform.position.y-0.52f);
                jumpParticles.SetActive(true);
                canJump = false;
            }
        }

        /// <summary>
        /// 攻击
        /// </summary>
        // private void Attack()
        // {
        //     if (GameGlobalSettings.Instance.BombCount <= 0) return;
        //     if (_attackStartTime < Time.time)
        //     {
        //         if (Input.GetKeyDown(KeyCode.Mouse0))
        //         {
        //             float radian =Mathf.Deg2Rad*angle;//角度转弧度 右边是45
        //             float radianf =Mathf.Deg2Rad*135f;//角度转弧度 左边是135
        //             Vector2 posz= new Vector2(Mathf.Cos(radian),Mathf.Sin(radian));//计算方向向量
        //             Vector2 posf= new Vector2(Mathf.Cos(radianf),Mathf.Sin(radianf));//计算方向向量
        //             // GameObject go=Instantiate(BombPrefab, AttackPoint.transform.position, AttackPoint.transform.rotation);
        //             // var go = bombPool.Get();
        //             var go = BombPoolService.GetBomb();
        //             go.transform.rotation = attackPoint.transform.rotation;
        //             go.transform.position = attackPoint.transform.position;
        //             go.GetComponent<Rigidbody2D>().freezeRotation = true;
        //             if (transform.localScale.x > 0)
        //                 go.GetComponent<Rigidbody2D>().AddForce(posz*attackforce,ForceMode2D.Impulse);
        //             else
        //             {
        //                 go.GetComponent<Rigidbody2D>().AddForce(posf*attackforce,ForceMode2D.Impulse);
        //             }
        //             // StartCoroutine(ReleasePool(go));
        //             EventManage.Instance.ChangeBombCountEvent(-1);
        //             _attackStartTime = Time.time + attackTime;
        //         }
        //         else if (Input.GetKeyDown(KeyCode.Mouse1))
        //         {
        //             // GameObject go1= Instantiate(BombPrefab, transform.position, transform.rotation);
        //             // var go1 = bombPool.Get();
        //             var go1 = BombPoolService.GetBomb();
        //             go1.transform.rotation = transform.rotation;
        //             go1.transform.position = transform.position;
        //             go1.GetComponent<Rigidbody2D>().freezeRotation = true;
        //             // StartCoroutine(ReleasePool(go1));
        //             EventManage.Instance.ChangeBombCountEvent(-1);
        //             _attackStartTime = Time.time + attackTime;
        //         }
        //         
        //     }
        //     
        // }

        public void AttackAdk()
        {
            if (GameGlobalSettings.Instance.BombCount <= 0)
            {
                UIManager.Instance.AddBombCountPanel();
                return;
            }
            if (_attackStartTime < Time.time)
            {
                var go1 = BombPoolService.GetBomb();
                go1.transform.rotation = transform.rotation;
                go1.transform.position = transform.position;
                go1.GetComponent<Rigidbody2D>().freezeRotation = true;
                // StartCoroutine(ReleasePool(go1));
                EventManage.Instance.ChangeBombCountEvent(-1);
                _attackStartTime = Time.time + attackTime;
            }
        }

        public void AttackSkillAdk()
        {
            if (GameGlobalSettings.Instance.BombCount <= 0)
            {
                UIManager.Instance.AddBombCountPanel();
                return;
            }
            if (_attackStartTime < Time.time)
            {
                float radian =Mathf.Deg2Rad*angle;//角度转弧度 右边是45
                float radianf =Mathf.Deg2Rad*135f;//角度转弧度 左边是135
                Vector2 posz= new Vector2(Mathf.Cos(radian),Mathf.Sin(radian));//计算方向向量
                Vector2 posf= new Vector2(Mathf.Cos(radianf),Mathf.Sin(radianf));//计算方向向量
                // GameObject go=Instantiate(BombPrefab, AttackPoint.transform.position, AttackPoint.transform.rotation);
                // var go = bombPool.Get();
                var go = BombPoolService.GetBomb();
                go.transform.rotation = attackPoint.transform.rotation;
                go.transform.position = attackPoint.transform.position;
                go.GetComponent<Rigidbody2D>().freezeRotation = true;
                if (transform.localScale.x > 0)
                    go.GetComponent<Rigidbody2D>().AddForce(posz*attackforce,ForceMode2D.Impulse);
                else
                {
                    go.GetComponent<Rigidbody2D>().AddForce(posf*attackforce,ForceMode2D.Impulse);
                }
                // StartCoroutine(ReleasePool(go));
                EventManage.Instance.ChangeBombCountEvent(-1);
                _attackStartTime = Time.time + attackTime;

            }
        }
    
        /// <summary>
        /// 释放对象池  为什么要在玩家代码中释放炸弹对象池呢？ 让炸弹自己释放
        /// </summary>
        /// <param name="obj"></param>
        /// <returns></returns>
        IEnumerator ReleasePool(GameObject obj)
        {
            yield return new WaitForSeconds(_bombWaitTime);
            // obj.layer=LayerMask.NameToLayer("NPC");
            // Animator anim = obj.GetComponent<Animator>();
            // if (anim.GetCurrentAnimatorStateInfo(0).IsName("Bomb_Bao"))
            // {
            //     BombPoolService.ReleaseBomb(obj);
            // }
            
        }
        
        /// <summary>
        /// 起跳动画
        /// </summary>
        private void PlayFallParticles()
        {
            if (isGrounded&&rb.velocity.y<0)
            {
                // 播放起跳动画，播放完之后隐藏（注意位置加上偏移量）
                fallParticles.transform.position =new Vector2(transform.position.x,transform.position.y-0.75f);
                fallParticles.SetActive(true);
            }
        }
    
        /// <summary>
        /// 绘制碰撞体
        /// </summary>
        private void OnDrawGizmos()
        {
            Gizmos.color = Color.red;
            Gizmos.DrawWireSphere(jumpCheckObj.transform.position,radius);
        }

        private void CheckExperience(object sender, ExperienceChangedEventArgs e)
        {
            Debug.Log("获取经验值："+e.Experience+" 当前经验值："+GameGlobalSettings.Instance.Experience);
            if (GameGlobalSettings.Instance.Experience>=GameGlobalSettings.Instance.ExperienceMax)
            {
                EventManage.Instance.LevelChanged(1);
                GameGlobalSettings.Instance.ChangeDamage(2);
            }
            Debug.Log("等级："+GameGlobalSettings.Instance.Level);
        }
        
        private void CheckLevel(object sender,LevelEventArgs eventArgs)
        {
            GameGlobalSettings.Instance.AddExperienceMax(range.Next(10, 15));
        }
        
        
        public void TakeDamage(float damage)
        {
            if (this.GetComponent<Animator>().GetCurrentAnimatorStateInfo(1).IsName("player_hit"))return;
            // health -= damage;
            // GameGlobalSettings.Instance.AddHealth(-damage);
            EventManage.Instance.HealthChanged(damage);
            // 播放动画
            this.GetComponent<Animator>().SetTrigger("hit");
            if (GameGlobalSettings.Instance.Health <= 0)
            {
                GameGlobalSettings.Instance.Health  = 0;
                _isDeath = true;
                this.gameObject.layer = LayerMask.NameToLayer("Death");
                this.GetComponent<Animator>().SetTrigger("death");
                rb.velocity =Vector2.zero;
            }
        }

        public void Rescrrue()
        {
            this.gameObject.layer = LayerMask.NameToLayer("Player");
            _isDeath = false;
        }
    }  
}