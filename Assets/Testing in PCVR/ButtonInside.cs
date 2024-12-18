using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ButtonInside : MonoBehaviour
{

    // Assign the name of the scene you want to load in the Inspector
    [SerializeField] private string sceneName;

    // Reference to the button (optional if attached to the button directly)
    [SerializeField] private Button button;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void MoveToScene()
    {
        // Ensure the sceneName is not empty
        if (!string.IsNullOrEmpty(sceneName))
        {
            SceneManager.LoadScene(sceneName);
        }
        else
        {
            Debug.LogError("Scene name is empty! Please assign a valid scene name in the Inspector.");
        }
    }
}
