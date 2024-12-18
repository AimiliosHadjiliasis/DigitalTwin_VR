using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MainMenuScript : MonoBehaviour
{
    public static MainMenuScript instance;

    [SerializeField] private GameObject m_DataType;
    [SerializeField] private GameObject m_Measurement;
    [SerializeField] private GameObject m_TimeLength;
    [SerializeField] private GameObject m_PlayBackTimeLimit;

    [HideInInspector] public GameObject selectedFloor;

    [HideInInspector] public FloorSelection floorSelection;
    [HideInInspector] public SensorManager sensorManager1;
    [HideInInspector] public SensorManager sensorManager2;
    public bool isBothFloorSelected = false;

    [Header("FillBar")]
    [SerializeField] private Vector2 imagePosLimit;
    public Image playBackImg;
    public Image pointImg;

    //[Header("Heat Map")]
    //public Material greenHeatMap;
    //public Material yellowHeatMap;
    //public Material redHeatMap;

    private void Awake()
    {
        instance = this;

    }
    private void Start()
    {
        DefaultAwake();
    }
    private void FixedUpdate()
    {
        if (sensorManager1.sensors[0].currentDataName == DataType.Historical.ToString())
            SetFillAmount();
    }
    private void DefaultAwake()
    {
        floorSelection.SelectFloor1();
    }

    #region ----- Data Type -----
    public void OnLiveDataClick()
    {
        if (isBothFloorSelected)
        {
            sensorManager1.sensors[0].dataObj.OnDataClick(DataType.Live.ToString());
            sensorManager2.sensors[0].dataObj.OnDataClick(DataType.Live.ToString());
        }
        else
        {
            sensorManager1.sensors[0].dataObj.OnDataClick(DataType.Live.ToString());
        }
    }
    public void OnHistoricalDataClick()
    {
        if (isBothFloorSelected)
        {
            sensorManager1.sensors[0].dataObj.OnDataClick(DataType.Historical.ToString());
            sensorManager2.sensors[0].dataObj.OnDataClick(DataType.Historical.ToString());
        }
        else
        {
            sensorManager1.sensors[0].dataObj.OnDataClick(DataType.Historical.ToString());
        }
    }
    #endregion

    #region ----- Measurements -----
    public void OnTempratureClick()
    {
        if (isBothFloorSelected)
        {
            sensorManager1.sensors[0].measurementsObj.OnMeasurementClick(MeasurementType.Temprature.ToString());
            sensorManager2.sensors[0].measurementsObj.OnMeasurementClick(MeasurementType.Temprature.ToString());
        }
        else
        {
            sensorManager1.sensors[0].measurementsObj.OnMeasurementClick(MeasurementType.Temprature.ToString());
        }
    }
    public void OnHumidityClick()
    {
        if (isBothFloorSelected)
        {
            sensorManager1.sensors[0].measurementsObj.OnMeasurementClick(MeasurementType.Humadity.ToString());
            sensorManager2.sensors[0].measurementsObj.OnMeasurementClick(MeasurementType.Humadity.ToString());
        }
        else
        {
            sensorManager1.sensors[0].measurementsObj.OnMeasurementClick(MeasurementType.Humadity.ToString());
        }
    }
    public void OnIAQClick()
    {
        if (isBothFloorSelected)
        {
            sensorManager1.sensors[0].measurementsObj.OnMeasurementClick(MeasurementType.IAQ.ToString());
            sensorManager2.sensors[0].measurementsObj.OnMeasurementClick(MeasurementType.IAQ.ToString());
        }
        else
        {
            sensorManager1.sensors[0].measurementsObj.OnMeasurementClick(MeasurementType.IAQ.ToString());
        }
    }
    #endregion

    #region ----- Time Length -----
    public void On_4HoursClick()
    {
        if (isBothFloorSelected)
        {
            sensorManager1.sensors[0].dataTimeObj.OnDataTimeClick(DataTime._4Hours.ToString());
            sensorManager2.sensors[0].dataTimeObj.OnDataTimeClick(DataTime._4Hours.ToString());
        }
        else
        {
            sensorManager1.sensors[0].dataTimeObj.OnDataTimeClick(DataTime._4Hours.ToString());
        }
    }
    public void On_1DayClick()
    {
        if (isBothFloorSelected)
        {
            sensorManager1.sensors[0].dataTimeObj.OnDataTimeClick(DataTime._1Day.ToString());
            sensorManager2.sensors[0].dataTimeObj.OnDataTimeClick(DataTime._1Day.ToString());
        }
        else
        {
            sensorManager1.sensors[0].dataTimeObj.OnDataTimeClick(DataTime._1Day.ToString());
        }
    }
    public void On_1WeekClick()
    {
        if (isBothFloorSelected)
        {
            sensorManager1.sensors[0].dataTimeObj.OnDataTimeClick(DataTime._1Week.ToString());
            sensorManager2.sensors[0].dataTimeObj.OnDataTimeClick(DataTime._1Week.ToString());
        }
        else
        {
            sensorManager1.sensors[0].dataTimeObj.OnDataTimeClick(DataTime._1Week.ToString());
        }
    }
    #endregion

    #region ----- PlayBack Time Limit -----  
    public void On_StopClick()
    {
        if (isBothFloorSelected)
        {
            sensorManager1.sensors[0].playBackTimeObj.OnGraphSpeedClick(PlayBackTime._stop.ToString());
            sensorManager2.sensors[0].playBackTimeObj.OnGraphSpeedClick(PlayBackTime._stop.ToString());
        }
        else
        {
            sensorManager1.sensors[0].playBackTimeObj.OnGraphSpeedClick(PlayBackTime._stop.ToString());
        }
    }
    public void On_PlayClick()
    {
        if (isBothFloorSelected)
        {
            sensorManager1.sensors[0].playBackTimeObj.OnGraphSpeedClick(PlayBackTime._play.ToString());
            sensorManager2.sensors[0].playBackTimeObj.OnGraphSpeedClick(PlayBackTime._play.ToString());
        }
        else
        {
            sensorManager1.sensors[0].playBackTimeObj.OnGraphSpeedClick(PlayBackTime._play.ToString());
        }
    }
    public void On_2xClick()
    {
        if (isBothFloorSelected)
        {
            sensorManager1.sensors[0].playBackTimeObj.OnGraphSpeedClick(PlayBackTime._2x.ToString());
            sensorManager2.sensors[0].playBackTimeObj.OnGraphSpeedClick(PlayBackTime._2x.ToString());
        }
        else
        {
            sensorManager1.sensors[0].playBackTimeObj.OnGraphSpeedClick(PlayBackTime._2x.ToString());
        }
    }
    public void On_3xClick()
    {
        if (isBothFloorSelected)
        {
            sensorManager1.sensors[0].playBackTimeObj.OnGraphSpeedClick(PlayBackTime._3x.ToString());
            sensorManager2.sensors[0].playBackTimeObj.OnGraphSpeedClick(PlayBackTime._3x.ToString());
        }
        else
        {
            sensorManager1.sensors[0].playBackTimeObj.OnGraphSpeedClick(PlayBackTime._3x.ToString());
        }
    }
    public void On_4xClick()
    {
        if (isBothFloorSelected)
        {
            sensorManager1.sensors[0].playBackTimeObj.OnGraphSpeedClick(PlayBackTime._2x.ToString());
            sensorManager2.sensors[0].playBackTimeObj.OnGraphSpeedClick(PlayBackTime._2x.ToString());
        }
        else
        {
            sensorManager1.sensors[0].playBackTimeObj.OnGraphSpeedClick(PlayBackTime._2x.ToString());
        }
    }
    private void SetFillAmount()
    {
        playBackImg.fillAmount = Mathf.InverseLerp(0, sensorManager1.sensors[0].graph.moveGraphTime, sensorManager1.sensors[0].graph.playbackTimeLimit);
        pointImg.transform.localPosition = new Vector3(Mathf.Lerp(imagePosLimit.x, imagePosLimit.y, playBackImg.fillAmount), 0, 0);
    }
    #endregion
}
