using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraZoom : MonoBehaviour
{
    public Camera cam;
    public float zoomMultiplier = 2;
    public float defaultFov = 48;
    public float zoomFov = 24;
    public float zoomDuration = 2;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (TiltFive.Input.GetButton(TiltFive.Input.WandButton.One))
        {
            cam.fieldOfView = defaultFov;
        }
        if (TiltFive.Input.GetButton(TiltFive.Input.WandButton.Two))
        {
            cam.fieldOfView = zoomFov;
        }
    }

    void ZoomCamera(float target)
    {
        float angle = Mathf.Abs((defaultFov / zoomMultiplier) - defaultFov);
        cam.fieldOfView = Mathf.MoveTowards(cam.fieldOfView, target, angle / zoomDuration * Time.deltaTime);
    }
}
