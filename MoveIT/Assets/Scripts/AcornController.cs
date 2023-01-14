using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SocialPlatforms.Impl;

public class AcornController : MonoBehaviour
{
    private GameObject target;
    public AcornSpawner acornSpawner;
    [SerializeField] private Vector3 forceVector = new Vector3(150f, 100f, 0f);
    
 
    // Start is called before the first frame update
    void Start()
    {
        target = GameObject.FindGameObjectWithTag("MainCamera");
        Rigidbody rb;
        transform.LookAt(target.transform);
        transform.Rotate(new Vector3(0, 90, 0));
        rb = GetComponent<Rigidbody>();
        rb.AddRelativeForce(forceVector);
        Physics.IgnoreCollision(GetComponent<Collider>(), acornSpawner.GetComponent<Collider>(), true);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnCollisionEnter(Collision collision)
    {
        // You probably want a check here to make sure you're $$anonymous$$tting a zombie
        // Note that t$$anonymous$$s is not the best method for doing so.
        if (collision.gameObject.name == "Floor Collider")
        {
            Destroy(this.gameObject);
            acornSpawner.acornsFell++;
        }
    }
}
