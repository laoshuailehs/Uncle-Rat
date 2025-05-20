using System;
using UnityEngine;
using UnityEngine.Pool;
using Object = UnityEngine.Object;

namespace BombGame
{
    public static class BombPoolService
    {
        private static IObjectPool<GameObject> _bombPool;
        private static GameObject _prefab;

        public static void Initialize(GameObject prefab, int capacity = 10)
        {
            _prefab = prefab;
            _bombPool = new ObjectPool<GameObject>(
                () => Object.Instantiate(_prefab),
                obj => obj.SetActive(true),
                obj => obj.SetActive(false),
                Object.Destroy,
                true, capacity, 50);
        }

        public static GameObject GetBomb() => _bombPool?.Get();
        public static void ReleaseBomb(GameObject bomb) => _bombPool?.Release(bomb);
    }
    
    public static class ObjectPoolManager
    {

        public static IObjectPool<GameObject> CreateGameObjectPool(
            GameObject prefab, 
            int defaultCapacity = 10, 
            int maxSize = 50)
        {
            return new ObjectPool<GameObject>(
                createFunc: () => Object.Instantiate(prefab),
                actionOnGet: obj => obj.SetActive(true),
                actionOnRelease: obj => obj.SetActive(false),
                actionOnDestroy: Object.Destroy,
                collectionCheck: true,
                defaultCapacity: defaultCapacity,
                maxSize: maxSize
            );
        }
    }
    
    
    
}