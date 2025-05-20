using System.IO;
using UnityEngine;
using Newtonsoft.Json;
using UnityEngine.UI;

namespace BombGame
{
    public class TestBase : Test
    {
        private Button btn;

        [SerializeField]
        private Button startGame;
        
        // public PlayerContor player;
        private Animator anim;
        
        private void Start()
        {
            btn = GetComponent<Button>();
            // anim= player.gameObject.GetComponent<Animator>();
            
            
            btn.onClick.AddListener(() =>
            {
                Debug.Log("保存玩家数据");
                // string str= JsonConvert.SerializeObject(GameGlobalSettings.Instance);
                // File.WriteAllText(PathManage.Instance.JsonDataPath,str);
                
                // GameGlobalSettings.Instance.SelfHarm=!GameGlobalSettings.Instance.SelfHarm;
                // player.health = 10;
                // player.gameObject.layer = LayerMask.NameToLayer("Player");
                // anim.Play("EmptyState", 1);
            });
            
            // startGame.onClick.AddListener(() =>
            // {
            //     Debug.Log("删除玩家数据");
            //     GameGlobalSettings.Instance.Delete();
            // });
            
        }

        protected override void OnOpen()
        {
            base.OnOpen();
        }

        protected override void Update()
        {
            base.Update();
        }
    }
}