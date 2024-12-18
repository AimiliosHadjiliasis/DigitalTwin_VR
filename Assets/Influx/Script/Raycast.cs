using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using TiltFive;

public class Raycast : MonoBehaviour
{
    public GameObject lastHit;
    public Button button;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        var ray = new Ray(Vector3.zero, Vector3.forward);
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit))
        {
            //lastHit = hit.transform.gameObject;
            Debug.Log(hit.transform.gameObject);
            //button = hit.transform.gameObject.GetComponent<Button>();
        }

        if (TiltFive.Input.GetButton(TiltFive.Input.WandButton.One))
        {
            Debug.Log("Buttons work");
        }
        

        if (UnityEngine.Input.GetKeyDown(KeyCode.E))
        {

        }

        //Physics.Raycast(new Ray(Vector3.zero, Vector3.forward), out hit);
        //if (hit.collider.gameObject.GetComponent<Button>() != null)
        //{
        //    button = hit.collider.gameObject.GetComponent<Button>();
        //}

        //Vector3 fwd = transform.TransformDirection(Vector3.forward);

        //if (Physics.Raycast(transform.position, fwd, 10))
        //{
        //    //print("There is something in front of the object");
        //}
    }
}
