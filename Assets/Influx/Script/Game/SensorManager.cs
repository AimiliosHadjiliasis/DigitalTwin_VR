using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class SensorManager : MonoBehaviour
{
    public static SensorManager instance;
    public SensorScript[] sensors;

    public MeasurementsOfData temprature;
    public MeasurementsOfData humadity;
    public MeasurementsOfData iaq;

    public float liveTime = 300f;
    public float storeDataTime = 5f;

    private void Awake()
    {
        instance = this;
    }

    //public void CloseBigPopUp()
    //{
    //    foreach (var item in sensors)
    //    {
    //        item.graph.gameObject.SetActive(false);
    //    }
    //}
}
