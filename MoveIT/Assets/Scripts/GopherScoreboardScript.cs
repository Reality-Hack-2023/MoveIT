using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using JetBrains.Annotations;
using TMPro;
using UnityEngine;
using static UnityEngine.UIElements.UxmlAttributeDescription;

public class GopherScoreboardScript : MonoBehaviour
{
    [SerializeField] public GameObject gopher;
    public float timeRemaining = 30;
    [SerializeField] private TMP_Text sText;
    private string timer = "";
    public bool timerIsRunning = false;
    // Start is called before the first frame update
    void Start()
    {
        sText = gameObject.GetComponent<TextMeshPro>();
        timerIsRunning = true;
        
        
    }

    // Update is called once per frame
    void Update()
    {
        float minutes = Mathf.FloorToInt(timeRemaining / 60);
        float seconds = Mathf.FloorToInt(timeRemaining % 60);

        sText.text = timer + "\nCatch and pinch\nthe gopher!";
        if (timerIsRunning)
        {
            if (timeRemaining > 0)
            {
                timeRemaining -= Time.deltaTime;
                timer = minutes + ":" + seconds;
        }
            else
            {
                timer = "Time's up!";
                timeRemaining = 0;
                timerIsRunning = false;
                gopher.GetComponent<GopherController>().killGopher();
                
            }
        }
        
    }
}
