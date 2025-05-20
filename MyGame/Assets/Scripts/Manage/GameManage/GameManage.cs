using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Random = System.Random;

namespace BombGame
{
    public class GameManage:GameBase
    {
        public static GameManage Instance;
        
        public List<EnemyBase> _enemylist= new List<EnemyBase>();

        public void AddEnemy(EnemyBase enemy)
        {
            _enemylist.Add(enemy);
        }

        public void RemoveEnemy(EnemyBase enemy)
        {
            _enemylist.Remove(enemy);
        }

        protected override void Awake()
        {
            base.Awake();
            if (Instance != null && Instance != this) {
                Destroy(gameObject); // 需添加实例检查
                return;
            }
            Instance = this;
            // DontDestroyOnLoad(gameObject);
            
        }
        
        void OnEnable() {
            EventManage.Instance.OnGameExit+=SaveBeforeExit;
        }

        void OnDisable() {
            EventManage.Instance.OnGameExit-=SaveBeforeExit;
        }

        void SaveBeforeExit()
        {
            GameGlobalSettings.Instance.SaveData();
        }
       
        // 触发事件
        void OnApplicationQuit() {
            
#if UNITY_EDITOR
            Debug.Log("编辑器模式下退出，执行数据保存");
            EventManage.Instance.NotifyGameExit();
#else
            EventManage.Instance.NotifyGameExit();
#endif
        }

        public void Puase()
        {
            Time.timeScale = 0;
        }
        
        public void Reserves()
        {
            Time.timeScale = 1;
            GameGlobalSettings.Instance.ReadData();
            SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        }

        public void Continue()
        {
            Time.timeScale = 1;
        }
        
        public void NextScene()
        {
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
            GameGlobalSettings.Instance.ChangeState(SceneManager.GetActiveScene().buildIndex + 1);
            GameGlobalSettings.Instance.SaveData();
        }

        public void GoHome()
        {
            Time.timeScale = 1;
            SceneManager.LoadScene(0);
        }
        
        public void RandomScene()
        {
            int _random = new Random().Next(1, 3);
            SceneManager.LoadScene(_random);
            GameGlobalSettings.Instance.ChangeState(_random);
            GameGlobalSettings.Instance.SaveData();
        }
        
        public void NewGame()
        {
            GameGlobalSettings.Instance.OnInit();
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
            GameGlobalSettings.Instance.ChangeState(SceneManager.GetActiveScene().buildIndex + 1);
            
            GameGlobalSettings.Instance.SaveData();
        }

        public void ContinueGame()
        {
            GameGlobalSettings.Instance.ReadData();
            SceneManager.LoadScene(GameGlobalSettings.Instance.State);
        }
        
        public void ExitGame()
        {
#if UNITY_EDITOR
            UnityEditor.EditorApplication.isPlaying = false;
#else
    Application.Quit();
#endif
        }
    }
}