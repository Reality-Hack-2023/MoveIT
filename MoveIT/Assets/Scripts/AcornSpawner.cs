using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AcornSpawner : MonoBehaviour
{
    [SerializeField] private GameObject acorn;
    [SerializeField] private GameObject scoreboard;
    [SerializeField] private float time = 0.0f;
    [SerializeField] private float timeInterval = 2.0f;
    public int acornsFell = 0;
    public int acornsHit = 0;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        time += Time.deltaTime;

        if (time >= timeInterval)
        {
            time = 0.0f;
            Bounds bounds = GetComponent<Collider>().bounds;
            float offsetX = Random.Range(-1.0f, 1.0f);
            float offsetY = Random.Range(-0.25f, 0.25f);
            float offsetZ = 0.0f;

            GameObject acornObject = GameObject.Instantiate(acorn);
            var controller = acornObject.GetComponent<AcornController>();
            var controller2 = scoreboard.GetComponent<ScoreboardController>();
            controller.acornSpawner = this;
            controller2.acornSpawner = this;
            acornObject.transform.position = bounds.center + new Vector3(offsetX, offsetY, offsetZ);

        }
    }
}
