using UnityEngine;
using UnityEngine.SceneManagement;

namespace TiltFiveDemos
{
    /// <summary>
    /// Listens for a specific key press and returns the player to the main menu.
    /// </summary>
    public class BackToMainMenu : MonoBehaviour
    {
        /// <summary>
        /// Use a singleton pattern to keep this object running on all scenes of the game.
        /// </summary>
        private static BackToMainMenu _instance;
    
        public static BackToMainMenu Instance
        {
            get {
                if (_instance == null)
                {
                    _instance = GameObject.FindObjectOfType<BackToMainMenu>();
             
                    if (_instance == null)
                    {
                        GameObject container = new GameObject("BackToMainMenu");
                        _instance = container.AddComponent<BackToMainMenu>();
                    }
                }
     
                return _instance;
            }
        }
    
        /// <summary>
        /// The main menu scene
        /// </summary>
        private const string MAIN_MENU_SCENE = "MainMenu";
 
        /// <summary>
        /// Initialize the singleton, remove itself if this is not the only one present in the scene.
        /// </summary>
        private void Awake()
        {
            if (_instance != null && _instance != this)
            {
                Destroy(gameObject);
                return;
            }
     
            _instance = this;
            DontDestroyOnLoad(gameObject);
        }

        /// <summary>
        /// Update this instance.
        /// </summary>
        private void Update()
        {
            if (Input.GetButtonDown("Start"))
            {
                    GoToMainMenu();
            }
        }

        /// <summary>
        /// Load the main menu scene.
        /// </summary>
        public void GoToMainMenu()
        {
            SceneManager.LoadScene(MAIN_MENU_SCENE);
        }
    }
}
