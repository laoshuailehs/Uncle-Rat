using System;
using UnityEngine;
using Object = UnityEngine.Object;

namespace BombGame
{
    public class AttackState: EnemyBaseState
    {
        public override void OnEnter(EnemyBase enemy)
        {
            enemy.animState = 2;
            enemy.target = enemy.listPoint[0];
            // enemy.target = enemy.listPoint.FirstOrDefault(p => p.CompareTag("Player"));
        }

        public override void OnUpdate(EnemyBase enemy)
        {
            if (enemy.hasBomb)
            {
                HasBombUpate(enemy);
                return;
            }
            CommonUpdate(enemy);
        }

        /// <summary>
        /// 正常情况下的攻击逻辑
        /// </summary>
        /// <param name="enemy"></param>
        private void CommonUpdate(EnemyBase enemy)
        {
            if (enemy.listPoint.Count==0)
            {
                enemy.ChangeState(enemy.EnemyBaseState[EnemyBase.EnemyState.PatrolState]);
            }
            
            if (enemy.listPoint.Count > 1)
            {
                foreach (var transform in enemy.listPoint)
                {
                    if(MathF.Abs(enemy.transform.position.x-enemy.target.position.x)>
                       MathF.Abs(enemy.transform.position.x- transform.position.x))
                        enemy.target = transform;
                }
            }
            if (enemy.listPoint.Count == 1)
            {
                enemy.target = enemy.listPoint[0];
            }
            if (enemy.target.CompareTag("Player"))
                enemy.AttackPlayer();
            if(enemy.target.CompareTag("Bomb"))
                enemy.AttackSkill();
            
            enemy.MoveToTarget();
        }

        private void HasBombUpate(EnemyBase enemy)
        {
            var playerTranform = Object.FindObjectOfType<PlayerContor>().transform;
            enemy.transform.position=Vector2.MoveTowards(enemy.transform.position,playerTranform.position,enemy.speed *Time.deltaTime);
            enemy.FilpDirection(playerTranform);
        }
    }
}