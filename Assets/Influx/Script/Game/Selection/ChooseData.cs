using SimpleJSON;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChooseData : MonoBehaviour
{
    // References to other scripts and components that this script interacts with.
    SensorScript sensorScriptObj; // Reference to the SensorScript attached to the parent GameObject.
    SensorManager sensorManager;   // Reference to the SensorManager that manages all sensors.

    private void Awake()
    {
        // Initialize references by finding the parent GameObject's components.
        sensorScriptObj = GetComponentInParent<SensorScript>();
        sensorManager = GetComponentInParent<SensorManager>();

        // Optional call to initialize the default state, but it's commented out.
        // DefaultStart();
    }

    // This method sets up the default state for live data selection.
    private void DefaultStart()
    {
        // Set the current data type to "Live".
        sensorScriptObj.currentDataName = DataType.Live.ToString();
        // Change the color of the second data label to green to indicate selection.
        sensorScriptObj.dataLabel[1].GetComponent<Image>().color = Color.green;

        // Adjust the visibility of various UI components.
        sensorScriptObj.graph.gameObject.SetActive(false); // Hide the graph initially.
        sensorScriptObj.measurementsObj.gameObject.SetActive(true); // Show measurement options.
        sensorScriptObj.dataTimeObj.gameObject.SetActive(false); // Hide the time options.
        sensorScriptObj.playBackTimeObj.gameObject.SetActive(false); // Hide the playback speed options.

        // Trigger an API call to start fetching live data.
        sensorScriptObj.dataObj.GetComponent<ChooseData>()._LiveDataAPICalling();
    }

    // This method is triggered when the user clicks to select a data type (Live or Historical).
    public void OnDataClick(string dataType)
    {
        // Reset the colors of all data labels to their unclicked state.
        UnClickedColor();

        if (dataType == DataType.Historical.ToString())
        {
            // When "Historical" data is selected:
            for (int i = 0; i < sensorManager.sensors.Length; i++)
            {
                // Update each sensor's current data type to "Historical".
                sensorManager.sensors[i].currentDataName = dataType;
                // Change the color of the first data label to green to indicate selection.
                sensorManager.sensors[i].dataLabel[0].GetComponent<Image>().color = Color.green;

                // Make the graph and other relevant UI elements visible.
                sensorManager.sensors[i].graph.gameObject.SetActive(true);
                sensorManager.sensors[i].measurementsObj.gameObject.SetActive(true);
                sensorManager.sensors[i].dataTimeObj.gameObject.SetActive(true);
                sensorManager.sensors[i].playBackTimeObj.gameObject.SetActive(true);

                // Stop any ongoing live data fetching coroutine.
                if (sensorManager.sensors[i].dataObj.GetComponent<ChooseData>()._liveAPI != null)
                    StopCoroutine(sensorManager.sensors[i].dataObj.GetComponent<ChooseData>()._liveAPI);

                // Stop the live data updates on the UI.
                sensorManager.sensors[i].banner.StopLiveData();
                sensorManager.sensors[i].dataObj._StopLiveDataAPICalling();
            }
        }
        else if (dataType == DataType.Live.ToString())
        {
            // When "Live" data is selected:
            for (int i = 0; i < sensorManager.sensors.Length; i++)
            {
                // Update each sensor's current data type to "Live".
                sensorManager.sensors[i].currentDataName = dataType;
                // Change the color of the second data label to green to indicate selection.
                sensorManager.sensors[i].dataLabel[1].GetComponent<Image>().color = Color.green;

                // Adjust the UI to show only relevant components for live data.
                sensorManager.sensors[i].graph.gameObject.SetActive(false);
                sensorManager.sensors[i].measurementsObj.gameObject.SetActive(true);
                sensorManager.sensors[i].dataTimeObj.gameObject.SetActive(false);
                sensorManager.sensors[i].playBackTimeObj.gameObject.SetActive(false);

                // Start the live data fetching coroutine.
                sensorManager.sensors[i].dataObj.GetComponent<ChooseData>()._LiveDataAPICalling();
            }
        }
    }

    // Method to start the coroutine for live data fetching.
    public void _LiveDataAPICalling()
    {
        _liveAPI = StartCoroutine(LiveAPICall());
    }

    // Method to stop the live data fetching coroutine.
    public void _StopLiveDataAPICalling()
    {
        if (_liveAPI != null)
            StopCoroutine(_liveAPI);
    }

    public Coroutine _liveAPI; // Reference to the live data fetching coroutine.

    // Coroutine that periodically fetches live data from an API.
    private IEnumerator LiveAPICall()
    {
        // Define what happens when the API call succeeds.
        Action<string> onSuccess = response => { Debug.Log("On Succeed Live"); SortingLiveData(); };
        var data = new WWWForm();
        
        // API call to fetch live data.
        RestClient.SendRequest_POST(DBName.cloud_c6ad657_i82d469_live_1_0, Measurements.enviro_data, 1, data, onSuccess, null, DataType.Live.ToString(), null);

        // Wait for the defined time interval before making the next API call.
        yield return new WaitForSeconds(sensorManager.liveTime);
        if (_liveAPI != null)
            StopCoroutine(_liveAPI);

        Debug.Log("live api2 - restarting the coroutine to continue fetching data");
        // Restart the coroutine to continue fetching data.
        _liveAPI = StartCoroutine(LiveAPICall());
    }

    // Method to process and sort the live data after it is fetched from the API.
    private void SortingLiveData()
    {
        // Parse the JSON response from the API.
        JSONNode info = JSON.Parse(FindObjectOfType<NetworkManager>().successTxt)["results"][0];

        var statement_id = info["statement_id"];
        var series = info["series"];

        // Loop through the series of data returned by the API.
        for (int i = 0; i < series.Count; i++)
        {
            var ID = series[i]["tags"]["ID"];
            var value = series[i]["values"][0];

            // Check if the ID matches the current sensor.
            if (ID == GetSensorID().ToLower())
            {
                // Update the sensor's data values (temperature, humidity, IAQ).
                sensorScriptObj.temp = value[4];//6
                sensorScriptObj.hum = value[1];//3
                sensorScriptObj.iaq = value[2];//4
            }
        }

        // Update the heat map visualization based on the current measurement type.
        if (sensorScriptObj.currentMeasurementName == MeasurementType.Temprature.ToString())
            sensorScriptObj.GetComponent<ShowHeatMap>().ShowHeatMapData(sensorScriptObj.temp);
        else if (sensorScriptObj.currentMeasurementName == MeasurementType.Humadity.ToString())
            sensorScriptObj.GetComponent<ShowHeatMap>().ShowHeatMapData(sensorScriptObj.hum);
        else if (sensorScriptObj.currentMeasurementName == MeasurementType.IAQ.ToString())
            sensorScriptObj.GetComponent<ShowHeatMap>().ShowHeatMapData(sensorScriptObj.iaq);
    }

    // Helper method to get the ID of the current sensor.
    private string GetSensorID()
    {
        return GetComponentInParent<SensorScript>().gameObject.name;
    }

    // Method to reset the color of all data labels to red, indicating they are not selected.
    private void UnClickedColor()
    {
        for (int i = 0; i < sensorManager.sensors.Length; i++)
        {
            sensorManager.sensors[i].dataLabel[0].GetComponent<Image>().color = Color.red;
            sensorManager.sensors[i].dataLabel[1].GetComponent<Image>().color = Color.red;
        }
    }

    // Method to set the first data label's color to green, indicating it is selected.
    private void ClickedColor()
    {
        sensorScriptObj.dataLabel[0].GetComponent<Image>().color = Color.green;
    }
}


