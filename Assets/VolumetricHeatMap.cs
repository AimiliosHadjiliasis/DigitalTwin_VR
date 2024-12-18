using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VolumetricHeatMap : MonoBehaviour
{
    // Define the size of the area (in Unity units) where the cubes will be generated
    public Vector3 areaSize = new Vector3(10f, 10f, 10f); // Length, width, and height of the area
    public int maxCubes = 100; // Limit the maximum number of cubes for performance reasons
    public float cubeSize = 1f; // The size of each cube
    public float minTemperature = 0f; // Minimum temperature value
    public float maxTemperature = 100f; // Maximum temperature value

    public GameObject cubePrefab; // Reference to the cube prefab to instantiate

    private List<GameObject> cubePool = new List<GameObject>(); // Pool of cube objects
    private Vector3 origin; // Origin point of the heatmap area

    // Start is called before the first frame update
    void Start()
    {
        origin = transform.position; // Set the origin to the position of the GameObject this script is attached to

        // Use Coroutine for heatmap generation to prevent crashes from heavy loads
        StartCoroutine(GenerateHeatMapCoroutine());
    }

    // Coroutine to generate the heatmap in small steps to avoid crashes
    IEnumerator GenerateHeatMapCoroutine()
    {
        int cubeCount = 0;

        // Generate random positions within the area and assign colors based on temperature
        while (cubeCount < maxCubes)
        {
            // Generate a random position within the bounds of the area
            Vector3 randomPosition = GetRandomPositionInArea();

            // Get or instantiate a cube
            GameObject cube = GetCube();
            cube.transform.position = randomPosition;
            cube.transform.localScale = new Vector3(cubeSize, cubeSize, cubeSize);

            // Assign a random temperature for this cube (replace with actual data if needed)
            float temperature = GetRandomTemperature();

            // Map the temperature to a color (blue for cold, red for hot)
            Color cubeColor = MapTemperatureToColor(temperature);
            cube.GetComponent<Renderer>().material.color = cubeColor;

            cubeCount++; // Increase the count of cubes generated

            // Yield the coroutine to prevent overloading Unity in a single frame
            yield return null;
        }
    }

    // Get a random position within the defined volume area
    Vector3 GetRandomPositionInArea()
    {
        float randomX = Random.Range(0, areaSize.x);
        float randomY = Random.Range(0, areaSize.y);
        float randomZ = Random.Range(0, areaSize.z);

        // Return a random position relative to the origin
        return origin + new Vector3(randomX, randomY, randomZ);
    }

    // Get a random temperature between the minimum and maximum temperature range
    float GetRandomTemperature()
    {
        return Random.Range(minTemperature, maxTemperature);
    }

    // Map the temperature to a color gradient (blue to red)
    Color MapTemperatureToColor(float temperature)
    {
        // Normalize the temperature between 0 and 1
        float normalizedTemp = Mathf.InverseLerp(minTemperature, maxTemperature, temperature);

        // Lerp between blue and red based on normalized temperature
        return Color.Lerp(Color.blue, Color.red, normalizedTemp);
    }

    // Get a cube from the pool, or instantiate a new one if the pool is empty
    GameObject GetCube()
    {
        // Check if there's an available cube in the pool
        foreach (GameObject cube in cubePool)
        {
            if (!cube.activeInHierarchy)
            {
                cube.SetActive(true);
                return cube;
            }
        }

        // If no available cube, instantiate a new one and add it to the pool
        GameObject newCube = Instantiate(cubePrefab);
        cubePool.Add(newCube);
        return newCube;
    }
}
