using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ButtonHandler : MonoBehaviour
{
    public int spawnPointIndex; // Assign a unique index for each button in the inspector

    public void OnButtonPress()
    {
        // Set the spawn point index in the SpawnPointManager
        SpawnPointManager.Instance.SetSpawnPointIndex(spawnPointIndex);

        // Load Scene 2
        SceneManager.LoadScene("InfluxInside"); 
    }
}
