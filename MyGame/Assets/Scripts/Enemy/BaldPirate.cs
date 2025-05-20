using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace BombGame
{
    public class BaldPirate : EnemyBase,IDamage
    {

        private float attackforce = 5f;
        public void OnBaldAttackEvent()
        {
            if (target.TryGetComponent(out Rigidbody2D rb))
            {
                Vector3 pos = target.transform.position - transform.position;
                rb.AddForce((pos.normalized+Vector3.up) * attackforce, ForceMode2D.Impulse);
            }
            if(target.TryGetComponent(out Bomb bomb))
                bomb.isCoercion = true;
        }
        
        public void TakeDamage(float damage)
        {
            if (!anim.GetCurrentAnimatorStateInfo(2).IsName("BaldPirate_hit"))
            {
                health -= damage;
                if(_isBoss)
                    EventManage.Instance.ChangeBossHealthEvent(health);
                // 播放伤害动画
                anim.SetTrigger("hit");
                if (health <= 0)
                {
                    health = 0;
                    EventManage.Instance.AddExperienceEvent(5);
                    // 播放死亡动画
                    anim.SetTrigger("death");
                    rigidbody.velocity=Vector2.zero;
                    this.gameObject.layer = LayerMask.NameToLayer("Death");
                }
            }
            
        }
    }
}