using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScratControl : MonoBehaviour
{
    public ScoreboardController scoreboardController;
    public Transform inTree;
    public Transform outTree;
    public float maxDistance;
    public AudioSource laughAudio;
    private bool hasLaughed;

    // Start is called before the first frame update
    void Start()
    {
        transform.position = inTree.position;
    }

    // Update is called once per frame
    void Update()
    {
        bool shouldMove = scoreboardController.timeRemaining == 0;
        if (shouldMove) {
            Move();
        }
    }

    void Move()
    {
        transform.position = Vector3.MoveTowards(transform.position, outTree.position, maxDistance);

        bool shouldLaugh = Vector3.Distance(transform.position, outTree.position) < 0.001f;
        if (!hasLaughed && shouldLaugh) {
            Laugh();
        }
    }

    void Laugh() {
        hasLaughed = true;
        laughAudio.Play();
        print("Play Laugh");
    }
}
