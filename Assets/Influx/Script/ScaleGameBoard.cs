using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScaleGameBoard : MonoBehaviour
{
    public TiltFiveDemos.T5InputReceiver t5InputReceiver;
    public Vector3 zoomIn;
    public Vector3 zoomOut;
    public float speed = 1.0f;
    public float rotationSpeed = 20.0f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (TiltFive.Input.GetButton(TiltFive.Input.WandButton.One) || Input.GetKey(KeyCode.UpArrow))
        {
            //transform.localScale = Vector3.Lerp(transform.localScale, zoomIn, speed * Time.deltaTime);
            transform.localScale = Vector3.MoveTowards(transform.localScale, zoomIn, speed * Time.deltaTime);
        }

        if (TiltFive.Input.GetButton(TiltFive.Input.WandButton.Two) || Input.GetKey(KeyCode.DownArrow))
        {
            //transform.localScale = Vector3.Lerp(transform.localScale, zoomOut, speed * Time.deltaTime);
            transform.localScale = Vector3.MoveTowards(transform.localScale, zoomOut, speed * Time.deltaTime);
        }

        if (t5InputReceiver._pressedTrigger == true)
        {
            if (t5InputReceiver._stickRight == true)
            {
                transform.RotateAround(transform.position, transform.up, Time.deltaTime * rotationSpeed);
            }

            if (t5InputReceiver._stickLeft == true)
            {
                transform.RotateAround(transform.position, -transform.up, Time.deltaTime * rotationSpeed);
            }
        }

        if (Input.GetKey(KeyCode.RightArrow))
        {
            transform.RotateAround(transform.position, transform.up, Time.deltaTime * rotationSpeed);
        }

        if (Input.GetKey(KeyCode.LeftArrow))
        {
            transform.RotateAround(transform.position, -transform.up, Time.deltaTime * rotationSpeed);
        }
    }
}
