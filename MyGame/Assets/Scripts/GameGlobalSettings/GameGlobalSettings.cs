using System;
using System.IO;
using Newtonsoft.Json;
using UnityEngine;

namespace BombGame
{
    public class GameGlobalSettings:LSingletonManager<GameGlobalSettings>
    {
        #region 字段

        /// <summary>
        /// 是否自伤
        /// </summary>
        public bool SelfHarm;

        /// <summary>
        /// 场景状态
        /// </summary>
        public int State;

        /// <summary>
        /// 玩家生命
        /// </summary>
        public float Health;

        /// <summary>
        /// 炸弹数量
        /// </summary>
        public int BombCount;

        /// <summary>
        /// 玩家金币
        /// </summary>
        public float Gold;
        
        /// <summary>
        /// 玩家等级
        /// </summary>
        public int Level;

        /// <summary>
        /// 
        /// </summary>
        public int Damage;

        /// <summary>
        /// 玩家钻石
        /// </summary>
        public int Diamonds;

        /// <summary>
        /// 玩家经验
        /// </summary>
        public float Experience;

        /// <summary>
        /// 最大经验值
        /// </summary>
        public float ExperienceMax;
        
        /// <summary>
        /// 玩家得分
        /// </summary>
        public int Score;

        /// <summary>
        /// Boss血量
        /// </summary>
        public float BossHealth;

        #endregion

        public override void OnNew()
        {
        }

        public void OnInit()
        {
            Damage  = 2;
            Level = 1;
            Score = 0;
            Experience = 0;
            ExperienceMax = 10;
            Diamonds = 0;
            Gold = 0;
            Health = 30;
            BombCount = 10;
            State = 0;
            SelfHarm = false;
        }
        
        public void ReadData()
        {
            if (!File.Exists(PathManage.Instance.GetJsonPath()))
            {
                OnInit();
                return;
            }

            try
            {
                string strjson = File.ReadAllText(PathManage.Instance.GetJsonPath());
                GameGlobalSettings gameGlobalSettings = JsonConvert.DeserializeObject<GameGlobalSettings>(strjson);
                Debug.Log("读取数据！:"+strjson);
                if (gameGlobalSettings.Level == 0)//由于报错之后所有数据都为0，所以这里判断一下，如果为0，则初始化数据
                {
                    OnInit();
                    return;
                }
                this.Damage=gameGlobalSettings.Damage==0?2:gameGlobalSettings.Damage;
                this.Diamonds=gameGlobalSettings.Diamonds;
                this.Experience=gameGlobalSettings.Experience;
                this.ExperienceMax=gameGlobalSettings.ExperienceMax;
                this.Gold=gameGlobalSettings.Gold;
                this.Health=gameGlobalSettings.Health<=0?30:gameGlobalSettings.Health;
                this.BombCount=gameGlobalSettings.BombCount;
                this.Level=gameGlobalSettings.Level;
                this.Score=gameGlobalSettings.Score;
                this.State=gameGlobalSettings.State;
                this.SelfHarm=gameGlobalSettings.SelfHarm;
                this.BossHealth = gameGlobalSettings.BossHealth;
                Debug.Log("读取数据成功！"+this.ToString());
            }
            catch (Exception e)
            {
                OnInit();
                Debug.LogError("读取数据失败！"+e.Message);
            }
            
            
        }

        public void Delete()
        {
            try
            {
                if (File.Exists(PathManage.Instance.GetJsonPath()))
                {
                    File.Delete(PathManage.Instance.GetJsonPath());
                    Debug.Log($"已成功删除配置文件：{PathManage.Instance.GetJsonPath()}");
            
                    // 可选：重置内存中的数据
                    // ResetToDefaultValues(); 
                }
            }
            catch (System.Exception e)
            {
                Debug.LogError($"配置文件删除失败：{e.GetType().Name} - {e.Message}");
            }
        }

        public void SaveData()
        {
            string str= JsonConvert.SerializeObject(GameGlobalSettings.Instance);
            Debug.Log("保存玩家数据"+str);
            try
            {
                File.WriteAllText(PathManage.Instance.GetJsonPath(),str);
            }
            catch (Exception e)
            {
                Debug.LogError($"保存失败：{e.Message}");
            }
            
        }

        #region 方法



        public void AddLevel(int value)
        {
            Level+=value;
            Health = 30;
        }

        public void AddScore(int value)
        {
            Score += value;
        }
        public void AddGold(float value)
        {
            Gold += value;
        }
        public void AddDiamonds(int value)
        {
            Diamonds += value;
        }
        public void AddHealth(float value)
        {
            Health += value;
        }
        public void ReduceHealth(float value)
        {
            Health -= value;
        }
        public void AddExperience(float value)
        {
            Experience += value;
        }
        public void ChangeDamage(int value)
        {
            Damage += value;
        }

        public void ChangeState(int state)
        {
            State = state;
        }
        public void AddExperienceMax(int value)
        {
            ExperienceMax += value;
        }
        public void SetHarm(bool value)
        {
            SelfHarm = value;
        }

        public void ChangeBombCount(int value)
        {
            BombCount += value;
        }

        public void BossHealthChanged(float value)
        {
            BossHealth = value;
        }
        
        #endregion 

    }
   
}