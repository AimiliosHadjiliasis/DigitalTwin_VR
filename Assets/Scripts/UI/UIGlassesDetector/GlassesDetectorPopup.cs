using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace TiltFiveDemos
{
    /// <summary>
    /// Handler for the glasses detector popup (appears when the user has connected the glasses).
    /// </summary>
    public class GlassesDetectorPopup : GlassesDetectorBase
    {
        /// <summary>
        /// The TiltFive Camera.
        /// </summary>
        [SerializeField]
        private GameObject _popup;

        /// <summary>
        /// The TiltFive Camera.
        /// </summary>
        [SerializeField]
        private GameObject _tiltFiveCamera;

        /// <summary>
        /// The backup camera for when the glasses are unavailable.
        /// </summary>
        [SerializeField]
        private GameObject _backupCamera;

        /// <summary>
        /// Reference the popup button to select on the UI when the popup opens.
        /// </summary>
        [SerializeField]
        private Button _selectedPopupButton;

        /// <summary>
        /// Event to call when glasses are enabled.
        /// </summary>
        [SerializeField]
        private UnityEvent _onEnabledGlasses;

        /// <summary>
        /// Event to call when popup is closed.
        /// </summary>
        [SerializeField]
        private UnityEvent _onClosedPopup;

        /// <summary>
        /// Shows the popup to switch to glasses when glasses are avaiable.
        /// </summary>
        protected override void DoGlassesAvailable()
        {
            _popup.SetActive(true);

            // Set the selected popup button.
            base.DoGlassesAvailable();

            StartCoroutine(WaitForsSelectInteractable());
        }

        private IEnumerator WaitForsSelectInteractable()
        {
            yield return new WaitForEndOfFrame();

            EventSystem.current.SetSelectedGameObject(null);
            Canvas.ForceUpdateCanvases();

            yield return new WaitForEndOfFrame();
            EventSystem.current.SetSelectedGameObject(_selectedPopupButton.gameObject);

            Canvas.ForceUpdateCanvases();
        }

        /// <summary>
        /// Switches to backup camera when glasses are unavailable.
        /// </summary>
        protected override void DoGlassesUnavailable()
        {
            _tiltFiveCamera.SetActive(false);
            _backupCamera.SetActive(true);
            ClosePopup();
            base.DoGlassesUnavailable();
        }

        /// <summary>
        /// Switch to the glasses on player prompt.
        /// </summary>
        public void SwitchToGlasses()
        {
            _tiltFiveCamera.SetActive(true);
            _backupCamera.SetActive(false);
            ClosePopup();
            _onEnabledGlasses.Invoke();
        }    

        /// <summary>
        /// Close the popup after player prompt, or when glasses become unavailable.
        /// </summary>
        public void ClosePopup()
        {
            _popup.SetActive(false);
            _onClosedPopup.Invoke();
        }
    }
}
