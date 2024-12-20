﻿/*
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
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using Input = TiltFive.Input;

namespace TiltFiveDemos
{
    /// <summary>
    /// Receive input from the Tilt Five Plugin and send them to the different events defined inside the Unity Editor or in other scripts.
    /// Separate the receiver class from the class that triggers the actual events, so that the events can be reused in different contexts.
    /// </summary>
    public class T5InputReceiver : MonoBehaviour
    {
        // UnityEvents allow simple drag and drop of events in the editor, or through code-based assignments.
        // The visualizer here uses events defined in the editor.

        /// <summary>
        /// Called when the wand becomes available.
        /// </summary>
        [SerializeField]
        private UnityEvent _onWandAvailable;
        /// <summary>
        /// Called when the wand becomes unavailable
        /// </summary>
        [SerializeField]
        private UnityEvent _onWandUnavailable;

        /// <summary>
        /// Called on A pressed.
        /// </summary>
        [SerializeField]
        private UnityEvent _onAPressed;
        /// <summary>
        /// Called on A held down.
        /// </summary>
        [SerializeField]
        private UnityEvent _onAHeld;
        /// <summary>
        /// Called on A lifted.
        /// </summary>
        [SerializeField]
        private UnityEvent _onALifted;

        /// <summary>
        /// Called on B pressed.
        /// </summary>
        [SerializeField]
        private UnityEvent _onBPressed;
        /// <summary>
        /// Called on B held down.
        /// </summary>
        [SerializeField]
        private UnityEvent _onBHeld;
        /// <summary>
        /// Called on B lifted.
        /// </summary>
        [SerializeField]
        private UnityEvent _onBLifted;

        /// <summary>
        /// Called on X pressed.
        /// </summary>
        [SerializeField]
        private UnityEvent _onXPressed;
        /// <summary>
        /// Called on X held down.
        /// </summary>
        [SerializeField]
        private UnityEvent _onXHeld;
        /// <summary>
        /// Called on X lifted.
        /// </summary>
        [SerializeField]
        private UnityEvent _onXLifted;

        /// <summary>
        /// Called on Y pressed.
        /// </summary>
        [SerializeField]
        private UnityEvent _onYPressed;
        /// <summary>
        /// Called on Y held down.
        /// </summary>
        [SerializeField]
        private UnityEvent _onYHeld;
        /// <summary>
        /// Called on Y lifted.
        /// </summary>
        [SerializeField]
        private UnityEvent _onYLifted;

        /// <summary>
        /// On button 1 pressed.
        /// </summary>
        [SerializeField]
        private UnityEvent _onOnePressed;
        /// <summary>
        /// Called on 1 held down.
        /// </summary>
        [SerializeField]
        private UnityEvent _onOneHeld;
        /// <summary>
        /// On button 1 lifted.
        /// </summary>
        [SerializeField]
        private UnityEvent _onOneLifted;

        /// <summary>
        /// On button 2 pressed.
        /// </summary>
        [SerializeField]
        private UnityEvent _onTwoPressed;
        /// <summary>
        /// Called on 2 held down.
        /// </summary>
        [SerializeField]
        private UnityEvent _onTwoHeld;
        /// <summary>
        /// On button 2 lifted.
        /// </summary>
        [SerializeField]
        private UnityEvent _onTwoLifted;

        /// <summary>
        /// On button System pressed.
        /// </summary>
        [SerializeField]
        private UnityEvent _onSystemPressed;
        /// <summary>
        /// On button System held down.
        /// </summary>
        [SerializeField]
        private UnityEvent _onSystemHeld;
        /// <summary>
        /// On button System lifted.
        /// </summary>
        [SerializeField]
        private UnityEvent _onSystemLifted;

        /// <summary>
        /// Create a class that inherits from UnityEvent<T> in order to expose custom parameters in the inspector.
        /// In this case, float, so we can get the value from 0 to 1 of the trigger pressed.
        /// </summary>
        [Serializable]
        public class OnTriggerDown : UnityEvent<float> { };
        /// <summary>
        /// On the trigger held down.
        /// </summary>
        [SerializeField]
        private OnTriggerDown _onTriggerDown;
        /// <summary>
        /// On the trigger pressed.
        /// </summary>
        [SerializeField]
        private UnityEvent _onTriggerPressed;
        /// <summary>
        /// On the trigger released.
        /// </summary>
        [SerializeField]
        private UnityEvent _onTriggerReleased;

        /// <summary>
        /// Create a class that inherits from UnityEvent<T> in order to expose custom parameters in the inspector.
        /// In this case, Vector2, to get the value of stick tilt.
        /// </summary>
        [Serializable]
        public class OnStickMoved : UnityEvent<Vector2> { };
        /// <summary>
        /// On the stick moved.
        /// </summary>
        [SerializeField]
        private OnStickMoved _onStickMoved;
        /// <summary>
        /// On the stick pressed.
        /// </summary>
        [SerializeField]
        private UnityEvent _onStickPressed;
        /// <summary>
        /// On button Stick held down.
        /// </summary>
        [SerializeField]
        private UnityEvent _onStickHeld;
        /// <summary>
        /// On the stick released.
        /// </summary>
        [SerializeField]
        private UnityEvent _onStickReleased;
        /// <summary>
        /// On the stick stopped moving.
        /// </summary>
        [SerializeField]
        private UnityEvent _onStickStopMoving;
        /// <summary>
        /// On the stick stopped being used (pressed or moved).
        /// </summary>
        [SerializeField]
        private UnityEvent _onStickStopUse;

        /// <summary>
        /// The event for pulling the stick down.
        /// </summary>
        [SerializeField]
        private UnityEvent _onStickDown;

        /// <summary>
        /// The event for pulling the stick up.
        /// </summary>
        [SerializeField]
        private UnityEvent _onStickUp;

        /// <summary>
        /// The event for pulling the stick right.
        /// </summary>
        [SerializeField]
        private UnityEvent _onStickRight;

        /// <summary>
        /// The event for pulling the stick right.
        /// </summary>
        [SerializeField]
        private UnityEvent _onStickLeft;

        /// <summary>
        /// The event for holding the stick down.
        /// </summary>
        [SerializeField]
        private UnityEvent _onStickHeldDown;

        /// <summary>
        /// The event for holding the stick up.
        /// </summary>
        [SerializeField]
        private UnityEvent _onStickHeldUp;

        /// <summary>
        /// The event for holding the stick right.
        /// </summary>
        [SerializeField]
        private UnityEvent _onStickHeldRight;

        /// <summary>
        /// The event for holding the stick right.
        /// </summary>
        [SerializeField]
        private UnityEvent _onStickHeldLeft;

        /// <summary>
        /// The movement deadzone of the stick, used to make sure we're pulling in the right direction.
        /// </summary>
        [SerializeField]
        private float _stickMovementDeadzone = 0.2f;
        /// <summary>
        /// The time to wait before starting the event when a direction of the stick is held down.
        /// </summary>
        [SerializeField]
        private float _stickMovementHoldWait = 0.75f;
        /// <summary>
        /// The time between each even when the stick is held down.
        /// </summary>
        [SerializeField]
        private float _stickMovementHoldDelay = 0.05f;

        /// <summary>
        /// Flag to know if we're holding the stick down
        /// </summary>
        public bool _stickDown = false;
        /// <summary>
        /// Flag to know if we're holding the stick up
        /// </summary>
        public bool _stickUp = false;
        /// <summary>
        /// Flag to know if we're holding the stick left
        /// </summary>
        public bool _stickLeft = false;
        /// <summary>
        /// Flag to know if we're holding the stick right
        /// </summary>
        public bool _stickRight = false;

        /// <summary>
        /// Is wand available?
        /// </summary>
        private bool _isWandAvailable = false;

        /// <summary>
        /// Has the trigger been pressed?
        /// </summary>
        public bool _pressedTrigger = false;

        /// <summary>
        /// Has the stick been moved?
        /// </summary>
        private bool _movingStick = false;

        /// <summary>
        /// Is the stick being pressed?
        /// </summary>
        private bool _pressingStick = false;

        /// <summary>
        /// Store the coroutine for when down is held down.
        /// </summary>
        private Coroutine _downHeldCoroutine;
        /// <summary>
        /// Store the coroutine for when up is held down.
        /// </summary>
        private Coroutine _upHeldCoroutine;
        /// <summary>
        /// Store the coroutine for when right is held down.
        /// </summary>
        private Coroutine _rightHeldCoroutine;
        /// <summary>
        /// Store the coroutine for when left is held down.
        /// </summary>
        private Coroutine _leftHeldCoroutine;

        /// <summary>
        /// Is this input receiver active?
        /// </summary>
        private bool _active = true;

        /// <summary>
        /// Access the active state of this input receiver.
        /// </summary>
        public bool Active { get => _active; set => _active = value; }

        private void Start()
        {
            // Find if wand is available at the start and send the correct event.
            _isWandAvailable = Input.GetWandAvailability();

            if (_isWandAvailable)
            {
                _onWandAvailable.Invoke();
            }
            else
            {
                _onWandUnavailable.Invoke();
            }
        }

        private void Update()
        {
            // Prevent checking if this receiver is not active.
            if (!_active) return;

            // Find if wand is available AND if we've already set the wand state, so that the event doesn't trigger more than once.

            if (Input.GetWandAvailability() && !_isWandAvailable)
            {
                _onWandAvailable.Invoke();
                _isWandAvailable = true;
            }
            else if (!Input.GetWandAvailability() && _isWandAvailable)
            {
                _onWandUnavailable.Invoke();
                _isWandAvailable = false;
            }

            // Find if the buttons are being pressed on the update.
            if (Input.TryGetButtonDown(Input.WandButton.A, out bool aButtonDown) && aButtonDown)
            {
                _onAPressed.Invoke();
            }
            if (Input.TryGetButton(Input.WandButton.A, out bool aButtonHeld) && aButtonHeld)
            {
                _onAHeld.Invoke();
            }
            if (Input.TryGetButtonUp(Input.WandButton.A, out bool aButtonUp) && aButtonUp)
            {
                _onALifted.Invoke();
            }

            if (Input.TryGetButtonDown(Input.WandButton.B, out bool bButtonDown) && bButtonDown)
            {
                _onBPressed.Invoke();
            }
            if (Input.TryGetButton(Input.WandButton.B, out bool bButtonHeld) && bButtonHeld)
            {
                _onBHeld.Invoke();
            }
            if (Input.TryGetButtonUp(Input.WandButton.B, out bool bButtonUp) && bButtonUp)
            {
                _onBLifted.Invoke();
            }

            if (Input.TryGetButtonDown(Input.WandButton.X, out bool xButtonDown) && xButtonDown)
            {
                _onXPressed.Invoke();
            }
            if (Input.TryGetButton(Input.WandButton.X, out bool xButtonHeld) && xButtonHeld)
            {
                _onXHeld.Invoke();
            }
            if (Input.TryGetButtonUp(Input.WandButton.X, out bool xButtonUp) && xButtonUp)
            {
                _onXLifted.Invoke();
            }

            if (Input.TryGetButtonDown(Input.WandButton.Y, out bool yButtonDown) && yButtonDown)
            {
                _onYPressed.Invoke();
            }
            if (Input.TryGetButton(Input.WandButton.Y, out bool yButtonHeld) && yButtonHeld)
            {
                _onYHeld.Invoke();
            }
            if (Input.TryGetButtonUp(Input.WandButton.Y, out bool yButtonUp) && yButtonUp)
            {
                _onYLifted.Invoke();
            }

            if (Input.TryGetButtonDown(Input.WandButton.One, out bool oneButtonDown) && oneButtonDown)
            {
                _onOnePressed.Invoke();
            }
            if (Input.TryGetButton(Input.WandButton.One, out bool oneButtonHeld) && oneButtonHeld)
            {
                _onOneHeld.Invoke();
            }
            if (Input.TryGetButtonUp(Input.WandButton.One, out bool oneButtonUp) && oneButtonUp)
            {
                _onOneLifted.Invoke();
            }

            if (Input.TryGetButtonDown(Input.WandButton.Two, out bool twoButtonDown) && twoButtonDown)
            {
                _onTwoPressed.Invoke();
            }
            if (Input.TryGetButton(Input.WandButton.Two, out bool twoButtonHeld) && twoButtonHeld)
            {
                _onTwoHeld.Invoke();
            }
            if (Input.TryGetButtonUp(Input.WandButton.Two, out bool twoButtonUp) && twoButtonUp)
            {
                _onTwoLifted.Invoke();
            }

            if (Input.TryGetButtonDown(Input.WandButton.T5, out bool systemButtonDown) && systemButtonDown)
            {
                _onSystemPressed.Invoke();
            }
            if (Input.TryGetButton(Input.WandButton.T5, out bool systemButtonHeld) && systemButtonHeld)
            {
                _onSystemHeld.Invoke();
            }
            if (Input.TryGetButtonUp(Input.WandButton.T5, out bool systemButtonUp) && systemButtonUp)
            {
                _onSystemLifted.Invoke();
            }

            // The stick button is Z
            if (Input.TryGetButtonDown(Input.WandButton.Three, out bool stickButtonDown) && stickButtonDown)
            {
                _pressingStick = true;
                _onStickPressed.Invoke();
            }
            if (Input.TryGetButton(Input.WandButton.Three, out bool stickButtonHeld) && stickButtonHeld)
            {
                _onStickHeld.Invoke();
            }
            if (Input.TryGetButtonUp(Input.WandButton.Three, out bool stickButtonUp) && stickButtonUp)
            {
                _pressingStick = false;
                _onStickReleased.Invoke();

                if (!_movingStick && !_pressingStick) // Perform action when stick isn't used at all, make sure that the other flag isn't enabled.
                {
                    _onStickStopUse.Invoke();
                }
            }

            // For the trigger, find if the pressure magnitude is higher than 0.
            if (Input.TryGetTrigger(out float triggerValue) && triggerValue > 0.1f)
            {
                if (!_pressedTrigger)
                {
                    _pressedTrigger = true;
                    _onTriggerPressed.Invoke();
                }
                _onTriggerDown.Invoke(triggerValue);
            }
            else if (_pressedTrigger) // Use this flag to avoid triggering the released action more than once.
            {
                _pressedTrigger = false;
                _onTriggerReleased.Invoke();
            }

            // For the stick axis, find it the movement magnitude is higher than 0.
            if (Input.TryGetStickTilt(out Vector2 stickTilt) && stickTilt.magnitude > 0.15f)
            {
                _movingStick = true;
                _movingStick = true;
                _onStickMoved.Invoke(stickTilt);

                // Check the stick movement to trigger events for specific directions.
                CheckStickMovement(stickTilt);
            }
            else if (_movingStick) // Use this flag to avoid triggering the stick release action more than once.
            {
                ResetStickMovementFlags();
                _movingStick = false;
                _onStickStopMoving.Invoke();

                if (!_movingStick && !_pressingStick) // Perform action when stick isn't used at all, make sure that the other flag isn't enabled.
                {
                    _onStickStopUse.Invoke();
                }
            }
        }

        /// <summary>
        /// Check the stick movement and decide the current movement.
        /// Primarily used for UI, or movements that require precise directions.
        /// </summary>
        /// <param name="pTilt"></param>
        private void CheckStickMovement(Vector2 pTilt)
        {
            if (pTilt.y > _stickMovementDeadzone && (pTilt.x > -_stickMovementDeadzone && pTilt.x < _stickMovementDeadzone))
            {
                // Moved up
                if (!_stickUp)
                {
                    ResetStickMovementFlags();
                    _stickUp = true;
                    _onStickUp.Invoke();

                    // Start the coroutine for holding down, stop if it was previously activated.
                    KillCoroutine(_upHeldCoroutine);
                    _upHeldCoroutine = StartCoroutine(UpHeldCoroutine());
                }
            }
            else if (pTilt.y < -_stickMovementDeadzone && (pTilt.x > -_stickMovementDeadzone && pTilt.x < _stickMovementDeadzone))
            {
                // Moved down
                if (!_stickDown)
                {
                    ResetStickMovementFlags();
                    _stickDown = true;
                    _onStickDown.Invoke();

                    KillCoroutine(_downHeldCoroutine);
                    _downHeldCoroutine = StartCoroutine(DownHeldCoroutine());
                }
            }
            else if (pTilt.x < -_stickMovementDeadzone && (pTilt.y > -_stickMovementDeadzone && pTilt.y < _stickMovementDeadzone))
            {
                // Moved right
                if (!_stickLeft)
                {
                    ResetStickMovementFlags();
                    _stickLeft = true;
                    _onStickLeft.Invoke();

                    KillCoroutine(_leftHeldCoroutine);
                    _leftHeldCoroutine = StartCoroutine(LeftHeldCoroutine());
                }
            }
            else if (pTilt.x > _stickMovementDeadzone && (pTilt.y > -_stickMovementDeadzone && pTilt.y < _stickMovementDeadzone))
            {
                // Moved left
                if (!_stickRight)
                {
                    ResetStickMovementFlags();
                    _stickRight = true;
                    _onStickRight.Invoke();

                    KillCoroutine(_rightHeldCoroutine);
                    _rightHeldCoroutine = StartCoroutine(RightHeldCoroutine());
                }
            }
            else
            {
                ResetStickMovementFlags();
            }
        }

        /// <summary>
        /// The coroutine for when down is held down.
        /// </summary>
        /// <returns></returns>
        private IEnumerator DownHeldCoroutine()
        {
            yield return new WaitForSeconds(_stickMovementHoldWait);

            while (_stickDown)
            {
                _onStickHeldDown.Invoke();
                yield return new WaitForSeconds(_stickMovementHoldDelay);
            }

            _downHeldCoroutine = null;
        }

        /// <summary>
        /// The coroutine for when up is held down.
        /// </summary>
        /// <returns></returns>
        private IEnumerator UpHeldCoroutine()
        {
            yield return new WaitForSeconds(_stickMovementHoldWait);

            while (_stickUp)
            {
                _onStickHeldUp.Invoke();
                yield return new WaitForSeconds(_stickMovementHoldDelay);
            }

            _upHeldCoroutine = null;
        }

        /// <summary>
        /// The coroutine for when right is held down.
        /// </summary>
        /// <returns></returns>
        private IEnumerator RightHeldCoroutine()
        {
            yield return new WaitForSeconds(_stickMovementHoldWait);

            while (_stickRight)
            {
                _onStickHeldRight.Invoke();
                yield return new WaitForSeconds(_stickMovementHoldDelay);
            }

            _rightHeldCoroutine = null;
        }

        /// <summary>
        /// The coroutine for when left is held down.
        /// </summary>
        /// <returns></returns>
        private IEnumerator LeftHeldCoroutine()
        {
            yield return new WaitForSeconds(_stickMovementHoldWait);

            while (_stickLeft)
            {
                _onStickHeldLeft.Invoke();
                yield return new WaitForSeconds(_stickMovementHoldDelay);
            }

            _leftHeldCoroutine = null;
        }

        /// <summary>
        /// Reset all the stick movement flags and coroutines for holding down.
        /// </summary>
        private void ResetStickMovementFlags()
        {
            _stickDown = false;
            _stickUp = false;
            _stickLeft = false;
            _stickRight = false;

            KillCoroutine(_downHeldCoroutine);
            KillCoroutine(_upHeldCoroutine);
            KillCoroutine(_leftHeldCoroutine);
            KillCoroutine(_rightHeldCoroutine);

            _downHeldCoroutine = null;
            _upHeldCoroutine = null;
            _leftHeldCoroutine = null;
            _rightHeldCoroutine = null;
        }

        /// <summary>
        /// Finds if the coroutine is assigned and stops it if it is.
        /// </summary>
        /// <param name="pCoroutine"></param>
        private void KillCoroutine(Coroutine pCoroutine)
        {
            if (pCoroutine != null)
            {
                StopCoroutine(pCoroutine);
                pCoroutine = null;
            }
        }
    }
}
