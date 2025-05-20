using System;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace BombGame
{
    public class Door: GameBase
    {
        private Animator anim;
        public bool isEndDoor;
        protected override void Awake()
        {
            base.Awake();
            anim= GetComponent<Animator>();
        }

        private void OnTriggerEnter2D(Collider2D other)
        {
            if (other.CompareTag("Player"))
            {
                if (GameManage.Instance._enemylist.Count == 0)
                {
                    anim.Play("Door_open");
                    if (isEndDoor &&  GameGlobalSettings.Instance.State <= 2)
                    {
                        GameManage.Instance.NextScene();
                    }
                    Debug.Log("open the door");
                }
            }
        }
    }
}