using System;
using System.Collections;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;

namespace BombGame
{
    public class Bomb : MonoBehaviour
    {
        private Animator animator;
        private Rigidbody2D rb;
        // private Collider2D collider;

        [Header("BombSetting")] public LayerMask checkLayer;
        public float radius = 1.05f;

        public float force = 5f;
        public float startTime = 0;

        public float waitTime = 3f;

        public bool canBomb = true;

        public bool isCoercion;

        /// <summary>
        /// 启用时，初始化相关组件，为了使用对象池而在这里初始化
        /// </summary>
        void OnEnable()
        {
            animator = GetComponent<Animator>();
            rb = GetComponent<Rigidbody2D>();
            // collider = GetComponent<Collider2D>();
            
            // rb.gravityScale = 1f;
            // collider.enabled = true;
            gameObject.layer=LayerMask.NameToLayer("Bomb");
            animator.Play("Bomb_On");
            startTime = Time.time;
            canBomb = true;
        }
        
        void Start()
        {
            
        }
        
        void Update()
        {
            if (startTime + waitTime < Time.time && canBomb )
            {
                // 添加空引用检查
                if (animator == null || !animator.isActiveAndEnabled) return;

                animator.Play("Bomb_Bao");
                canBomb = false;
    
                // 添加 try-catch 防止异步异常
                try
                {
                    ReferFlashUniTask(this.GetCancellationTokenOnDestroy()).Forget();
                }
                catch (Exception e)
                {
                    Debug.LogError($"Bomb task failed: {e}");
                }
                // StartCoroutine(ReferFlash());
            }
        }

        /// <summary>
        /// 检测碰撞，在动画中调用事件
        /// </summary>
        public void CheckCollider()
        {
            // collider.enabled = false;
            Collider2D[] colliders = Physics2D.OverlapCircleAll(transform.position, radius, checkLayer);
            foreach (var collider in colliders)
            {
                if(collider.CompareTag("Bomb")&&collider.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).IsName("Bomb_idle")){
                    collider.GetComponent<Bomb>().PlayOn();
                }
                // rb.gravityScale = 0f;
                if (collider.CompareTag("Player"))
                {
                    if(collider.TryGetComponent(out IDamage damage))
                    {
                        if (isCoercion)
                        {
                            damage.TakeDamage(5f);
                        }else if (GameGlobalSettings.Instance.SelfHarm && !isCoercion)
                        {
                            damage.TakeDamage(1f);
                        }
                        
                    }
                }
                else
                {
                    if(collider.TryGetComponent(out IDamage damage))
                    {
                        if(collider.TryGetComponent(out EnemyBase enemy))
                        {
                            switch (enemy.enemyType)
                            {
                                
                                case EmenyType.Captain:
                                case EmenyType.Cucumber:
                                    damage.TakeDamage(GameGlobalSettings.Instance.Damage);
                                    break;
                                
                                case EmenyType.BigGuy:
                                case EmenyType.BaldPirate:
                                    if (!isCoercion)
                                        damage.TakeDamage(GameGlobalSettings.Instance.Damage);
                                    break;
                                case EmenyType.Whale:
                                    if (enemy.GetComponent<Whale>().count >= 4)
                                    {
                                        force = 2f;
                                        // damage.TakeDamage(GameGlobalSettings.Instance.Damage-enemy.GetComponent<Whale>().count);
                                        damage.TakeDamage(1);
                                    }
                                    else
                                    {
                                        damage.TakeDamage(GameGlobalSettings.Instance.Damage);
                                    }
                                    break;
                            }
                        }
                    }
                }
                
                Vector3 pos = collider.transform.position - transform.position;
                if(collider.TryGetComponent(out Rigidbody2D rb))
                    rb.AddForce((pos+Vector3.up) *force, ForceMode2D.Impulse);
                // collider.GetComponent<Rigidbody2D>().AddForce((pos+Vector3.up) *force, ForceMode2D.Impulse);
            }
            
        }

        private void OnDisable()
        {
            gameObject.layer=LayerMask.NameToLayer("NPC");
            canBomb = false;
            isCoercion = false;
        }

        /// <summary>
        /// 绘制半径
        /// </summary>
        private void OnDrawGizmos()
        {
            Gizmos.color = Color.white;
            Gizmos.DrawWireSphere(transform.position, radius);
        }
        
        IEnumerator ReferFlash()// 已用异步替代
        {
            yield return new WaitForSeconds(0.17f);
            BombPoolService.ReleaseBomb(gameObject);
        }
        
        /// <summary>
        /// 熄灭炸弹
        /// </summary>
        public void PlayOff()
        {
            animator.Play("Bomb_idle");
            gameObject.layer=LayerMask.NameToLayer("NPC");
            canBomb = false;
        }
        
        /// <summary>
        /// 启动炸弹
        /// </summary>
        public void PlayOn()
        {
            animator.Play("Bomb_On");
            gameObject.layer=LayerMask.NameToLayer("Bomb");
            canBomb = true;
            startTime = Time.time;
        }

        /// <summary>
        /// BigGuy 的炸弹激活逻辑
        /// </summary>
        /// <param name="canB"></param>
        public void ActivateBomb(bool canB) {
            canBomb = canB;
            // 可添加其他关联逻辑（如触发音效/粒子等）
            if(canB)
                startTime = Time.time - 2f;
        }
        
        /// <summary>
        /// 异步回收炸弹到对象池中
        /// 添加取消令牌（尤其涉及对象池回收时）
        /// 能更优雅地处理对象被提前回收的情况，避免协程因对象销毁导致的
        /// </summary>
        private async UniTask ReferFlashUniTask(CancellationToken token = default)
        {
            await UniTask.Delay(TimeSpan.FromSeconds(0.17f), cancellationToken: token);
            if (gameObject.TryGetComponent(out Rigidbody2D rb))
            {
                rb.bodyType  = RigidbodyType2D.Dynamic;
            }
            if(gameObject.activeSelf)
                BombPoolService.ReleaseBomb(gameObject);
        }
        
    }
}