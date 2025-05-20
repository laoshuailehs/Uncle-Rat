using UnityEngine;

namespace BombGame
{
    public class AttackCheck : MonoBehaviour
    {
        [Header("敌人类型")]
        public EmenyType enemyType;

        private void OnTriggerEnter2D(Collider2D other)
        {
            if (other.CompareTag("Player"))
            {
                if (other.TryGetComponent(out IDamage damage))
                {
                    damage.TakeDamage(2f);
                }
            }
            if (other.CompareTag("Bomb"))
            {
                switch (enemyType)
                {
                    case EmenyType.Cucumber:
                        break;
                    case EmenyType.BaldPirate:
                        if (other.TryGetComponent(out Rigidbody2D baldPirateBombRb))
                        {
                            Vector3 pos = other.transform.position - transform.position;
                            baldPirateBombRb.AddForce((pos.normalized+Vector3.up) * 5f, ForceMode2D.Impulse);
                        }   
                        break;
                    case EmenyType.BigGuy:
                        break;
                }
            }
        }

    }
}