using System;
using UnityEngine;

namespace BombGame
{
    public class Cucumber:EnemyBase,IDamage
    {
        public void SetOff()
        {
            if (target.TryGetComponent(out Bomb bomb))
            {
                bomb.PlayOff();
            }
        }
        
        public void TakeDamage(float damage)
        {
            if (!anim.GetCurrentAnimatorStateInfo(2).IsName("Enemy_Cucumber_hit"))
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