/*
using SimpleJSON;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChooseData : MonoBehaviour
{
    SensorScript sensorScriptObj;
    SensorManager sensorManager;

    private void Awake()
    {
        sensorScriptObj = GetComponentInParent<SensorScript>();
        sensorManager = GetComponentInParent<SensorManager>();

        //DefaultStart();
    }
    private void DefaultStart()
    {
        sensorScriptObj.currentDataName = DataType.Live.ToString();
        sensorScriptObj.dataLabel[1].GetComponent<Image>().color = Color.green;

        // measurement
        sensorScriptObj.graph.gameObject.SetActive(false);
        sensorScriptObj.measurementsObj.gameObject.SetActive(true);
        sensorScriptObj.dataTimeObj.gameObject.SetActive(false);
        sensorScriptObj.playBackTimeObj.gameObject.SetActive(false);

        // Live API Calling
        //sensorManager.sensors[i].dataObj.GetComponent<ChooseData>()._liveAPI = StartCoroutine(sensorManager.sensors[i].dataObj.GetComponent<ChooseData>().LiveAPICall());
        sensorScriptObj.dataObj.GetComponent<ChooseData>()._LiveDataAPICalling();
    }
    public void OnDataClick(string dataType)
    {
        UnClickedColor();

        if (dataType == DataType.Historical.ToString())
        {
            for (int i = 0; i < sensorManager.sensors.Length; i++)
            {
                sensorManager.sensors[i].currentDataName = dataType;
                sensorManager.sensors[i].dataLabel[0].GetComponent<Image>().color = Color.green;

                // Graph 
                sensorManager.sensors[i].graph.gameObject.SetActive(true);
                sensorManager.sensors[i].measurementsObj.gameObject.SetActive(true);
                sensorManager.sensors[i].dataTimeObj.gameObject.SetActive(true);
                sensorManager.sensors[i].playBackTimeObj.gameObject.SetActive(true);

                if (sensorManager.sensors[i].dataObj.GetComponent<ChooseData>()._liveAPI != null)
                    StopCoroutine(sensorManager.sensors[i].dataObj.GetComponent<ChooseData>()._liveAPI);

                sensorManager.sensors[i].banner.StopLiveData();
                sensorManager.sensors[i].dataObj._StopLiveDataAPICalling();
            }
        }
        else if (dataType == DataType.Live.ToString())
        {
            for (int i = 0; i < sensorManager.sensors.Length; i++)
            {
                sensorManager.sensors[i].currentDataName = dataType;
                sensorManager.sensors[i].dataLabel[1].GetComponent<Image>().color = Color.green;

                // measurement
                sensorManager.sensors[i].graph.gameObject.SetActive(false);
                sensorManager.sensors[i].measurementsObj.gameObject.SetActive(true);
                sensorManager.sensors[i].dataTimeObj.gameObject.SetActive(false);
                sensorManager.sensors[i].playBackTimeObj.gameObject.SetActive(false);

                // Live API Calling
                sensorManager.sensors[i].dataObj.GetComponent<ChooseData>()._LiveDataAPICalling();
            }
        }
    }

    public void _LiveDataAPICalling()
    {
        _liveAPI = StartCoroutine(LiveAPICall());
    }
    public void _StopLiveDataAPICalling()
    {
        if (_liveAPI != null)
            StopCoroutine(_liveAPI);
    }

    public Coroutine _liveAPI;
    private IEnumerator LiveAPICall()
    {
        Action<string> onSuccess = response => { Debug.Log("On Succed Live"); SortingLiveData(); };
        var data = new WWWForm();
        //RestClient.SendRequest_POST(DBName.MainStCloud_220821, Measurements.enviro_data, 1, data, onSuccess, null, DataType.Live.ToString(), null);
        RestClient.SendRequest_POST(DBName.cloud_c6ad657_i82d469_live_1_0, Measurements.enviro_data, 1, data, onSuccess, null, DataType.Live.ToString(), null);


        yield return new WaitForSeconds(sensorManager.liveTime);
        if (_liveAPI != null)
            StopCoroutine(_liveAPI);

        Debug.Log("live api2");
        _liveAPI = StartCoroutine(LiveAPICall());
    }

    private void SortingLiveData()
    {
        JSONNode info = JSON.Parse(FindObjectOfType<NetworkManager>().successTxt)["results"][0];

        var statement_id = info["statement_id"];
        var series = info["series"];

        for (int i = 0; i < series.Count; i++)
        {
            var ID = series[i]["tags"]["ID"];
            var value = series[i]["values"][0];
            //Debug.Log($"ID : {ID} ----- GetSensorID() : {GetSensorID()}");
            if (ID == GetSensorID().ToLower())
            {
                sensorScriptObj.temp = value[6];
                sensorScriptObj.hum = value[3];
                sensorScriptObj.iaq = value[4];
            }
        }

        if (sensorScriptObj.currentMeasurementName == MeasurementType.Temprature.ToString())
            sensorScriptObj.GetComponent<ShowHeatMap>().ShowHeatMapData(sensorScriptObj.temp);
        else if (sensorScriptObj.currentMeasurementName == MeasurementType.Humadity.ToString())
            sensorScriptObj.GetComponent<ShowHeatMap>().ShowHeatMapData(sensorScriptObj.hum);
        else if (sensorScriptObj.currentMeasurementName == MeasurementType.IAQ.ToString())
            sensorScriptObj.GetComponent<ShowHeatMap>().ShowHeatMapData(sensorScriptObj.iaq);
    }
    private string GetSensorID()
    {
        return GetComponentInParent<SensorScript>().gameObject.name;
    }
    private void UnClickedColor()
    {
        for (int i = 0; i < sensorManager.sensors.Length; i++)
        {
            sensorManager.sensors[i].dataLabel[0].GetComponent<Image>().color = Color.red;
            sensorManager.sensors[i].dataLabel[1].GetComponent<Image>().color = Color.red;
        }
    }
    private void ClickedColor()
    {
        sensorScriptObj.dataLabel[0].GetComponent<Image>().color = Color.green;
    }
}
*/
