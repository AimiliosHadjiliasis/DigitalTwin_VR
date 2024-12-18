using UnityEngine;
using UnityEngine.SceneManagement;

namespace TiltFiveDemos
{
    /// <summary>
    /// Class to change the scene on button callback.
    /// </summary>
    public class SceneChangeButton : MonoBehaviour
    {
        /// <summary>
        /// Name of the scene to change to.
        /// </summary>
        [SerializeField] private string _sceneName;

        /// <summary>
        /// Change the scene on button callback.
        /// </summary>
        public void ChangeScene()
        {
            SceneManager.LoadScene(_sceneName);
        }
    }
}
