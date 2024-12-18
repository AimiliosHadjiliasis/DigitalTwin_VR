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

using System;
using TiltFive;
using UnityEngine;
using Input = UnityEngine.Input;

namespace TiltFiveDemos
{
    /// <summary>
    /// Performs the input for the navigation view (Tilt Five game board)
    /// </summary>
    public class CameraNavigationInput : BaseDemoInput
    {
        /// <summary>
        /// The tilt five container, including the camera and board.
        /// </summary>
        [SerializeField] private Transform tiltFiveContainer;

        /// <summary>
        /// The tilt five camera transform, in order to move the board accurately depending on the camera's position.
        /// </summary>
        [SerializeField] private Transform tiltFiveCamera;

        /// <summary>
        /// The translation speed.
        /// </summary>
        [SerializeField] private float translationSpeed = 0.5f;

        /// <summary>
        /// The rotation speed;
        /// </summary>
        [SerializeField] private float rotationSpeed = 1;

        /// <summary>
        /// The tilting speed;
        /// </summary>
        [SerializeField] private float tiltingSpeed = 1;

        /// <summary>
        /// The height speed;
        /// </summary>
        [SerializeField] private float heightSpeed = 0.5f;       

        /// <summary>
        /// The translation value.
        /// </summary>
        private Vector2 _translateValue;

        /// <summary>
        /// The rotation value.
        /// </summary>
        private float _rotateValue;

        /// <summary>
        /// The tilting value.
        /// </summary>
        private Vector2 _tiltValue;

        /// <summary>
        /// The height value.
        /// </summary>
        private float _heightValue;

        // Since we're not using the Input Manager for input with the TiltFive Wand, the Wand Input conflicts with the requested Input axes.
        // These flags are used to resolve those issues.

        /// <summary>
        /// Flag to check if we're using the T5 Wand for translation.
        /// </summary>
        private bool _translateT5Wand = false;
        /// <summary>
        /// Flag to check if we're using the T5 Wand for height.
        /// </summary>
        private bool _heightT5Wand = false;
        /// <summary>
        /// Flag to check if we're using the T5 Wand for rotation.
        /// </summary>
        private bool _rotateT5Wand = false;
        /// <summary>
        /// Flag to check if we're using the T5 Wand for tilting.
        /// </summary>
        private bool _tiltT5Wand = false;

        /// <summary>
        /// The original container position.
        /// </summary>
        private Vector3 _originalPosition;

        /// <summary>
        /// The original container rotation.
        /// </summary>
        private Quaternion _originalRotation;

        private void Start()
        {
            // Store the original rotation and position on the start.

            _originalPosition = tiltFiveContainer.position;

            _originalRotation = tiltFiveContainer.rotation;
        }

        // Update is called once per frame
        private void Update()
        {
            // Return if we're showing the info notice with instructions.
            if (!_active) return;

            // Check all inputs
            CheckTranslateInput();
            CheckRotateInput();
            CheckTiltInput();
            CheckHeightInput();

            // Perform the actions
            DoTranslate();
            DoRotate();
            DoTilt();
            DoHeight();
        }

        /// <summary>
        /// Checks the rotate input.
        /// </summary>
        private void CheckRotateInput()
        {
            if (_rotateT5Wand) return;
            _rotateValue = Input.GetAxis("RotateBoard");
        }

        /// <summary>
        /// Rotate with the T5 Wand.
        /// </summary>
        /// <param name="pValue"></param>
        public void RotateT5Wand(float pValue)
        {
            _rotateT5Wand = true;
            _rotateValue = pValue;
        }

        /// <summary>
        /// Stop rotating with the T5 Wand
        /// </summary>
        public void StopRotateT5Wand()
        {
            _rotateT5Wand = false;
            _rotateValue = 0;
        }

