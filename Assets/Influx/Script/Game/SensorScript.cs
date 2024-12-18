using ChartsAndGraphs3D;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SensorScript : MonoBehaviour
{
    public static SensorScript instance; // Singleton instance, allows easy global access to this script.

    public GameObject fullObj; // The main GameObject representing the sensor.
    public ProcessBar banner; // Reference to the ProcessBar script, which manages UI elements like progress bars.
    public LineChart graph; // Reference to a 3D line chart component that visualizes data trends over time.

    public ChooseData dataObj; // Reference to a component managing data type selection (e.g., live vs historical).
    internal GameObject[] dataLabel = new GameObject[2]; // Array to hold UI labels related to data types.
    [HideInInspector] public string currentDataName; // Stores the name of the current data type (e.g., "Live" or "Historical").

    public ChooseMeasurement measurementsObj; // Reference to a component managing measurement type selection (e.g., temperature, humidity).
    internal GameObject[] measurementLabel = new GameObject[3]; // Array to hold UI labels related to measurement types.
    [HideInInspector] public string currentMeasurementName; // Stores the name of the current measurement type.

    public ChooseDataTime dataTimeObj; // Reference to a component managing the selection of time lengths for data (e.g., 4 hours, 1 day).
    internal GameObject[] dataTimeLabel = new GameObject[3]; // Array to hold UI labels related to data time lengths.
    [HideInInspector] public string selectedDataTimeLength; // Stores the name of the currently selected time length.

    public ChooseGraphSpeed playBackTimeObj; // Reference to a component managing playback speed for historical data (e.g., play, 2x speed).
    internal GameObject[] playBackTimeLabel = new GameObject[5]; // Array to hold UI labels related to playback speeds.
    [HideInInspector] public string playBackTimeLength; // Stores the name of the current playback speed.

     public float temp = 0; // Placeholder value for temperature data. 
     public float hum = 0; // Placeholder value for humidity data.
     public float iaq = 0; // Placeholder value for Indoor Air Quality (IAQ) data.

    public GameObject areaSensor; // Reference to the sensor's area of influence in the scene.

    // public Transform baseHeatMapPoint;
    // public GameObject[] heatMapPoints;

    // Method to add a sensor area, that can be triggered from the Unity Editor's context menu.
    [ContextMenu("Add Sensor Area")]
    public void AddSensorArea()
    {
        // Disables the second child GameObject of this sensor.
        transform.GetChild(1).gameObject.SetActive(false);
        // areaSensor = transform.GetChild(1).gameObject;
    }

    // Awake is called when the script instance is being loaded.
    private void Awake()
    {
        // Assigns this instance to the static singleton variable.
        instance = this;

        // Initialize the measurement labels by getting the child GameObjects from the measurementsObj.
        for (int i = 0; i < measurementsObj.transform.childCount; i++)
        {
            measurementLabel[i] = measurementsObj.transform.GetChild(i).gameObject;
        }

        // Initialize the data labels by getting the child GameObjects from the dataObj.
        for (int i = 0; i < dataObj.transform.childCount; i++)
        {
            dataLabel[i] = dataObj.transform.GetChild(i).gameObject;
        }

        // Initialize the data time labels by getting the child GameObjects from the dataTimeObj.
        for (int i = 0; i < dataTimeObj.transform.childCount; i++)
        {
            dataTimeLabel[i] = dataTimeObj.transform.GetChild(i).gameObject;
        }

        // Initialize the playback time labels by getting the child GameObjects from the playBackTimeObj.
        for (int i = 0; i < playBackTimeObj.transform.childCount; i++)
        {
            playBackTimeLabel[i] = playBackTimeObj.transform.GetChild(i).gameObject;
        }

        // for (int i = 0; i < baseHeatMapPoint.childCount; i++)
        // {
        //     heatMapPoints[i] = baseHeatMapPoint.GetChild(i).gameObject;
        // }
    }

    // Update is called once per frame.
    void Update()
    {
        // Rotates the fullObj to always face the camera, ensuring the sensor's UI or visual representation is always oriented correctly.
      //  fullObj.transform.LookAt(MainMenuScript.instance.floorSelection.camera.transform);
    }
}
