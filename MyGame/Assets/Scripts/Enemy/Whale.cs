using System;
using System.Collections;
using System.Collections.Generic;
using BombGame;
using UnityEngine;
using Random = System.Random;

public class Whale : EnemyBase, IDamage
{
    public int count;
    protected override void Awake()
    {
        base.Awake();
        _isBoss = true;
    }

    public void TakeDamage(float damage)
    {
        if (!anim.GetCurrentAnimatorStateInfo(2).IsName("Whale_hit"))
        {
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
                DeathSkill();
                // Destroy(this.gameObject, 0.25f);
            }
        }
    }

    public void AttackSkillEvent()
    {
        if (target.TryGetComponent(out Bomb bomb))
        {
            if (!bomb.gameObject.activeSelf) return;
            BombPoolService.ReleaseBomb(target.gameObject);
            count++;
            transform.localScale *= 1.1f;
        }
    }

    private int rot;
    private Random _random=new Random();
    private float rotpos;
    private void DeathSkill()
    {
        for (int i = 0; i < count; i++)
        {
            rot = _random.Next(1, 4);
            var go = BombPoolService.GetBomb();
            go.transform.position = transform.position;
            go.transform.rotation = transform.rotation;

            switch (rot)
            {
                case 1: rotpos=Mathf.Deg2Rad*45;
                    break;
                case 2: rotpos=Mathf.Deg2Rad*90;
                    break;
                case 3: rotpos=Mathf.Deg2Rad*135;
                    break;
            }
            var pos=new Vector2(Mathf.Cos(rotpos),Mathf.Sin(rotpos));
            go.GetComponent<Rigidbody2D>().AddForce(pos*10, ForceMode2D.Impulse);
        }
    }
    
}
