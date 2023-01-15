using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pan : MonoBehaviour
{
    Rigidbody m_rbBee;

    public float m_force;

    public bool hitPan = false;

    public Bees bees;
    

    // Start is called before the first frame update
    public void OnTriggerEnter(Collider other)// void returns null
    {

        if (other.CompareTag("bee"))
        {
            Debug.Log("hitPan is true");
            hitPan = true;

            other.gameObject.GetComponent<Bees>().FlyAway(gameObject.transform);

            //Destroy(other.gameObject, .75f);
        }

        
    }
}
