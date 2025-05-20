using System;
using UnityEngine;

namespace BombGame
{
    public interface ISingleton
    {
        
    }
    
    public abstract class Singleton:ISingleton
    {
       public abstract void OnNew();
    }

    public abstract class LSingletonManager<T>:Singleton where T:Singleton,new() 
    {
        private static T _instance;
        public static T Instance
        {
            get
            {
                try
                {
                    if (_instance == null)
                    {
                        _instance = new T();
                        _instance.OnNew();
                    }
                }
                catch (Exception e)
                {
                    Debug.Log(e);
                }
                
                return _instance;
            }
            
        }
    }
    
    public class ESingletonManager<T> where T:Singleton,new()
    {
        private static T _instance=new T();
        public static T Instance => _instance;
    }
    
}