using System;
using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;


namespace BombGame
{
    public abstract class GameBase: MonoBehaviour
    {
        protected virtual void  Awake()
        {
        }
        
        protected virtual void  Start()
        {
        }
        
        protected virtual void Update()
        {
        }
    }
    
    public class EnemyBase : GameBase
    {
        [Header("基础设置")]
        public Animator anim;
        protected Rigidbody2D rigidbody;
        public float speed = 2;
        public float health=10f;
        public Transform pointA;
        public Transform pointB;
        public Transform target;
        public List<Transform> listPoint = new List<Transform>();
        
        [Header("Enemy状态")] 
        private EnemyBaseState _currentState;
        public int animState;
        public bool hasBomb;

        [Header("攻击设置")] 
        public GameObject exclamation;
        public float attackStart = 0;
        public float attackInterval=2f;
        public float attackRange = 1.5f;
        public float attackSkillRange = 0.1f;

        [Header("敌人类型")]
        public EmenyType enemyType;

        public bool _isBoss;
        
        public readonly Dictionary<EnemyState,EnemyBaseState> EnemyBaseState = new Dictionary<EnemyState, EnemyBaseState>()
        {
            {EnemyState.PatrolState,new PatrolState()},
            {EnemyState.AttackState,new AttackState()}
        };

        public SpriteRenderer _sprite;
        protected override void Awake()
        {
            _sprite= GetComponent<SpriteRenderer>();
            anim= GetComponent<Animator>();
            rigidbody = GetComponent<Rigidbody2D>();
        }
        protected override void Start()
        {
            GameManage.Instance.AddEnemy(this);
            ChangeState(EnemyBaseState[EnemyState.PatrolState]);
        }


        protected override void  Update()
        {
            if (health == 0)
            {
                GameManage.Instance.RemoveEnemy(this);
                Destroy(this.gameObject,1.5f);
                return;
            }
            
            anim.SetInteger("state", animState);
            _currentState.OnUpdate(this);
        }
        
        public void ChangeState(EnemyBaseState state)
        {
            _currentState = state;
            _currentState.OnEnter(this);
        }

        public virtual void AttackPlayer()
        {
            if (Mathf.Abs(transform.position.x - target.position.x) <= attackRange && !hasBomb)
            {
                if (Time.time > attackStart)
                {
                    anim.SetTrigger("attack");
                    attackStart = Time.time + attackInterval;
                }
            }
           
        }
        
        public virtual void AttackSkill()
        {
            if (Mathf.Abs(transform.position.x - target.position.x) <= attackSkillRange && !hasBomb)
            {
                if (Time.time > attackStart)
                {
                    anim.SetTrigger("attackskill");
                    attackStart = Time.time + attackInterval;
                }
            }

        }
        
        public void MoveToTarget()
        {
            // 移动 speed*Time.deltaTime 是因为不同机型的帧率不同，所以要乘以时间间隔
            transform.position=Vector2.MoveTowards(transform.position,target.position,speed *Time.deltaTime);
            FilpDirection(target);
        }
        
        public void FilpDirection(Transform tf)
        {
            if(this.transform.position.x<tf.position.x)
                transform.rotation = Quaternion.Euler(0,0,0);
            else 
                transform.rotation = Quaternion.Euler(0,180,0);
        }
        

        public void SwitchPoint()
        {
            if (Mathf.Abs(pointA.position.x - transform.position.x) >=
                Mathf.Abs(pointB.position.x - transform.position.x))
            {
                target = pointA;
            }
            else
            {
                target = pointB;
            }
        }

        private void OnTriggerStay2D(Collider2D other)
        {
            if (other!=null&&!listPoint.Contains(other.transform))
            {
                listPoint.Add(other.transform);
            }
        }

        private void OnTriggerExit2D(Collider2D other)
        {
            if (other!=null&&listPoint.Contains(other.transform))
            {
                listPoint.Remove(other.transform);
            }
        }

        private void OnTriggerEnter2D(Collider2D other)
        {
            // if(other.CompareTag("Player")||other.CompareTag("Bomb")) //可以不判断，layer只检测这两个物体
            try
            {
                OnExclamation(this.GetCancellationTokenOnDestroy()).Forget();
            }
            catch (Exception e)
            {
                Debug.LogError($"OnExclamation task failed: {e}");
            }
                
        }

        async UniTask  OnExclamation(CancellationToken token = default)
        {
            exclamation.gameObject.SetActive(true);
            await UniTask.Delay(TimeSpan.FromSeconds(0.5f),cancellationToken:token);
            exclamation.gameObject.SetActive(false);
        }
        
        public enum EnemyState
        {
            
            PatrolState,
            
            AttackState
        }
    }
}