using System;
using System.Collections.Generic;
using System.Text;
using Server;
using Server.Core;

namespace Test
{
    public class Chat:SingleInstance<Chat>
    {
        private string[] wayIds = new string[]//房间号
        {
            "11111111",
            "22222222",
            "33333333",
        };

        private int[] TestFightCnt = new[]//局数
        {
            4, 8, 16
        };

        private Random random = new Random();

        private int[] userid = new int[]//玩家userid
        {
            24330,
            24331,
            24332,
            24333,
            24334,
            24335,
            24336,
            24337,
            24338,
            24339,
            24340,
            24341,
        };

        /// <summary>
        /// 幸运玩家测试之玩家人数
        /// </summary>
        private int LuckTest_PlayerCnt = 4;

        /// <summary>
        /// 幸运玩家测试之测试次数
        /// </summary>
        private int LuckTest_TestCnt = 1000;

        private StringBuilder _stringBuilder = new StringBuilder();
        
        private void LuckTest()
        {
            for (int i = 0; i < LuckTest_TestCnt; i++)
            {
                int index = 0;// random.Next(wayIds.Length);
                //随机 得到玩法id
                string wayid =wayIds[index];
                int fightCnt = TestFightCnt[index];

                // 创建长度为4的 FightScore 数组
                LuckPlayerManager.FightScore[] fightScores = new LuckPlayerManager.FightScore[LuckTest_PlayerCnt];
                
                //玩家的userid 随机得到玩家
                List<int> templist = new List<int>();
                for (int j = 0; j < LuckTest_PlayerCnt; j++)
                {
                    int randomUserIdIndex = j;// random.Next(userid.Length);
                    int randomUserId = userid[randomUserIdIndex];
                    templist.Add(randomUserId);
                    
                    fightScores[j] = new LuckPlayerManager.FightScore
                    {
                        UserId = randomUserId,
                        Value = 0
                    };
                }

                //模拟对应局数
                for (int k = 0; k < fightCnt; k++)
                {
                    int[] score = new int[LuckTest_PlayerCnt];
                    //分数最高的位置
                    int maxIndex = 0;

                    _stringBuilder.Clear();
                    //模拟分数
                    for (int j = 0; j < score.Length; j++)
                    {
                        score[j] = random.Next(2000);
                        if (score[j] > score[maxIndex])
                        {
                            maxIndex = j;
                        }

                        _stringBuilder.Append($"{score[j]} ");
                    }
                    
                    Debug.Info($"输赢子:{_stringBuilder.ToString()}");
                    
                    //模拟发牌
                    int luckIndex = LuckPlayerManager.Instance.GetLuckValueIndex(wayid, templist);
                    if (luckIndex >= 0)
                    {
                        if (luckIndex == maxIndex)
                        {
                            //不换牌
                        }
                        else
                        {
                            Debug.Info($"随机一个位置换牌:{maxIndex} {luckIndex}");
                            //换牌
                            (score[maxIndex],score[luckIndex]) = (score[luckIndex], score[maxIndex]);
                            LuckPlayerManager.Instance.PlayerLuck(wayid,templist[luckIndex]);
                        }
                    }

                    int[] money = new int[LuckTest_PlayerCnt];
                    // 计算输赢分
                    for (int j = 0; j < score.Length; j++)
                    {
                        money[j] = money[j] + score[j] * (score.Length - 1);
                        for (int l = 0; l < score.Length; l++)
                        {
                            if (l != j)
                            {
                                money[l] = money[l] - score[j];
                            }
                        }
                    }
                    
                    _stringBuilder.Clear();
                    _stringBuilder.Append($"第{k}局 ");
                    // 计算总局得分
                    for (int j = 0; j < money.Length; j++)
                    {
                        //每局的钱
                        _stringBuilder.Append($"userid:{templist[j]} value:{money[j]}, ");
                        fightScores[j].Value += money[j];
                    }

                    Debug.Info(_stringBuilder.ToString());
                }

                _stringBuilder.Clear();
                _stringBuilder.Append("总分 ");
                foreach (var item in fightScores)
                {
                    _stringBuilder.Append($"userid:{item.UserId} value:{item.Value}, ");
                }
                
                Debug.Info(_stringBuilder.ToString());
                LuckPlayerManager.Instance.AddScoreRecord(wayid,fightCnt,fightScores);
            }
        }

    }
}