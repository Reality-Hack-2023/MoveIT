using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FloatBalloon : MonoBehaviour
{
    Rigidbody m_rigidBody;

    public float m_force = 3.5f;

    public bool handTrigger = false;

    public float timer = 5f;

    public bool touched = false;

    public float time = 0.1f;
    
    // Start is called before the first frame update
    void Start()
    {
        m_rigidBody = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        if(handTrigger == true)
        {

                m_rigidBody.AddForce(Vector3.up * m_force);
            Debug.Log("added forcee");
        }
        
    }

    public void FloatTouch(bool hand)
    {
        if(touched == false)
        {
            touched = true;
            Debug.Log("touched");

            StartCoroutine(TimeGravity(time));
        }
        handTrigger = hand;
    }

    IEnumerator TimeGravity(float time)
    {
        yield return new WaitForSeconds(time);

        Debug.Log("gravity status true");
        gameObject.GetComponent<Rigidbody>().useGravity = true;

        touched = false;
    }
}

