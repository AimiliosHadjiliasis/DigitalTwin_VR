using SimpleJSON;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ProcessBar : MonoBehaviour
{
    // References to other scripts and components that this script interacts with.
    SensorScript sensorScriptObj; // Reference to the SensorScript component on the parent GameObject.
    SensorManager sensorManager;   // Reference to the SensorManager component, which manages all sensors.

    // References to the UI elements that represent the temperature, humidity, and IAQ progress bars.
    public GameObject m_Temprature; // UI element for displaying temperature data.
    public GameObject m_Humadity;   // UI element for displaying humidity data.
    public GameObject m_IAQ;        // UI element for displaying IAQ data.

    private float time = 1f; // Time interval (in seconds) for updating the progress bars.

    // Initialization method called when the script instance is being loaded.
    void Start()
    {
        // Get references to SensorScript and SensorManager components from the parent GameObject.
        sensorScriptObj = GetComponentInParent<SensorScript>();
        sensorManager = GetComponentInParent<SensorManager>();

        // Start the data updating process.
        DefaultStart();
    }

    // Method to start the data updating process by launching a coroutine.
    public void DefaultStart()
    {
        getDataCall = StartCoroutine(DelayGetDataCall());
    }

    Coroutine getDataCall; // Reference to the coroutine for periodically updating the data.

    // Coroutine that periodically updates the progress bars by calling the UpdateAllBar method.
    public IEnumerator DelayGetDataCall()
    {
        // Update all progress bars with the latest data.
        UpdateAllBar();

        // Wait for the specified time interval before repeating the update.
        yield return new WaitForSeconds(time);

        // Stop the current coroutine (if it's still running) and start a new one.
        if (getDataCall != null)
            StopCoroutine(getDataCall);

        getDataCall = StartCoroutine(DelayGetDataCall());
    }

    // Method to stop the live data updating process.
    public void StopLiveData()
    {
        if (getDataCall != null)
            StopCoroutine(getDataCall);
    }

    // Method to update all progress bars (temperature, humidity, and IAQ) with the latest data.
    public void UpdateAllBar()
    {
        

        // Update the temperature progress bar.
        m_Temprature.transform.GetChild(1).GetChild(0).GetComponent<Image>().fillAmount = 
            UpdateBar(sensorManager.temprature.minValue, sensorManager.temprature.maxValue, sensorScriptObj.temp, sensorManager.temprature.part, MeasurementType.Temprature);
       // Debug.Log("Sensor ID: " + sensorScriptObj + "Fetched Temperature: " + sensorScriptObj.temp);

        // Update the humidity progress bar.
        m_Humadity.transform.GetChild(1).GetChild(0).GetComponent<Image>().fillAmount = 
            UpdateBar(sensorManager.humadity.minValue, sensorManager.humadity.maxValue, sensorScriptObj.hum, sensorManager.humadity.part, MeasurementType.Humadity);

        // Update the IAQ progress bar.
        m_IAQ.transform.GetChild(1).GetChild(0).GetComponent<Image>().fillAmount = 
            UpdateBar(sensorManager.iaq.minValue, sensorManager.iaq.maxValue, sensorScriptObj.iaq, sensorManager.iaq.part, MeasurementType.IAQ);
    }

    // Method to calculate the fill amount of a progress bar based on the sensor data.
    private float UpdateBar(float min, float max, float value, float part, MeasurementType type)
    {
        // Calculate the fractional part value for dividing the progress bar.
        float partValue = 1 / part;

        // Normalize the sensor value to a 0-1 range based on the min and max values.
        float a = Mathf.InverseLerp(min, max, value);

        // Determine which part the normalized value falls into.
        int b = Mathf.CeilToInt(a / partValue);
        if (b == 0)
        {
            b = 1;
        }

        // Calculate the exact fill amount for the progress bar.
        float c = partValue * ((b - 1) + 0.5f);

        // Display the actual sensor value on the progress bar.
        DisplayValue(c, value, type);

        // Set the color of the progress bar based on the sensor value.
        SetImageColor(value, type);

        // Return the calculated fill amount for the progress bar.
        return b * partValue;
    }

    // Method to display the actual sensor value on the progress bar.
    private void DisplayValue(float c, float value, MeasurementType type)
    {
        // Determine the position of the value label on the progress bar.
        var val = Mathf.Lerp(-5f, 5f, c); // Map the normalized value to an actual position on the bar.

        if (type == MeasurementType.Temprature)
        {
            // Update the position and text of the temperature label.
            m_Temprature.transform.GetChild(1).GetChild(0).GetChild(0).transform.localPosition = new Vector2(val, 0);
            m_Temprature.transform.GetChild(1).GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = value.ToString() + "°C";
        }
        else if (type == MeasurementType.Humadity)
        {
            // Update the position and text of the humidity label.
            m_Humadity.transform.GetChild(1).GetChild(0).GetChild(0).transform.localPosition = new Vector2(val, 0);
            m_Humadity.transform.GetChild(1).GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = value.ToString() + "%";
        }
        else if (type == MeasurementType.IAQ)
        {
            // Update the position and text of the IAQ label.
            m_IAQ.transform.GetChild(1).GetChild(0).GetChild(0).transform.localPosition = new Vector2(val, 0);
            m_IAQ.transform.GetChild(1).GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = value.ToString() + " IAQ";
        }
    }

    // Method to set the color of the progress bar based on the sensor value.
    private void SetImageColor(float value, MeasurementType type)
    {
        // Logic for setting the color of the temperature progress bar.
        if (type == MeasurementType.Temprature)
        {
            for (int i = 0; i < sensorManager.temprature.greenValue.Length; i++)
            {
                if (value >= sensorManager.temprature.greenValue[i].x && value <= sensorManager.temprature.greenValue[i].y)
                {
                    m_Temprature.transform.GetChild(1).GetChild(0).GetComponent<Image>().color = Color.green;
                    return;
                }
            }
            for (int i = 0; i < sensorManager.temprature.yellowValue.Length; i++)
            {
                if (value >= sensorManager.temprature.yellowValue[i].x && value <= sensorManager.temprature.yellowValue[i].y)
                {
                    m_Temprature.transform.GetChild(1).GetChild(0).GetComponent<Image>().color = Color.yellow;
                    return;
                }
            }
            m_Temprature.transform.GetChild(1).GetChild(0).GetComponent<Image>().color = Color.red;
        }
        // Logic for setting the color of the humidity progress bar.
        else if (type == MeasurementType.Humadity)
        {
            for (int i = 0; i < sensorManager.humadity.greenValue.Length; i++)
            {
                if (value >= sensorManager.humadity.greenValue[i].x && value <= sensorManager.humadity.greenValue[i].y)
                {
                    m_Humadity.transform.GetChild(1).GetChild(0).GetComponent<Image>().color = Color.green;
                    return;
                }
            }
            for (int i = 0; i < sensorManager.humadity.yellowValue.Length; i++)
            {
                if (value >= sensorManager.humadity.yellowValue[i].x && value <= sensorManager.humadity.yellowValue[i].y)
                {
                    m_Humadity.transform.GetChild(1).GetChild(0).GetComponent<Image>().color = Color.yellow;
                    return;
                }
            }
            m_Humadity.transform.GetChild(1).GetChild(0).GetComponent<Image>().color = Color.red;
        }
        // Logic for setting the color of the IAQ progress bar.
        else if (type == MeasurementType.IAQ)
        {
            for (int i = 0; i < sensorManager.iaq.greenValue.Length; i++)
            {
                if (value >= sensorManager.iaq.greenValue[i].x && value <= sensorManager.iaq.greenValue[i].y)
                {
                    m_IAQ.transform.GetChild(1).GetChild(0).GetComponent<Image>().color = Color.green;
                    return;
                }
            }
            for (int i = 0; i < sensorManager.iaq.yellowValue.Length; i++)
            {
                if (value >= sensorManager.iaq.yellowValue[i].x && value <= sensorManager.iaq.yellowValue[i].y)
                {
                    m_IAQ.transform.GetChild(1).GetChild(0).GetComponent<Image>().color = Color.yellow;
                    return;
                }
            }
            m_IAQ.transform.GetChild(1).GetChild(0).GetComponent<Image>().color = Color.red;
        }
    }
}

