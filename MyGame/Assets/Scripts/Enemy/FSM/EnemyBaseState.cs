using System.Collections.Generic;
using UnityEngine;

namespace BombGame
{
    public abstract class EnemyBaseState
    {
        public abstract void OnEnter(EnemyBase enemy);
        public abstract void OnUpdate(EnemyBase enemy);

        protected bool CheckPlayerOrBomb(List<Transform> list)
        {
            foreach (var transform in list)
            {
                if (transform.CompareTag("Player")||transform.CompareTag("Bomb"))
                {
                    return true;
                }
            }
            return false;
        }
    }
}