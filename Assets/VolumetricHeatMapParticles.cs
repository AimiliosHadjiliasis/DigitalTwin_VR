using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VolumetricHeatMapParticles : MonoBehaviour
{
    // Enum to select the data type to display
    public enum DataType
    {
        Temperature,
        Humidity,
        IAQ
    }

    public DataType selectedDataType = DataType.Temperature; // Select data type from the Inspector

    public GameObject boundingCube; // Reference to the user-defined cube
    public int maxParticles = 1000; // Maximum number of particles
    public float cubeSize = 1f; // Size of each cube in the particle system

    // Sensor-related references
    private SensorScript sensorScriptObj; // Reference to the SensorScript component
    private SensorManager sensorManager;   // Reference to the SensorManager component

    // Particle system for volumetric heatmap
    public ParticleSystem particleSystemPrefab; // Reference to the particle system prefab
    private ParticleSystem particleSystem;      // Particle system instance
    private ParticleSystem.Particle[] particles; // Array to hold particle data

    // Temperature scale for color mapping
    public float minTemperature = 0f; // Minimum temperature (0°C as cold)
    public float maxTemperature = 60f; // Maximum temperature (60°C as hot)
    public float minHumidity = 0f; // Minimum humidity
    public float maxHumidity = 100f; // Maximum humidity
    public float minIAQ = 0f; // Minimum IAQ
    public float maxIAQ = 500f; // Maximum IAQ

    // Start is called before the first frame update
    void Start()
    {
        // Initialize references to SensorScript and SensorManager
        sensorScriptObj = GetComponent<SensorScript>();
        sensorManager = GetComponentInParent<SensorManager>();

        // Check for null references
        if (sensorScriptObj == null)
        {
            Debug.LogError("SensorScript component is missing on this GameObject.");
            return; // Exit if SensorScript is not assigned
        }

        if (sensorManager == null)
        {
            Debug.LogError("SensorManager component is missing on the parent GameObject.");
            return; // Exit if SensorManager is not assigned
        }

        if (boundingCube == null)
        {
            Debug.LogError("Bounding cube is missing. Please assign a cube GameObject in the Inspector.");
            return; // Exit if bounding cube is not assigned
        }

        // Disable the mesh renderer of the cube so it becomes invisible
        boundingCube.GetComponent<MeshRenderer>().enabled = false;

        // Instantiate the particle system
        particleSystem = Instantiate(particleSystemPrefab, transform.position, Quaternion.identity, transform);

        // Create and configure the particles
        StartCoroutine(UpdateHeatMapWithSensorData());
    }

    // Coroutine to update the heatmap particles based on sensor data
    IEnumerator UpdateHeatMapWithSensorData()
    {
        particles = new ParticleSystem.Particle[maxParticles];

        while (true)
        {
            // Iterate over the maximum number of particles (representing different points in the area)
            for (int i = 0; i < maxParticles; i++)
            {
                // Assign a random position within the bounds of the cube
                Vector3 randomPosition = GetRandomPositionInBounds();

                // Fetch real sensor data for this position (temperature, humidity, IAQ)
                float dataValue = GetSelectedDataFromSensor();

                // Map the data value to a color (blue for cold/low, red for hot/high)
                Color particleColor = MapDataToColor(dataValue);

                // Set particle properties
                particles[i].position = randomPosition;
                particles[i].startColor = particleColor;
                particles[i].startSize = cubeSize;
            }

            // Set the updated particles in the particle system
            particleSystem.SetParticles(particles, particles.Length);

            // Wait for a short duration before the next update to simulate real-time data
            yield return new WaitForSeconds(2f);
        }
    }

    // Get a random position within the bounds of the bounding cube
    Vector3 GetRandomPositionInBounds()
    {
        // Get the bounds of the cube (including its size and position)
        Bounds bounds = boundingCube.GetComponent<Collider>().bounds;

        // Generate a random position within the bounds
        float randomX = Random.Range(bounds.min.x, bounds.max.x);
        float randomY = Random.Range(bounds.min.y, bounds.max.y);
        float randomZ = Random.Range(bounds.min.z, bounds.max.z);

        return new Vector3(randomX, randomY, randomZ);
    }

    // Fetch the selected data from the SensorScript (Temperature, Humidity, or IAQ)
    float GetSelectedDataFromSensor()
    {
        float dataValue = 0f;

        // Switch based on the selected data type
        switch (selectedDataType)
        {
            case DataType.Temperature:
                dataValue = sensorScriptObj.temp; // Get temperature data
                break;

            case DataType.Humidity:
                dataValue = sensorScriptObj.hum; // Get humidity data
                break;

            case DataType.IAQ:
                dataValue = sensorScriptObj.iaq; // Get IAQ data
                break;

            default:
                Debug.LogWarning("Unknown data type selected.");
                break;
        }

        return dataValue;
    }

// Map the data value to a color gradient with a logarithmic approach based on the selected data type
Color MapDataToColor(float dataValue)
{
    float normalizedValue = 0f;
    Color color = Color.clear; // Default color is clear (transparent)

    // Adjust the color mapping based on the selected data type
    switch (selectedDataType)
    {
        case DataType.Temperature:
            normalizedValue = Mathf.InverseLerp(minTemperature, maxTemperature, dataValue);
            // Logarithmic approach: solid blue (0-35%), blend (35-90%), solid red (90-100%)
            if (normalizedValue <= 0.35f)
            {
                color = Color.blue; // Solid blue
            }
            else if (normalizedValue <= 0.90f)
            {
                // Blend between blue and red
                float blendValue = Mathf.InverseLerp(0.35f, 0.90f, normalizedValue);
                color = Color.Lerp(Color.blue, Color.red, blendValue);
            }
            else
            {
                color = Color.red; // Solid red
            }
            break;

        case DataType.Humidity:
            normalizedValue = Mathf.InverseLerp(minHumidity, maxHumidity, dataValue);
            // Logarithmic approach: solid white (0-35%), blend (35-90%), solid gray (90-100%)
            if (normalizedValue <= 0.35f)
            {
                color = Color.white; // Solid white
            }
            else if (normalizedValue <= 0.90f)
            {
                // Blend between white and gray
                float blendValue = Mathf.InverseLerp(0.35f, 0.90f, normalizedValue);
                color = Color.Lerp(Color.white, Color.gray, blendValue);
            }
            else
            {
                color = Color.gray; // Solid gray
            }
            break;

        case DataType.IAQ:
            normalizedValue = Mathf.InverseLerp(minIAQ, maxIAQ, dataValue);
            // Logarithmic approach: solid red (0-35%), blend (35-90%), solid green (90-100%)
            if (normalizedValue <= 0.35f)
            {
                color = Color.red; // Solid red
            }
            else if (normalizedValue <= 0.90f)
            {
                // Blend between red and green
                float blendValue = Mathf.InverseLerp(0.35f, 0.90f, normalizedValue);
                color = Color.Lerp(Color.red, Color.green, blendValue);
            }
            else
            {
                color = Color.green; // Solid green
            }
            break;
    }

  
        color.a = 0.01f; // For Temperature and IAQ, set a constant transparency level
  

    return color;
    }

}
