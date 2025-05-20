using System;
using UnityEngine.Events;

namespace BombGame
{
    public class EventManage:LSingletonManager<EventManage>
    {
        public override void OnNew()
        {
            
        }
        
        /// <summary>
        /// 游戏退出事件 保存
        /// </summary>
        public event Action OnGameExit;
        public void NotifyGameExit() {
            OnGameExit?.Invoke(); // 安全触发
        }

        public event EventHandler<LevelEventArgs> OnLevelChanged;
        public void LevelChanged(int value) {
            GameGlobalSettings.Instance.AddLevel(value);
            OnLevelChanged?.Invoke(this,new LevelEventArgs(value));
        }
        
        public event EventHandler<ExperienceChangedEventArgs> OnExperienceChanged;

        // 修改经验值时触发
        public void AddExperienceEvent(float value) {
            GameGlobalSettings.Instance.AddExperience(value);
            OnExperienceChanged?.Invoke(this,new ExperienceChangedEventArgs(value));
        }
        
        public event EventHandler<HealthEventArgs> OnHealthChanged;
        public void HealthChanged(float value) {
            GameGlobalSettings.Instance.ReduceHealth(value);
            OnHealthChanged?.Invoke(this,new HealthEventArgs(value));
        }
        public void HealthAdd(float value) {
            GameGlobalSettings.Instance.AddHealth(value);
            OnHealthChanged?.Invoke(this,new HealthEventArgs(value));
        }
        
        public event EventHandler<BombChangedEventArgs> OnBombChanged;
        public void ChangeBombCountEvent(int value) {
            GameGlobalSettings.Instance.ChangeBombCount(value);
            OnBombChanged?.Invoke(this,new BombChangedEventArgs(value));
        }

        public event EventHandler<BossHealthEventArgs> OnBossHealthChanged;
        public void ChangeBossHealthEvent(float value) {
            GameGlobalSettings.Instance.BossHealthChanged(value);
            OnBossHealthChanged?.Invoke(this,new BossHealthEventArgs(value));
        }

    }
    
    public class ExperienceChangedEventArgs : EventArgs {
        public float Experience { get; }

        public ExperienceChangedEventArgs(float experience) {
            Experience = experience;
        }
    }
    public class LevelEventArgs : EventArgs {
        public int Level { get; }

        public LevelEventArgs(int level) {
            Level = level;
        }
    }
    
    public class HealthEventArgs : EventArgs {
        public float Health { get; }

        public HealthEventArgs(float health) {
            Health = health;
        }
    }
    public class BombChangedEventArgs : EventArgs {
        public int Count { get; }

        public BombChangedEventArgs(int count) {
            Count = count;
        }
    }
    public class BossHealthEventArgs : EventArgs {
        public float BossHealth { get; }

        public BossHealthEventArgs(float count) {
            BossHealth = count;
        }
    }
}