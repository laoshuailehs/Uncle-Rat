using UnityEngine;

namespace BombGame
{
    public class Captain : EnemyBase,IDamage
    {
        public void TakeDamage(float damage)
        {
            if (!anim.GetCurrentAnimatorStateInfo(2).IsName("Captain_hit"))
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

        public void AttackSkillEvent()
        {
            _sprite.flipX = anim.GetCurrentAnimatorStateInfo(1).IsName("Captain_attackskill");
        }
        
        public override void AttackSkill()
        {
            base.AttackSkill();
            if(!anim.GetCurrentAnimatorStateInfo(1).IsName("Captain_attackskill"))return;
            if (target.transform.position.x - transform.position.x >= 0)
            {
                transform.position=Vector2.MoveTowards(transform.position,Vector3.left + transform.position,speed * 3 * Time.deltaTime);
            }
            else
            {
                transform.position=Vector2.MoveTowards(transform.position,Vector3.right + transform.position,speed * 3 * Time.deltaTime);
            }
        }
    }
}