using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using static UnityEngine.GraphicsBuffer;

public class GopherController : MonoBehaviour
{
    [SerializeField] private Transform[] waypoints;
    [SerializeField] private Transform[] closestWaypoints;
    [SerializeField] private float speed = 3.0f;
    public bool isAlive = true;
    public GopherScoreboardScript gopherScript;

    // private SpacesHandManager spacesHandManager;

    // public void SubscribeToEvents() 
    // {
    //     spacesHandManager.handsChanged += onHandsChanged;
    // }

    // public void UnsubscribeFromEvents() 
    // {
    //     spacesHandManager.handsChanged -= onHandsChanged;
    // }

    // void onHandsChanged(SpacesHandsChangedEventArgs hands) 
    // {
    //     foreach (var hand in hands.updated)
    //     {
    //         if (hand.CurrentGesture.Type == SpacesHand.GestureType.GRAB && )
    //         {

    //         }
    //     }
    // }

    IEnumerator Start()
    {
        while (isAlive == true)
        {
            // Find the four closest waypoints
            //closestWaypoints = FindClosestWaypoints();
            closestWaypoints = waypoints;

            // Choose one of the closest waypoints to move towards
            Transform targetWaypoint = closestWaypoints[Random.Range(0, 3)];

            // Make the game object look at the target waypoint
            transform.LookAt(targetWaypoint);


            // Check if the position of the cube and sphere are approximately equal.
            while (Vector3.Distance(transform.position, targetWaypoint.position) > 0.01f)
            {
                // Move the game object towards the target waypoint
                transform.position = Vector3.MoveTowards(transform.position, targetWaypoint.position, Time.deltaTime * speed);


                yield return null;
            }
        }
    }

    Transform[] FindClosestWaypoints()
    {
        // Initialize an array to store the closest waypoints
        closestWaypoints = new Transform[4];

        // Initialize a variable to store the distance to the closest waypoint
        float closestDistance = Mathf.Infinity;

        // Iterate through all waypoints
        for (int i = 0; i < waypoints.Length; i++)
        {
            // Calculate the distance to the current waypoint
            float distance = Vector3.Distance(transform.position, waypoints[i].position);

            // Check if the current waypoint is closer than the closest waypoint
            if (distance < closestDistance)
            {
                // Update the closest waypoint
                closestDistance = distance;
                closestWaypoints[0] = waypoints[i];

                // Sort the closestWaypoints array
                for (int j = 1; j < 4; j++)
                {
                    if (!closestWaypoints[j])
                    {
                        closestWaypoints[j] = waypoints[i];
                        break;
                    }
                    else if (Vector3.Distance(transform.position, closestWaypoints[j].position) > distance)
                    {
                        for (int k = 3; k > j; k--)
                            closestWaypoints[k] = closestWaypoints[k - 1];
                        closestWaypoints[j] = waypoints[i];
                        break;
                    }
                }
            }
        }

        // Return the closest waypoints
        return closestWaypoints;
    }

    public void killGopher() {
        isAlive = false;
    }
}