        /// <summary>
        /// Checks the tilt input.
        /// </summary>
        private void CheckTiltInput()
        {
            if (_tiltT5Wand) return;
            _tiltValue = new Vector2(Input.GetAxis("TiltBoardSides"),Input.GetAxis("TiltBoardForward"));
        }
        /// <summary>
        /// Checks the tilt input from Wand to the right.
        /// </summary>
        public void SetTiltValueT5Right()
        {
            _tiltT5Wand = true;
            _tiltValue = new Vector2(1, _tiltValue.y);
        }
        /// <summary>
        /// Checks the tilt input from Wand to the left.
        /// </summary>
        public void SetTiltValueT5Left()
        {
            _tiltT5Wand = true;
            _tiltValue = new Vector2(-1, _tiltValue.y);
        }
        /// <summary>
        /// Checks the tilt input from Wand to the front.
        /// </summary>
        public void SetTiltValueT5Front()
        {
            _tiltT5Wand = true;
            _tiltValue = new Vector2(_tiltValue.x,1);
        }
        /// <summary>
        /// Checks the tilt input from Wand to the back.
        /// </summary>
        public void SetTiltValueT5Back()
        {
            _tiltT5Wand = true;
            _tiltValue = new Vector2(_tiltValue.x, -1);
        }
        /// <summary>
        /// Stops the tilting input from wand.
        /// </summary>
        public void StopT5Tilt()
        {
            _tiltT5Wand = false;
            _tiltValue = Vector2.zero;
        }

        /// <summary>
        /// Checks the translate input.
        /// </summary>
        private void CheckTranslateInput()
        {
            if (_translateT5Wand) return;
           
            _translateValue = new Vector2(-Input.GetAxis("BoardTranslateSides"), -Input.GetAxis("BoardTranslateForward"));
        }

        /// <summary>
        /// Set translate input for wand.
        /// </summary>
        /// <param name="pTranslateValue"></param>
        public void SetT5TranslateInput(Vector2 pTranslateValue)
        {
            _translateT5Wand = true;
            _translateValue = new Vector2(-pTranslateValue.x, pTranslateValue.y);
        }

        /// <summary>
        /// Stop translate input for wand.
        /// </summary>
        /// <param name="pTranslateValue"></param>
        public void StopT5TranslateInput()
        {
            _translateT5Wand = false;
            _translateValue = Vector2.zero;
        }

        /// <summary>
        /// Checks the height input.
        /// </summary>
        private void CheckHeightInput()
        {
            // We need to use platform dependent compilation since gamepad triggers are different between platforms.

            if (_heightT5Wand) return;
#if UNITY_STANDALONE_WIN
            _heightValue = Input.GetAxis("RaiseBoard");
#elif UNITY_STANDALONE_LINUX
            _heightValue = -(Input.GetAxis("RaiseBoardDown"))+(Input.GetAxis("RaiseBoardUp"));
#endif
        }

        /// <summary>
        /// Set the height input from T5 wand down.
        /// </summary>
        public void SetHeightT5Down()
        {
            Debug.Log("Setting height down");
            _heightT5Wand = true;
            _heightValue = -1;
        }

        /// <summary>
        /// Set the height input from T5 wand up.
        /// </summary>
        public void SetHeightT5Up()
        {
            Debug.Log("Setting height up");
            _heightT5Wand = true;
            _heightValue = 1;
        }

        /// <summary>
        /// Stops the height input from T5 wand.
        /// </summary>
        public void StopHeightT5Input()
        {
            _heightT5Wand = false;
            _heightValue = 0;
        }
        
        /// <summary>
        /// Stop all the T5 input (when we disconnect the wand, for example)
        /// </summary>
        public override void StopAllT5Input()
        {
            StopHeightT5Input(); 
            StopT5TranslateInput(); 
            StopT5Tilt(); 
            StopRotateT5Wand();
            base.StopAllT5Input();
        }

