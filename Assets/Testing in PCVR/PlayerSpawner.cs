using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerSpawner : MonoBehaviour
{
    public Transform[] spawnPoints; // Assign spawn points (e.g., cubes) in the inspector

    private void Start()
    {
        int spawnIndex = SpawnPointManager.Instance.SpawnPointIndex;
        Debug.Log("Spawn index received in Scene 2: " + spawnIndex);

        // Make sure spawnIndex is within bounds
        if (spawnIndex >= 0 && spawnIndex < spawnPoints.Length)
        {
            Transform spawnPoint = spawnPoints[spawnIndex];
            transform.position = spawnPoint.position;
            transform.rotation = spawnPoint.rotation;  // Optional: If you want to set the player's rotation too
            Debug.Log("Player spawned at: " + spawnPoint.position);
        }
        else
        {
            Debug.LogError("Invalid spawn index: " + spawnIndex);
        }
    }
}
