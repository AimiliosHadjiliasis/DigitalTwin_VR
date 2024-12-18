using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class lr_LineController : MonoBehaviour
{
    private LineRenderer lr;  // Reference to the LineRenderer component
    private Transform[] points;  // Array of Transforms for the points

    // Start is called before the first frame update
    void Awake()
    {
        // Get the LineRenderer component attached to this GameObject
        lr = GetComponent<LineRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
       
        // Check if points array has been initialized to avoid null reference
        if (points == null || points.Length == 0)
        {
          // Debug.LogError("Points are not set up yet, do nothing.");
            return; // Do nothing if points are not set up yet
            
        }

        // Iterate through the points array and update the LineRenderer's positions
        for (int i = 0; i < points.Length; i++)
        {
            lr.SetPosition(i, points[i].position);
        }
    }

    // This method sets up the points for the LineRenderer
    public void SetUpLine(Transform[] points)
    {
        if (points == null || points.Length == 0)
        {
            Debug.LogError("Points array is null or empty. Please provide valid points.");
            return;
        }

        // Set the number of positions for the LineRenderer
        lr.positionCount = points.Length;

        // Store the points array to use in the Update method
        this.points = points;
    }
}
