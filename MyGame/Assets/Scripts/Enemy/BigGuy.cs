using BombGame;
using UnityEngine;

public class BigGuy : EnemyBase,IDamage
{
    public GameObject pickPiont;
    public void PickBomb()
    {
        if(hasBomb||target==null)return;
        if (!target.TryGetComponent(out Rigidbody2D bigGuyBombRb)) return;
        target.transform.position = pickPiont.transform.position;
        target.transform.SetParent(pickPiont.transform);
        if (target.TryGetComponent(out Bomb bombCache))
        {
            bombCache.ActivateBomb(false);
            bombCache.isCoercion  = true;
        }
        bigGuyBombRb.velocity = Vector2.zero;//防止ThrowBomb时，Bomb的velocity不为0
        bigGuyBombRb.bodyType = RigidbodyType2D.Kinematic;
        hasBomb = true;
    }
    
    public void ThrowBomb()
    {
        if(!hasBomb||target==null)return;
        var bigGuyBombRb= target.GetComponent<Rigidbody2D>();
        var playerTransform = GameObject.FindObjectOfType<PlayerContor>().transform;
        
        bigGuyBombRb.bodyType = RigidbodyType2D.Dynamic;
        if ((transform.position.x - playerTransform.position.x) > 0)
            bigGuyBombRb.AddForce(new Vector2(-1,1) * 5f, ForceMode2D.Impulse);
        else
            bigGuyBombRb.AddForce(new Vector2(1,1) * 5f, ForceMode2D.Impulse);
        
        target.transform.SetParent(null,true);
        if (target.TryGetComponent(out Bomb bombCache))
            bombCache.ActivateBomb(true); // 通过方法调用替代直接字段修改
        // target.GetComponent<Bomb>().canBomb = true;
        // target.GetComponent<Bomb>().startTime = Time.time-2.5f;
        hasBomb = false;
    }
    
    public void TakeDamage(float damage)
    {
        if (!anim.GetCurrentAnimatorStateInfo(2).IsName("BigGuy_hit"))
        {
            Debug.Log("BigGuy TakeDamage"+damage);
            health -= damage;
            if(_isBoss)
                EventManage.Instance.ChangeBossHealthEvent(health);
            // 播放伤害动画
            anim.SetTrigger("hit");
            if (health <= 0)
            {
                health = 0;
                EventManage.Instance.AddExperienceEvent(10);
                // 播放死亡动画
                anim.SetTrigger("death");
                rigidbody.velocity=Vector2.zero;
                this.gameObject.layer = LayerMask.NameToLayer("Death");
            }
        }
            
    }
}
