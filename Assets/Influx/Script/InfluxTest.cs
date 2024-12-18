using Mapbox.Unity.Location;
using Mapbox.Utils;
using SimpleJSON;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;

public class InfluxTest : MonoBehaviour
{
    public float value;
    public Vector2d location;
    public GameObject model;
    //internal Vector2d loc;
    [SerializeField] LocationProviderFactory locationProviderFactory;
    IEnumerator Start()
    {

        yield return new WaitForSeconds(0.1f);
        //Info.Token = "Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJ1c2VybmFtZSI6InR3aW5uaW5nIiwiZXhwIjoxNzA0MDQxOTk5fQ.nxTqF9KntOHF7rGaTUVEx3upYcsthUhClzfoOTNGVJo";
        //Info.Token = "Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJ1c2VybmFtZSI6InR3aW5uaW5nIiwiZXhwIjoxNzUxMzQyMzk5fQ.ntCePz0b8Y2tpk520bjwpr4OJOriL7BveUiMsfcNcvY";
        Info.Token = "Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJ1c2VybmFtZSI6InR3aW5uaW5nIiwiZXhwIjoxNzUxMzQyMzk5fQ.3dO3hr-tlG_iE5DDl8Xhra1dVAdovmWHzB-6LHso10Q";

        //location = new Vector2(41.72793496424278f, -71.28267190860763f);  // Default Location
        //loc = location;
        locationProviderFactory.mapManager.Initialize(location, 16);
        model.SetActive(true);
    }
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            
            Action<string> onSuccess = response => { Debug.Log("On Succeed"); SortingData(); };
            var data = new WWWForm();
            RestClient.SendRequest_POST(DBName.cloud_c6ad657_i82d469_live_1_0, Measurements.enviro_data, 0, data, onSuccess, null, DataType.Historical.ToString(), DataTime._4Hours.ToString());
            //RestClient.SendRequest_POST(DBName.MainStCloud_220821, Measurements.enviro_data, 0, data, onSuccess, null, DataType.Historical.ToString(), DataTime._4Hours.ToString());
            //RestClient.SendRequest_POST(DBName.MainStCloud_220821, Measurements.enviro_data, 1, data, onSuccess, null, DataType.Live.ToString(), null);
            Action<string> onError = errorResponse => { Debug.Log("Request Failed: " + errorResponse); };
            RestClient.SendRequest_POST(DBName.cloud_c6ad657_i82d469_live_1_0, Measurements.enviro_data, 0, data, onSuccess, onError, DataType.Historical.ToString(), DataTime._4Hours.ToString());
        }
    }

    private string SortingData()
    {
        JSONNode info = JSON.Parse(FindObjectOfType<NetworkManager>().successTxt)["results"][0];

        var statement_id = info["statement_id"];
        var series = info["series"];

        var name = series[0]["name"];
        var values = series[0]["values"][0];

        var columns = series[0]["columns"];
        var time = columns[0];
        var _00 = columns[1];
        var _01 = columns[2];
        var ID = columns[3];
        var light = columns[4];
        var occupancy = columns[5];

        double tempUDT = values[0];
        //var udt = (tempUDT / 1000000);  // Convert nenoseconds to milliseconds
        DateTime timestamp = DateTime.UnixEpoch.AddSeconds(tempUDT);
        var dt = timestamp.ToString("yyyy-MM-dd");
        var ti = timestamp.ToString("HH:mm:ss");
        var tiH = timestamp.ToString("HH");
        var tiM = timestamp.ToString("mm");

        double _hours = double.Parse(tiH);

        DateTime prevTime = timestamp.AddHours(-2);

        var dt2 = prevTime.ToString("yyyy-MM-dd");
        var ti2 = prevTime.ToString("HH:mm:ss");
        var tiH2 = prevTime.ToString("HH");
        var tiM2 = prevTime.ToString("mm");

        double _hours2 = double.Parse(tiH2);

        Debug.Log($"{tempUDT}----- {_hours}------{dt}-----{ti}-----{tiH}-----{tiM}");
        //Debug.Log($"{tempUDT}----- {_hours2}------{dt2}-----{ti2}-----{tiH2}-----{tiM2}");
        return FindObjectOfType<NetworkManager>().successTxt.ToString();
    }
}
