using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = System.Random;

public class TextDemo : MonoBehaviour
{
    public Transform emenyPoint;
    public GameObject enemyPrefab;
    public List<GameObject> enemies;
    public Random random = new Random();
    public void OnEnable()
    {
        Debug.Log("Hello World");
        for (int i = 0; i < 2; i++)
        {
            int index = random.Next(0, enemies.Count);
            GameObject go= Instantiate(enemies[index], emenyPoint.position,emenyPoint.rotation);
            go.gameObject.SetActive(true);
            enemies.Remove(enemies[index]);
        }
    }

    
    
    private void OnDestroy()
    {
        
    }

    void Update()
    {
        
    }
}
