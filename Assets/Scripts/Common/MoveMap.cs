using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveMap : MonoBehaviour
{
    public float distance = 2;
    public TiltFiveDemos.T5InputReceiver t5InputReceiver;



    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        Vector3 camF = Camera.main.transform.forward;
        Vector3 camR = Camera.main.transform.right;

        camF.y = 0;
        camR.y = 0;
        camF = camF.normalized;
        camR = camR.normalized;

        if (t5InputReceiver._pressedTrigger == false)
        {
            if (t5InputReceiver._stickUp == true || Input.GetKey(KeyCode.W))
            {
                transform.position -= camF * distance * Time.deltaTime;
            }
            if (t5InputReceiver._stickDown == true || Input.GetKey(KeyCode.S))
            {
                transform.position += camF * distance * Time.deltaTime;
            }
            if (t5InputReceiver._stickRight == true || Input.GetKey(KeyCode.D))
            {
                transform.position -= camR * distance * Time.deltaTime;
            }
            if (t5InputReceiver._stickLeft == true || Input.GetKey(KeyCode.A))
            {
                transform.position += camR * distance * Time.deltaTime;
            }
        }
        
        
    }
    
}