        /// <summary>
        /// Perform the translation using the value received in Input - TranslateInputCallback().
        /// </summary>
        private void DoTranslate()
        {
            // Check that the magnitude of the translation vector is higher than 0.
            if (_translateValue.magnitude > 0f)
            {
                // Get the board's and the camera's position.
                Vector3 tiltFivePosition = tiltFiveContainer.position;
                Vector3 cameraPosition = tiltFiveCamera.position;
                
                // Create a vector3 for the board's position, but ignoring its height (Y axis).
                Vector3 tiltFivePositionPlane = new Vector3(
                    tiltFivePosition.x,
                    0f,
                    tiltFivePosition.z
                );

                // Create a vector3 for the camera's position, but ignoring its height (Y axis).
                Vector3 cameraPositionPlane =
                    new Vector3(
                        cameraPosition.x,
                        0f,
                        cameraPosition.z);
                
                // Get the camera's direction towards the board.
                Vector3 cameraBoardDirection = Vector3.Normalize(tiltFivePositionPlane - cameraPositionPlane);
                
                // Convert input value to 3-Dimensional space.
                Vector3 translateValuePlane = new Vector3(_translateValue.x, 0f, _translateValue.y);

                // Invert x movement if our view is upside down.
                if (Vector3.Dot(tiltFiveCamera.up,Vector3.up) <= 0)
                {
                    translateValuePlane = new Vector3(-_translateValue.x, 0f, _translateValue.y);
                }
                
                // To get the correct movement direction from the camera to the board using input values,
                // get the cross product between the camera direction and the input direction, and use its Y value as the X value for our new direction,
                Vector3 cross = Vector3.Cross(translateValuePlane, cameraBoardDirection);
                // and then get the dot product between the camera direction and the input direction, and use that as the Z direction.
                float dot = Vector3.Dot(cameraBoardDirection,translateValuePlane);
                Vector3 result = new Vector3(cross.y, 0f, dot);

                // Remember to invert the X axis of the input value in order for the function to work correctly.

                tiltFiveContainer.Translate(result * translationSpeed * Time.deltaTime, Space.World);
            } 
        }

        /// <summary>
        /// Perform the rotation using the value received in input - RotateInputCallback().
        /// </summary>
        private void DoRotate()
        {
            // Check that the value of rotation is different from 0.
            if (_rotateValue != 0f)
            {
                Vector3 newRotation = new Vector3(0, 0, _rotateValue); // Apply rotation the the Z axis

                tiltFiveContainer.Rotate(newRotation * rotationSpeed * Time.deltaTime, Space.World);
            }
        }
        
        /// <summary>
        /// Perform the rotation value received in input - TiltInputCallback().
        /// </summary>
        private void DoTilt()
        {
            // Check that the magnitude of the tilt vector is higher than 0.
            if (_tiltValue.magnitude > 0f)
            {
                // Convert the tilt input to vector3, separately so that the rotation can be performed
                // in different axis spaces.
                Vector3 tilt = new Vector3(-_tiltValue.y, 0f,0f);
                Vector3 rotation = new Vector3(0f, -_tiltValue.x, 0f);

                tiltFiveContainer.Rotate(tilt * tiltingSpeed * Time.deltaTime, Space.World); // Use world space for board forwards and backwards rotation.
                tiltFiveContainer.Rotate(rotation * tiltingSpeed * Time.deltaTime, Space.Self); // Use self space for board sides rotation.
            }
        }
        
        /// <summary>
        /// Perform the height using the flag and value received in input - HeightInputCallback().
        /// </summary>
        private void DoHeight()
        {
            // Check that the value of height is higher than 0.
            if (_heightValue != 0f)
            {
                // Use the axis input value for the Y axis
                Vector3 heightAdjust = new Vector3(0f,_heightValue, 0f);
                
                // Raise or lower the board with transform.Translate().
                tiltFiveContainer.Translate(heightAdjust * heightSpeed * Time.deltaTime, Space.World);
            }
        }

        public void ResetContainer()
        {
            tiltFiveContainer.position = _originalPosition;
            tiltFiveContainer.rotation = _originalRotation;
        }
    }
}
