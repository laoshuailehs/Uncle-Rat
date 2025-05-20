using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace BombGame
{
    public class UIManager : GameBase
    {
        public static UIManager Instance{ get; private set; }
        
        //左上角角色血量和等级
        private GameObject TopLeftPanel;
        private GameObject healthBar;
        private TMP_Text levelText;
        
        //血量显示
        private GameObject healthOne;
        private GameObject healthTwo;
        private GameObject healthThree;
        
        //Boss血条显示
        private Slider EnemyBossBlod;
        
        //游戏结束界面
        private GameObject overPanel;
        private GameObject BombCount;
        private GameObject PausePanel;
        private GameObject GameOverPanel;
        private Button btnSure;

        private Text Tip;
        private Button Help;
        
        
        // public GameObject experienceBar;
        
        protected override void Awake()
        {
            base.Awake();
            if (Instance != null && Instance != this) {
                Destroy(gameObject); // 需添加实例检查
                return;
            }
            Instance = this;
            // DontDestroyOnLoad(gameObject);
            
            TopLeftPanel= transform.GetChild(0).gameObject;
            levelText = TopLeftPanel.transform.GetChild(1).GetComponent<TMP_Text>();
            
            healthBar= TopLeftPanel.transform.GetChild(0).gameObject;
            healthOne= healthBar.transform.GetChild(0).gameObject;
            healthTwo= healthBar.transform.GetChild(1).gameObject;
            healthThree= healthBar.transform.GetChild(2).gameObject;

            EnemyBossBlod = transform.GetChild(1).GetComponent<Slider>();
            
            overPanel= transform.GetChild(2).gameObject;
            BombCount= overPanel.transform.GetChild(0).gameObject;
            btnSure= BombCount.transform.GetChild(1).GetComponent<Button>();
            
            PausePanel= overPanel.transform.GetChild(1).gameObject;
            
            GameOverPanel= overPanel.transform.GetChild(3).gameObject;
            
            
            
            Tip=  transform.GetChild(9).GetComponent<Text>();
            Help=  transform.GetChild(10).GetComponent<Button>();
        }
        
        public void TipGame(string s,bool isShow)
        {
            Tip.text = s;
            Tip.gameObject.SetActive(isShow);
        }

        public void AddBombCountPanel()
        {
            BombCount.SetActive(true);
        }
        
        private void OnEnable()
        {
            EventManage.Instance.OnHealthChanged += OnHealthChanged;
            EventManage.Instance.OnLevelChanged += OnLevelChanged;
            EventManage.Instance.OnExperienceChanged += OnExperienceChanged;
            EventManage.Instance.OnGameExit += OnGameExit;
            EventManage.Instance.OnBombChanged += OnBombChanged;
            EventManage.Instance.OnBossHealthChanged += OnBossHealthChanged;
            
            btnSure.onClick.AddListener(()=>{
                EventManage.Instance.ChangeBombCountEvent(10);
                EventManage.Instance.HealthChanged(5);
            });
        }
        

        private void OnDisable()
        {
            EventManage.Instance.OnHealthChanged -= OnHealthChanged;
            EventManage.Instance.OnLevelChanged -= OnLevelChanged;
            EventManage.Instance.OnExperienceChanged -= OnExperienceChanged;
            EventManage.Instance.OnGameExit -= OnGameExit;
            EventManage.Instance.OnBombChanged -= OnBombChanged;
        }

        protected override void Start()
        {
            base.Start();
            healthOne.SetActive(GameGlobalSettings.Instance.Health>0);
            healthTwo.SetActive(GameGlobalSettings.Instance.Health>10);
            healthThree.SetActive(GameGlobalSettings.Instance.Health>20);
            levelText.text = $"Lv.{GameGlobalSettings.Instance.Level}  Damage:{GameGlobalSettings.Instance.Damage} Boom:{GameGlobalSettings.Instance.BombCount}";
            BombCount.SetActive(GameGlobalSettings.Instance.BombCount<=0);
            Help.gameObject.SetActive(false);

            if(GameObject.FindGameObjectWithTag("Boss")==null)return;
            EnemyBossBlod.gameObject.SetActive(true);
            GameGlobalSettings.Instance.BossHealth=GameObject.FindGameObjectWithTag("Boss").GetComponent<EnemyBase>().health;
            EnemyBossBlod.maxValue = GameGlobalSettings.Instance.BossHealth;
            EnemyBossBlod.value= GameGlobalSettings.Instance.BossHealth;
        }
        

        private void OnHealthChanged(object sender, HealthEventArgs e)
        {
            Debug.Log($"血量UI改变！当前值：{GameGlobalSettings.Instance.Health} 受到伤害：{e.Health}");
            healthOne.SetActive(GameGlobalSettings.Instance.Health>0);
            healthTwo.SetActive(GameGlobalSettings.Instance.Health>10);
            healthThree.SetActive(GameGlobalSettings.Instance.Health>20);
            if (GameGlobalSettings.Instance.Health <= 0)
            {
                GameOverPanel.SetActive(true);
                Help.gameObject.SetActive(true);
                SureButtonAds.Instance.LoadAd();//加载广告
            }
            else
            {
                GameOverPanel.SetActive(false);
                Help.gameObject.SetActive(false);
            }
        }
        
        private void OnLevelChanged(object sender, LevelEventArgs e)
        {
            levelText.text = $"Lv.{GameGlobalSettings.Instance.Level}  Damage:{GameGlobalSettings.Instance.Damage} Boom:{GameGlobalSettings.Instance.BombCount}";
        }
        
        
        private void OnBombChanged(object sender, BombChangedEventArgs e)
        {
            Debug.Log($"炸弹数量改变！当前值：{GameGlobalSettings.Instance.BombCount}");
            levelText.text = $"Lv.{GameGlobalSettings.Instance.Level}  Damage:{GameGlobalSettings.Instance.Damage} Boom:{GameGlobalSettings.Instance.BombCount}";
            BombCount.SetActive(GameGlobalSettings.Instance.BombCount <= 0);

        }

        private void OnExperienceChanged(object sender, ExperienceChangedEventArgs e)
        {
            Debug.Log($"经验值改变！当前值：{GameGlobalSettings.Instance.Experience}");
        }
        
        private void OnBossHealthChanged(object sender, BossHealthEventArgs e)
        {
            EnemyBossBlod.value = GameGlobalSettings.Instance.BossHealth;
            Debug.Log($"Boss血量改变！当前值：{GameGlobalSettings.Instance.BossHealth}");
        }
        
        private void OnGameExit()
        {
            Debug.Log("游戏退出！");
        }


    }
}