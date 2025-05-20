using System.Security.Cryptography.X509Certificates;

namespace BombGame
{
    public interface IDamage
    {
        public void TakeDamage(float damage);
    }
}