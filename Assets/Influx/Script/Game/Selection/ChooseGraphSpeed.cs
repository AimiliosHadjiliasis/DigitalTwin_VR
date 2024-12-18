using ChartsAndGraphs3D;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class ChooseGraphSpeed : MonoBehaviour
{
    SensorScript sensorScriptObj;
    SensorManager sensorManager;
    private void Start()
    {
        sensorScriptObj = GetComponentInParent<SensorScript>();
        sensorManager = GetComponentInParent<SensorManager>();
        StartCoroutine(DefaultStart());
    }
    IEnumerator DefaultStart()
    {
        yield return new WaitForSeconds(2f);
        UnClickedColor();
        sensorScriptObj.playBackTimeLength = PlayBackTime._play.ToString();
        sensorScriptObj.graph.moveGraphTime = 40;
        sensorScriptObj.graph.ChooseSpeed();
        yield return new WaitForSeconds(0.05f);
        sensorScriptObj.playBackTimeLabel[0].GetComponent<Image>().color = Color.green;
    }
    public void OnGraphSpeedClick(string graphSpeed)
    {
        UnClickedColor();
        if (graphSpeed == PlayBackTime._play.ToString())
        {
            for (int i = 0; i < sensorManager.sensors.Length; i++)
            {
                sensorManager.sensors[i].playBackTimeLength = graphSpeed;
                sensorManager.sensors[i].graph.moveGraphTime = 40;
                sensorManager.sensors[i].playBackTimeLabel[0].GetComponent<Image>().color = Color.green;
                sensorManager.sensors[i].graph.ChooseSpeed();
            }
        }
        else if (graphSpeed == PlayBackTime._2x.ToString())
        {
            for (int i = 0; i < sensorManager.sensors.Length; i++)
            {
                sensorManager.sensors[i].playBackTimeLength = graphSpeed;
                sensorManager.sensors[i].graph.moveGraphTime = 30;
                sensorManager.sensors[i].playBackTimeLabel[1].GetComponent<Image>().color = Color.green;
                sensorManager.sensors[i].graph.ChooseSpeed();
            }
        }
        else if (graphSpeed == PlayBackTime._3x.ToString())
        {
            for (int i = 0; i < sensorManager.sensors.Length; i++)
            {
                sensorManager.sensors[i].playBackTimeLength = graphSpeed;
                sensorManager.sensors[i].graph.moveGraphTime = 20;
                sensorManager.sensors[i].playBackTimeLabel[2].GetComponent<Image>().color = Color.green;
                sensorManager.sensors[i].graph.ChooseSpeed();
            }
        }
        else if (graphSpeed == PlayBackTime._4x.ToString())
        {
            for (int i = 0; i < sensorManager.sensors.Length; i++)
            {
                sensorManager.sensors[i].playBackTimeLength = graphSpeed;
                sensorManager.sensors[i].graph.moveGraphTime = 10;
                sensorManager.sensors[i].playBackTimeLabel[3].GetComponent<Image>().color = Color.green;
                sensorManager.sensors[i].graph.ChooseSpeed();
            }
        }
        else if (graphSpeed == PlayBackTime._stop.ToString())
        {
            for (int i = 0; i < sensorManager.sensors.Length; i++)
            {
                sensorManager.sensors[i].playBackTimeLength = graphSpeed;
                sensorManager.sensors[i].playBackTimeLabel[4].GetComponent<Image>().color = Color.green;
                sensorManager.sensors[i].graph.StopSpeed();
            }
        }
    }

    private void UnClickedColor()
    {
        for (int i = 0; i < sensorManager.sensors.Length; i++)
        {
            sensorManager.sensors[i].playBackTimeLabel[0].GetComponent<Image>().color = Color.red;
            sensorManager.sensors[i].playBackTimeLabel[1].GetComponent<Image>().color = Color.red;
            sensorManager.sensors[i].playBackTimeLabel[2].GetComponent<Image>().color = Color.red;
            sensorManager.sensors[i].playBackTimeLabel[3].GetComponent<Image>().color = Color.red;
            sensorManager.sensors[i].playBackTimeLabel[4].GetComponent<Image>().color = Color.red;
        }
    }
    private void ClickedColor()
    {
        sensorScriptObj.measurementLabel[0].GetComponent<Image>().color = Color.green;
    }
}
