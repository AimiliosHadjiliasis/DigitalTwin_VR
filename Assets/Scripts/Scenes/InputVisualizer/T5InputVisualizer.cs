/*
 * Copyright (C) 2020 Tilt Five, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace TiltFiveDemos
{
    /// <summary>
    /// The Input visualizer class shows the buttons on the visualization lighting up when the events are triggered.
    /// </summary>
    public class T5InputVisualizer : MonoBehaviour
    {
        /// <summary>
        /// The normal material for released controller buttons.
        /// </summary>
        [SerializeField]
        private Material _normalMaterial;

        /// <summary>
        /// The selected material for pressed controller buttons.
        /// </summary>
        [SerializeField]
        private Material _selectedMaterial;

        /// <summary>
        /// The transform of the wand controller.
        /// </summary>
        [SerializeField]
        private Transform _wandTransform;

        /// <summary>
        /// The button A mesh in the visualization.
        /// </summary>
        [SerializeField]
        private GameObject _aButton;

        /// <summary>
        /// The button B mesh in the visualization.
        /// </summary>
        [SerializeField]
        private GameObject _bButton;

        /// <summary>
        /// The button X mesh in the visualization.
        /// </summary>
        [SerializeField]
        private GameObject _xButton;

        /// <summary>
        /// The button Y mesh in the visualization.
        /// </summary>
        [SerializeField]
        private GameObject _yButton;

        /// <summary>
        /// The button 1 mesh in the visualization.
        /// </summary>
        [SerializeField]
        private GameObject _oneButton;

        /// <summary>
        /// The button 2 mesh in the visualization.
        /// </summary>
        [SerializeField]
        private GameObject _twoButton;

        /// <summary>
        /// The button 'System' mesh in the visualization.
        /// </summary>
        [SerializeField]
        private GameObject _systemButton;

        /// <summary>
        /// The trigger mesh in the visualization.
        /// </summary>
        [SerializeField]
        private GameObject _trigger;

        /// <summary>
        /// The trigger label.
        /// </summary>
        [SerializeField]
        private GameObject _triggerLabel;

        /// <summary>
        /// The stick mesh in the visualization.
        /// </summary>
        [SerializeField]
        private GameObject _stick;

        /// <summary>
        /// The image showing the current wand status.
        /// </summary>
        [SerializeField]
        private Image _wandAvailableImage;
        /// <summary>
        /// The text with the current wand status.
        /// </summary>
        [SerializeField]
        private TextMeshProUGUI _wandAvailableText;
        /// <summary>
        /// The color to show on the image that displays the wand status when the wand is available.
        /// </summary>
        [SerializeField]
        private Color _wandAvailableColor;
        /// <summary>
        /// The color to show on the image that displays the wand status when the wand is unavailable.
        /// </summary>
        [SerializeField]
        private Color _wandUnavailableColor;

        /// <summary>
        /// The minimum rotation of the trigger (On the X axis in the model)
        /// </summary>
        [SerializeField]
        private float _triggerMinRotation = 3;
        /// <summary>
        /// The maximum rotation of the trigger (On the X axis in the model)
        /// </summary>
        [SerializeField]
        private float _triggerMaxRotation = -20;

        /// <summary>
        /// The maximum rotation of the stick on the X axis
        /// </summary>
        [SerializeField]
        private float _stickMaxRotationX = 10;
        /// <summary>
        /// The maximum rotation of the stick on the Y axis
        /// </summary>
        [SerializeField]
        private float _stickMaxRotationY = -10;

        [SerializeField]
        private float _buttonPressAmount = 0.025f;


        /// <summary>
        /// Called when the wand becomes available.
        /// Show the image in the available color and change the text.
        /// </summary>
        public void OnWandAvailable()
        {
            _wandAvailableText.text = "TILT FIVE WAND AVAILABLE";
            _wandAvailableImage.color = _wandAvailableColor;
        }

        /// <summary>
        /// Called when the wand becomes unavailable.
        /// Show the image in the unavailable color and change the text.
        /// </summary>
        public void OnWandUnavailable()
        {
            _wandAvailableText.text = "TILT FIVE WAND UNAVAILABLE";
            _wandAvailableImage.color = _wandUnavailableColor;
        }

        /// <summary>
        /// The original Y position of the button A
        /// </summary>
        private float _originalYPositionA;
        /// <summary>
        /// Called when the A button is pressed.
        /// </summary>
        public void OnAPressed()
        {
            _aButton.GetComponent<MeshRenderer>().material = _selectedMaterial;
            _originalYPositionA = _aButton.transform.localPosition.y;
            _aButton.transform.localPosition = new Vector3(_aButton.transform.localPosition.x, _aButton.transform.localPosition.y - _buttonPressAmount, _aButton.transform.localPosition.z);
        }
        /// <summary>
        /// Called when the A button is lifted.
        /// </summary>
        public void OnALifted()
        {
            _aButton.GetComponent<MeshRenderer>().material = _normalMaterial;
            _aButton.transform.localPosition = new Vector3(_aButton.transform.localPosition.x, _originalYPositionA, _aButton.transform.localPosition.z);
        }

        /// <summary>
        /// The original Y position of the button B
        /// </summary>
        private float _originalYPositionB;
        /// <summary>
        /// Called when the B button is pressed.
        /// </summary>
        public void OnBPressed()
        {
            _bButton.GetComponent<MeshRenderer>().material = _selectedMaterial;
            _originalYPositionB = _bButton.transform.localPosition.y;
            _bButton.transform.localPosition = new Vector3(_bButton.transform.localPosition.x, _bButton.transform.localPosition.y - _buttonPressAmount, _bButton.transform.localPosition.z);
        }
        /// <summary>
        /// Called when the B button is lifted.
        /// </summary>
        public void OnBLifted()
        {
            _bButton.GetComponent<MeshRenderer>().material = _normalMaterial;
            _bButton.transform.localPosition = new Vector3(_bButton.transform.localPosition.x, _originalYPositionB, _bButton.transform.localPosition.z);
        }

        /// <summary>
        /// The original Y position of the button X
        /// </summary>
        private float _originalYPositionX;
        /// <summary>
        /// Called when the X button is pressed.
        /// </summary>
        public void OnXPressed()
        {
            _xButton.GetComponent<MeshRenderer>().material = _selectedMaterial;
            _originalYPositionX = _xButton.transform.localPosition.y;
            _xButton.transform.localPosition = new Vector3(_xButton.transform.localPosition.x, _xButton.transform.localPosition.y - _buttonPressAmount, _xButton.transform.localPosition.z);
        }
        /// <summary>
        /// Called when the X button is lifted.
        /// </summary>
        public void OnXLifted()
        {
            _xButton.GetComponent<MeshRenderer>().material = _normalMaterial;
            _xButton.transform.localPosition = new Vector3(_xButton.transform.localPosition.x, _originalYPositionX, _xButton.transform.localPosition.z);
        }

        /// <summary>
        /// The original Y position of the button Y
        /// </summary>
        private float _originalYPositionY;
        /// <summary>
        /// Called when the Y button is pressed.
        /// </summary>
        public void OnYPressed()
        {
            _yButton.GetComponent<MeshRenderer>().material = _selectedMaterial;
            _originalYPositionY = _yButton.transform.localPosition.y;
            _yButton.transform.localPosition = new Vector3(_yButton.transform.localPosition.x, _yButton.transform.localPosition.y - _buttonPressAmount, _yButton.transform.localPosition.z);
        }
        /// <summary>
        /// Called when the Y button is lifted.
        /// </summary>
        public void OnYLifted()
        {
            _yButton.GetComponent<MeshRenderer>().material = _normalMaterial;
            _yButton.transform.localPosition = new Vector3(_yButton.transform.localPosition.x, _originalYPositionY, _yButton.transform.localPosition.z);
        }

        /// <summary>
        /// The original Y position of the button 1
        /// </summary>
        private float _originalYPositionOne;
        /// <summary>
        /// Called when the 1 button is pressed.
        /// </summary>
        public void OnOnePressed()
        {
            _oneButton.GetComponent<MeshRenderer>().material = _selectedMaterial;
            _originalYPositionOne = _oneButton.transform.localPosition.y;
            _oneButton.transform.localPosition = new Vector3(_oneButton.transform.localPosition.x, _oneButton.transform.localPosition.y - _buttonPressAmount, _oneButton.transform.localPosition.z);
        }
        /// <summary>
        /// Called when the 1 button is lifted.
        /// </summary>
        public void OnOneLifted()
        {
            _oneButton.GetComponent<MeshRenderer>().material = _normalMaterial;
            _oneButton.transform.localPosition = new Vector3(_oneButton.transform.localPosition.x, _originalYPositionOne, _oneButton.transform.localPosition.z);
        }

        /// <summary>
        /// The original Y position of the button 2
        /// </summary>
        private float _originalYPositionTwo;
        /// <summary>
        /// Called when the 2 button is pressed.
        /// </summary>
        public void OnTwoPressed()
        {
            _twoButton.GetComponent<MeshRenderer>().material = _selectedMaterial;
            _originalYPositionTwo = _twoButton.transform.localPosition.y;
            _twoButton.transform.localPosition = new Vector3(_twoButton.transform.localPosition.x, _twoButton.transform.localPosition.y - _buttonPressAmount, _twoButton.transform.localPosition.z);
        }
        /// <summary>
        /// Called when the 1 button is lifted.
        /// </summary>
        public void OnTwoLifted()
        {
            _twoButton.GetComponent<MeshRenderer>().material = _normalMaterial;
            _twoButton.transform.localPosition = new Vector3(_twoButton.transform.localPosition.x, _originalYPositionTwo, _twoButton.transform.localPosition.z);
        }

        /// <summary>
        /// Called when the System button is pressed.
        /// </summary>
        public void OnSystemPressed()
        {
            _systemButton.GetComponent<MeshRenderer>().material = _selectedMaterial;
        }
        /// <summary>
        /// Called when the System button is pressed.
        /// </summary>
        public void OnSystemLifted()
        {
            _systemButton.GetComponent<MeshRenderer>().material = _normalMaterial;
        }

        /// <summary>
        /// Called when the trigger button is pressed.
        /// </summary>
        public void OnTriggerPressed()
        {
            _trigger.GetComponent<MeshRenderer>().material = _selectedMaterial;

            _triggerLabel.SetActive(true);
        }
        /// <summary>
        /// Called when the trigger button is held down.
        /// Represent the trigger pushing into the controller depending on the amount received.
        /// </summary>
        public void OnTriggerDown(float pTrigger)
        {
            // Calculate the rotation of the trigger proportional to the received input.
            float amount = _triggerMaxRotation - _triggerMinRotation;
            float proportionValue = amount * pTrigger;
            float rotation = proportionValue + _triggerMinRotation;
            _trigger.transform.localEulerAngles = new Vector2(rotation, _trigger.transform.localEulerAngles.y);
        }
        /// <summary>
        /// Called when the trigger button is released.
        /// </summary>
        public void OnTriggerReleased()
        {
            _trigger.GetComponent<MeshRenderer>().material = _normalMaterial;
            _trigger.transform.localEulerAngles = new Vector2(_triggerMinRotation, _trigger.transform.localEulerAngles.y);
            _triggerLabel.SetActive(false);
        }

        /// <summary>
        /// Called when the stick is moved.
        /// Represent the tilting of the stick.
        /// </summary>
        public void OnStickMoved(Vector2 pTilt)
        {
            _stick.GetComponent<MeshRenderer>().material = _selectedMaterial;

            // Calculate the proportional rotation depending on the received tilt
            float rotationX = _stickMaxRotationX * pTilt.x;
            float rotationY = _stickMaxRotationY * pTilt.y;

            // Rotate the stick 90 degrees about its local y axis to correctly map
            // horizontal/vertical stick tilt inputs to the mesh's x and z axes.
            _stick.transform.localEulerAngles = new Vector3(rotationX, 90f, rotationY);
        }
        /// <summary>
        /// Called when the stick stops moving
        /// </summary>
        public void OnStickStopMoving()
        {
            _stick.transform.eulerAngles = new Vector3(0f, _stick.transform.eulerAngles.y, 0f);
        }

        /// <summary>
        /// The original Y position of the stick button
        /// </summary>
        private float _originalYPositionStick;
        /// <summary>
        /// Called when the stick is pressed.
        /// </summary>
        public void OnStickPressed()
        {
            _stick.GetComponent<MeshRenderer>().material = _selectedMaterial;
            _originalYPositionStick = _stick.transform.localPosition.y;
            _stick.transform.localPosition = new Vector3(_stick.transform.localPosition.x, _stick.transform.localPosition.y - _buttonPressAmount, _stick.transform.localPosition.z);
        }
        /// <summary>
        /// Called when the stick is released.
        /// </summary>
        public void OnStickReleased()
        {
            _stick.transform.localPosition = new Vector3(_stick.transform.localPosition.x, _originalYPositionStick, _stick.transform.localPosition.z);
        }
        /// <summary>
        /// Called when the stick stops being used (pressed or moved).
        /// </summary>
        public void OnStickStopUse()
        {
            _stick.GetComponent<MeshRenderer>().material = _normalMaterial;
        }
    }
}
