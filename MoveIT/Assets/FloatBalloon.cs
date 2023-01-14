using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FloatBalloon : MonoBehaviour
{

    public float floatStrength = 3.5f; // change to your liking 

    public bool floatBalloon = false;

    Rigidbody m_Rigidbody;

    // Start is called before the first frame update
    void Start()
    {
        m_Rigidbody = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    public void PushBalloon(bool floatB)
    {
        floatBalloon = floatB;
       

        Debug.Log("it works");
    }


    private void Update()
    {
        if(floatBalloon == true)
        {
            m_Rigidbody.AddForce(Vector3.up * floatStrength);
            //Debug.Log("im pushing");
        }

    }
}
