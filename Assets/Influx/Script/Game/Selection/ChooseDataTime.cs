using ChartsAndGraphs3D;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChooseDataTime : MonoBehaviour
{
    SensorScript sensorScriptObj;
    SensorManager sensorManager;
    private void Start()
    {
        sensorScriptObj = GetComponentInParent<SensorScript>();
        sensorManager = GetComponentInParent<SensorManager>();
        //OnDataTimeClick(DataTime._4Hours.ToString());
        DefaultStart();
    }
    private void DefaultStart()
    {
        sensorScriptObj.selectedDataTimeLength = DataTime._4Hours.ToString();
        sensorScriptObj.dataTimeLabel[0].GetComponent<Image>().color = Color.green;

        sensorScriptObj.graph.Reset();
    }
    public void OnDataTimeClick(string dataTime)
    {
        UnClickedColor();
        if (dataTime == DataTime._4Hours.ToString())
        {
            for (int i = 0; i < sensorManager.sensors.Length; i++)
            {
                sensorManager.sensors[i].selectedDataTimeLength = dataTime;
                sensorManager.sensors[i].dataTimeLabel[0].GetComponent<Image>().color = Color.green;
            }
        }
        else if (dataTime == DataTime._1Day.ToString())
        {
            for (int i = 0; i < sensorManager.sensors.Length; i++)
            {
                sensorManager.sensors[i].selectedDataTimeLength = dataTime;
                sensorManager.sensors[i].dataTimeLabel[1].GetComponent<Image>().color = Color.green;
            }
        }
        else if (dataTime == DataTime._1Week.ToString())
        {
            for (int i = 0; i < sensorManager.sensors.Length; i++)
            {
                sensorManager.sensors[i].selectedDataTimeLength = dataTime;
                sensorManager.sensors[i].dataTimeLabel[2].GetComponent<Image>().color = Color.green;
            }
        }

        for (int i = 0; i < sensorManager.sensors.Length; i++)
            sensorManager.sensors[i].graph.Reset();
    }
    private void UnClickedColor()
    {
        for (int i = 0; i < sensorManager.sensors.Length; i++)
        {
            sensorManager.sensors[i].dataTimeLabel[0].GetComponent<Image>().color = Color.red;
            sensorManager.sensors[i].dataTimeLabel[1].GetComponent<Image>().color = Color.red;
            sensorManager.sensors[i].dataTimeLabel[2].GetComponent<Image>().color = Color.red;
        }
    }
    private void ClickedColor()
    {
        sensorScriptObj.dataTimeLabel[0].GetComponent<Image>().color = Color.green;
    }
}
