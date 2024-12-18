using Cinemachine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

public class FloorSelection : MonoBehaviour
{
    public Camera camera;
    public Animator animator;
    public CinemachineVirtualCamera cinemachineVirtualCamera;

    [SerializeField] GameObject floor1;
    [SerializeField] GameObject floor2;

    public void SelectFloor1()
    {
        if (cinemachineVirtualCamera.GetCinemachineComponent<CinemachineTrackedDolly>().m_PathPosition == 0) return;
        animator.SetTrigger("Floor1");
        floor1.SetActive(true);
        floor2.SetActive(false);

        MainMenuScript.instance.isBothFloorSelected = false;
        MainMenuScript.instance.selectedFloor = floor1;
        MainMenuScript.instance.sensorManager1 = floor1.GetComponentInChildren<SensorManager>();
        MainMenuScript.instance.OnLiveDataClick();
    }
    public void SelectFloor2()
    {
        if (cinemachineVirtualCamera.GetCinemachineComponent<CinemachineTrackedDolly>().m_PathPosition == 1) return;
        animator.SetTrigger("Floor2");
        floor2.SetActive(true);
        floor1.SetActive(false);

        MainMenuScript.instance.isBothFloorSelected = false;
        MainMenuScript.instance.selectedFloor = floor2;
        MainMenuScript.instance.sensorManager1 = floor2.GetComponentInChildren<SensorManager>();
        MainMenuScript.instance.OnLiveDataClick();
    }

    public void SelectBothFloor()
    {
        floor1.SetActive(true);
        floor2.SetActive(true);

        MainMenuScript.instance.isBothFloorSelected = true;
        MainMenuScript.instance.selectedFloor = floor2;
        MainMenuScript.instance.sensorManager1 = floor1.GetComponentInChildren<SensorManager>();
        MainMenuScript.instance.sensorManager2 = floor2.GetComponentInChildren<SensorManager>();
        MainMenuScript.instance.OnLiveDataClick();
    }
}
