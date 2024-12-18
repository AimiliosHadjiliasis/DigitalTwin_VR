using ChartsAndGraphs3D;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChooseMeasurement : MonoBehaviour
{
    SensorScript sensorScriptObj;
    SensorManager sensorManager;

    private void Awake()
    {
        sensorScriptObj = GetComponentInParent<SensorScript>();
        sensorManager = GetComponentInParent<SensorManager>();
    }

    private void Start()
    {
        DefaulStart();
    }
    private void DefaulStart()
    {
        for (int i = 0; i < sensorManager.sensors.Length; i++)
        {
            sensorManager.sensors[i].currentMeasurementName = MeasurementType.Temprature.ToString();
            sensorManager.sensors[i].measurementLabel[0].GetComponent<Image>().color = Color.green;
        }
    }
    public void OnMeasurementClick(string name)
    {
        UnClickedColor();
        if (name == MeasurementType.Temprature.ToString())
        {

            for (int i = 0; i < sensorManager.sensors.Length; i++)
            {
                sensorManager.sensors[i].currentMeasurementName = name;
                sensorManager.sensors[i].measurementLabel[0].GetComponent<Image>().color = Color.green;
            }
        }
        else if (name == MeasurementType.Humadity.ToString())
        {

            for (int i = 0; i < sensorManager.sensors.Length; i++)
            {
                sensorManager.sensors[i].currentMeasurementName = name;
                sensorManager.sensors[i].measurementLabel[1].GetComponent<Image>().color = Color.green;
            }
        }
        else if (name == MeasurementType.IAQ.ToString())
        {

            for (int i = 0; i < sensorManager.sensors.Length; i++)
            {
                sensorManager.sensors[i].currentMeasurementName = name;
                sensorManager.sensors[i].measurementLabel[2].GetComponent<Image>().color = Color.green;
            }
        }
        if (sensorScriptObj.currentDataName == DataType.Historical.ToString())
        {
            for (int i = 0; i < sensorManager.sensors.Length; i++)
                sensorManager.sensors[i].graph.ChooseMeasurement();
        }
        else
        {

            for (int i = 0; i < sensorManager.sensors.Length; i++)
            {
                if (sensorManager.sensors[i].currentMeasurementName == MeasurementType.Temprature.ToString())
                    sensorManager.sensors[i].GetComponent<ShowHeatMap>().ShowHeatMapData(sensorManager.sensors[i].temp);
                else if (sensorManager.sensors[i].currentMeasurementName == MeasurementType.Humadity.ToString())
                    sensorManager.sensors[i].GetComponent<ShowHeatMap>().ShowHeatMapData(sensorManager.sensors[i].hum);
                else if (sensorManager.sensors[i].currentMeasurementName == MeasurementType.IAQ.ToString())
                    sensorManager.sensors[i].GetComponent<ShowHeatMap>().ShowHeatMapData(sensorManager.sensors[i].iaq);
            }
        }

    }

    private void UnClickedColor()
    {
        for (int i = 0; i < sensorManager.sensors.Length; i++)
        {
            sensorManager.sensors[i].measurementLabel[0].GetComponent<Image>().color = Color.red;
            sensorManager.sensors[i].measurementLabel[1].GetComponent<Image>().color = Color.red;
            sensorManager.sensors[i].measurementLabel[2].GetComponent<Image>().color = Color.red;
        }
    }

    private void ClickedColor()
    {
        sensorScriptObj.measurementLabel[0].GetComponent<Image>().color = Color.green;
    }
}
