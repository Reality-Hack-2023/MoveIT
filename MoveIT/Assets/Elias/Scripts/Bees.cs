using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bees : MonoBehaviour
{
    public Rigidbody beeRB;
    public Transform player;

    public AudioClip ouchSound;// definining an AudioClip and naming it buzzerSound
    public AudioClip beeSound;

    public AudioSource audioSource;// To bring audio source component in order to play sound
    //public AudioSource audioSource2;

    public float speed;

    public float beeRadius;

    public Transform spawnlocationTransform;

    public bool hitPan = false;

    public Pan pan;

 

    

    // Start is called before the first frame update
    void Start()
    {
        beeRB = GetComponent<Rigidbody>();
        player = Camera.main.transform;
        audioSource = GetComponent<AudioSource>(); // we have to bring  in this AudioSource component in order to play sounds
    }


    void Update()
    {
       
        //if within radius set bee active
        if (Vector3.Distance(this.spawnlocationTransform.position, player.transform.position) <= beeRadius) // if it is within the radius, it will travel towards player
        {
            {
                if (pan.hitPan == false)


                {
                    AttackPlayer();
                }
                else { Debug.Log("attack stopped"); } 
            }
        }

    }

    public void AttackPlayer()
    {


        beeRB.transform.LookAt(player);

        beeRB.velocity = (beeRB.transform.forward * speed);

        audioSource.clip = beeSound;
        audioSource.Play();

    }
        public void FlyAway(Transform direction)
    {
        beeRB.transform.LookAt(direction);

        beeRB.velocity = (beeRB.transform.forward * -speed *3 );

        audioSource.clip = beeSound;
        audioSource.Play();
    }

    public void OnTriggerEnter(Collider other)// void returns null
    {

        
        // If enemy collides with either goal, destroy it
        if (other.CompareTag("MainCamera")) //&& alreadyStung == false

        {
            //Debug.Log("bee collided with rig");
          
            //Debug.Log(" already stung" + alreadyStung);

            gameObject.SetActive(false);
            //Debug.Log("bee set false");
     
            //Debug.Log("played audiosource");
            gameObject.SetActive(false);
            
          

        }

        if (other.CompareTag("BeeCatcher"))
        {
            //Destroy(this.gameObject);
            gameObject.SetActive(false);

            //add points
        }
    }

}
