using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StartUI : MonoBehaviour
{
    private string _gameName;
    private Text _text;
    void Start()
    {
        _text = transform.GetChild(0).GetComponent<Text>();
    }

    public void StartGame()
    {
        Debug.Log("StartUI");
        Debug.Log("StartUIStartUI");
        Debug.Log("StartUIStartUI");
        _text.text="Uncle Rat3";
    }
    void Update()
    {
    }
}
