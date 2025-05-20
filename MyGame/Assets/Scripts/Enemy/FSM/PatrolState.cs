using UnityEngine;

namespace BombGame
{
    public class PatrolState: EnemyBaseState
    {
        public override void OnEnter(EnemyBase enemy)
        {
            enemy.animState = 0;
            enemy.SwitchPoint();
            enemy._sprite.flipX = false;
        }

        public override void OnUpdate(EnemyBase enemy)
        {
            
            if (!enemy.anim.GetCurrentAnimatorStateInfo(0).IsName("Idle"))
            {
                enemy.animState = 0;
                enemy.MoveToTarget();
            }
            
            if (Mathf.Abs(enemy.transform.position.x - enemy.target.position.x) < 0.01f)
            {
                enemy.animState = 1;
                if(enemy.anim.GetCurrentAnimatorStateInfo(0).IsName("Idle"))
                    enemy.ChangeState(enemy.EnemyBaseState[EnemyBase.EnemyState.PatrolState]);
            }
            
            if (CheckPlayerOrBomb(enemy.listPoint))
            {
                enemy.ChangeState(enemy.EnemyBaseState[EnemyBase.EnemyState.AttackState]);
            }

            
            
        }
    }
}