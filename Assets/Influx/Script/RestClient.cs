using System;
using System.Collections.Generic;
using UnityEngine;

public static class RestClient
{
    private static readonly string baseLocal = "http://localhost:8086";
    private static readonly string baseLive = "https://nosydata.com/influxdb";

    private static NetworkManager _networkManager;
    public static NetworkManager NetworkInstance => _networkManager;

    public static void Initialize(NetworkManager networkManager)
    {
        _networkManager = networkManager;
    }

    /// <summary>
    /// 
    /// </summary>
    /// <param name="dbName"></param>
    /// <param name="pathVariable"></param>
    /// <param name="limit"></param>
    /// <param name="data"></param>
    /// <param name="onSuccess"></param>
    /// <param name="onFail"></param>
    /// <param name="cloudDatabase"> It is Cloud Data </param>
    public static void SendRequest_POST(DBName dbName, Measurements tableName, int limit, WWWForm data, Action<string> onSuccess, Action<string> onFail, string dataType, string dataTime)
    {
        string URL = "";
        if (dataType == DataType.Live.ToString())
        {
            //URL = baseLive + "/" + "query?db=" + dbName.ToString() + "&q=SELECT * FROM " + "\"" + tableName.ToString() + "\"" + " LIMIT " + limit;
            URL = baseLive + "/" + "query?db=" + dbName.ToString() + "&q=SELECT last(*) FROM " + "\"" + tableName.ToString() + "\"" + "WHERE time > now() -5m GROUP BY ID FILL(null)" + " LIMIT " + limit + "&epoch=s";
            var headers = new Dictionary<string, string>();
            headers.Add("Authorization", Info.Token);
            _networkManager.SendRequest_POST(URL, data, headers, onSuccess, onFail);
        }
        else if (dataTime == DataTime._4Hours.ToString() && dataType == DataType.Historical.ToString())
        {
            if (limit == 0)
                URL = baseLive + "/" + "query?db=" + dbName.ToString() + "&q=SELECT ROUND(mean(*)) FROM " + "\"" + tableName.ToString() + "\"" + "WHERE time > now() -4h GROUP BY ID, TIME(5m)" + "&epoch=s";
            else
                URL = baseLive + "/" + "query?db=" + dbName.ToString() + "&q=SELECT ROUND(mean(*)) FROM " + "\"" + tableName.ToString() + "\"" + "WHERE time > now() -4h GROUP BY ID, TIME(5m)" + " LIMIT " + limit + "&epoch=s";
            
            var headers = new Dictionary<string, string>();
            headers.Add("Authorization", Info.Token);
            _networkManager.SendRequest_POST(URL, data, headers, onSuccess, onFail);
        }
        else if (dataTime == DataTime._1Day.ToString() && dataType == DataType.Historical.ToString())
        {
            if (limit == 0)
                URL = baseLive + "/" + "query?db=" + dbName.ToString() + "&q=SELECT ROUND(mean(*)) FROM " + "\"" + tableName.ToString() + "\"" + "WHERE time > now() -24h GROUP BY ID, TIME(20m)" + "&epoch=s";
            else
                URL = baseLive + "/" + "query?db=" + dbName.ToString() + "&q=SELECT ROUND(mean(*)) FROM " + "\"" + tableName.ToString() + "\"" + "WHERE time > now() -24h GROUP BY ID, TIME(20m)" + " LIMIT " + limit + "&epoch=s";

            var headers = new Dictionary<string, string>();
            headers.Add("Authorization", Info.Token);
            _networkManager.SendRequest_POST(URL, data, headers, onSuccess, onFail);
        }
        else if (dataTime == DataTime._1Week.ToString() && dataType == DataType.Historical.ToString())
        {
            if (limit == 0)
                URL = baseLive + "/" + "query?db=" + dbName.ToString() + "&q=SELECT ROUND(mean(*)) FROM " + "\"" + tableName.ToString() + "\"" + "WHERE time > now() -1w GROUP BY ID, TIME(1h)" + "&epoch=s";
            else
                URL = baseLive + "/" + "query?db=" + dbName.ToString() + "&q=SELECT ROUND(mean(*)) FROM " + "\"" + tableName.ToString() + "\"" + "WHERE time > now() -1w GROUP BY ID, TIME(1h)" + " LIMIT " + limit + "&epoch=s";

            var headers = new Dictionary<string, string>();
            headers.Add("Authorization", Info.Token);
            _networkManager.SendRequest_POST(URL, data, headers, onSuccess, onFail);
        }
        else
        {
            URL = baseLocal + "/" + "query?db=" + dbName.ToString() + "&q=SELECT * FROM " + "\"" + tableName.ToString() + "\"" + " LIMIT " + limit;
            _networkManager.SendRequest_POST(URL, data, onSuccess, onFail);
        }
        Debug.Log(URL);
    }
}

public enum DBName
{
    _internal,
    stress,
    MainStLocal_220821,
   // MainStCloud_220821,
    cloud_c6ad657_i82d469_live_1_0
}
public enum Measurements
{
    energy_data,
    enviro_data,
    sensor_state
}
public enum MeasurementType
{
    Temprature,
    Humadity,
    IAQ
}
public enum DataType
{
    Historical,
    Live
}
public enum DataTime
{
    _4Hours,
    _1Day,
    _1Week
}
public enum PlayBackTime
{
    _play,
    _2x,
    _3x,
    _4x,
    _stop
}