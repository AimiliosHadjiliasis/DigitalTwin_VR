using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShowHeatMap : MonoBehaviour
{
    // References to other scripts and components that this script interacts with.
    SensorScript sensorScriptObj; // Reference to the SensorScript component on the same GameObject.
    SensorManager sensorManager;   // Reference to the SensorManager component on the parent GameObject.

    Material mMaterial; // Material of the areaSensor, which will be used to display the heat map color.

    // Variable to store the value that will be used for the heat map, though not utilized directly in the code.
    float hitMapValue;

    // Initialization method called when the script instance is being loaded.
    private void Start()
    {
        // Get references to SensorScript and SensorManager components.
        sensorScriptObj = GetComponent<SensorScript>();
        sensorManager = GetComponentInParent<SensorManager>();

        // Get the material of the areaSensor, which is part of the sensorScriptObj.
        mMaterial = sensorScriptObj.areaSensor.GetComponent<MeshRenderer>().material;
    }

    // Method to update the heat map color based on the provided sensor value.
    public void ShowHeatMapData(float value)
    {
        // Set the material's color based on the current measurement type (e.g., Temperature, Humidity, IAQ).
        mMaterial.color = GetColor(value, sensorScriptObj.currentMeasurementName);
    }

    // Method to determine the color based on the sensor value and measurement type.
    public Color GetColor(float value, string type)
    {
        // Check if the current measurement is Temperature.
        if (type == MeasurementType.Temprature.ToString())
        {
            // Loop through the green value ranges defined in the SensorManager for temperature.
            for (int i = 0; i < sensorManager.temprature.greenValue.Length; i++)
            {
                // If the value falls within the green range, set the color to green.
                if (value >= sensorManager.temprature.greenValue[i].x && value <= sensorManager.temprature.greenValue[i].y)
                {
                    mMaterial.SetInt("_ColorIndex", 1); // Set a shader property if needed (not used directly in this script).
                    return Color.green; // Return green color.
                }
            }
            // Loop through the yellow value ranges defined in the SensorManager for temperature.
            for (int i = 0; i < sensorManager.temprature.yellowValue.Length; i++)
            {
                // If the value falls within the yellow range, set the color to yellow.
                if (value >= sensorManager.temprature.yellowValue[i].x && value <= sensorManager.temprature.yellowValue[i].y)
                {
                    mMaterial.SetInt("_ColorIndex", 2); // Set a shader property if needed.
                    return Color.yellow; // Return yellow color.
                }
            }
            // If the value doesn't fall within green or yellow ranges, set the color to red.
            mMaterial.SetInt("_ColorIndex", 3); // Set a shader property if needed.
            return Color.red; // Return red color.
        }
        // Check if the current measurement is Humidity.
        else if (type == MeasurementType.Humadity.ToString())
        {
            // Loop through the green value ranges defined in the SensorManager for humidity.
            for (int i = 0; i < sensorManager.humadity.greenValue.Length; i++)
            {
                if (value >= sensorManager.humadity.greenValue[i].x && value <= sensorManager.humadity.greenValue[i].y)
                {
                    mMaterial.SetInt("_ColorIndex", 1);
                    return Color.green;
                }
            }
            // Loop through the yellow value ranges defined in the SensorManager for humidity.
            for (int i = 0; i < sensorManager.humadity.yellowValue.Length; i++)
            {
                if (value >= sensorManager.humadity.yellowValue[i].x && value <= sensorManager.humadity.yellowValue[i].y)
                {
                    mMaterial.SetInt("_ColorIndex", 2);
                    return Color.yellow;
                }
            }
            mMaterial.SetInt("_ColorIndex", 3);
            return Color.red;
        }
        // Check if the current measurement is IAQ.
        else if (type == MeasurementType.IAQ.ToString())
        {
            // Loop through the green value ranges defined in the SensorManager for IAQ.
            for (int i = 0; i < sensorManager.iaq.greenValue.Length; i++)
            {
                if (value >= sensorManager.iaq.greenValue[i].x && value <= sensorManager.iaq.greenValue[i].y)
                {
                    mMaterial.SetInt("_ColorIndex", 1);
                    return Color.green;
                }
            }
            // Loop through the yellow value ranges defined in the SensorManager for IAQ.
            for (int i = 0; i < sensorManager.iaq.yellowValue.Length; i++)
            {
                if (value >= sensorManager.iaq.yellowValue[i].x && value <= sensorManager.iaq.yellowValue[i].y)
                {
                    mMaterial.SetInt("_ColorIndex", 2);
                    return Color.yellow;
                }
            }
            mMaterial.SetInt("_ColorIndex", 3);
            return Color.red;
        }

        // Default case: if no measurement type matches, return red color.
        mMaterial.SetInt("_ColorIndex", 3);
        return Color.red;
    }

    // A potentially alternate method to get color, focusing on passing specific green and yellow ranges directly.
    private Color GetColor2(float value, string type, Vector2[] valueOfGreen, Vector2[] valueOfYellow)
    {
        // Currently only implemented for temperature as an example.
        if (type == MeasurementType.Temprature.ToString())
        {
            for (int i = 0; i < valueOfGreen.Length; i++)
            {
                if (value >= valueOfGreen[i].x && value <= valueOfGreen[i].y)
                {
                    mMaterial.SetInt("_ColorIndex", 1);
                    return Color.green;
                }
            }
            for (int i = 0; i < valueOfYellow.Length; i++)
            {
                if (value >= valueOfYellow[i].x && value <= valueOfYellow[i].y)
                {
                    mMaterial.SetInt("_ColorIndex", 2);
                    return Color.yellow;
                }
            }
            mMaterial.SetInt("_ColorIndex", 3);
            return Color.red;
        }
        return Color.red; // Default to red if nothing matches.
    }
}
