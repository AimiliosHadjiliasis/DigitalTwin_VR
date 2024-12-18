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
using TiltFive;
using UnityEngine;
using Display = TiltFive.Display;

namespace TiltFiveDemos
{
    /// <summary>
    /// Detects whether the glasses are connected.
    /// </summary>
    public class GlassesDetectorBase : MonoBehaviour
    {
        /// <summary>
        /// Create a flag to avoid checking repeatedly.
        /// </summary>
        private bool _glassesAvailable = true;

        // Start is called before the first frame update
        void Start()
        {
            // Flag should be the opposite of the starting state of the glasses, so that the first event can always occur.
            if (Display.Instance != null)
            {
                _glassesAvailable = !Display.GetGlassesAvailability();
            }

            CheckGlasses();
        }

        // Update is called once per frame
        void Update()
        {
            CheckGlasses();
        }

        /// <summary>
        /// Check the current state of the glasses and call the proper event.
        /// </summary>
        private void CheckGlasses()
        {
            // Make sure that the TiltFive plugin is enabled and available.
            if (Display.Instance != null)
            {
                if (Display.GetGlassesAvailability())
                {
                    OnGlassesAvailable();
                }
                else
                {
                    OnGlassesUnavailable();
                }
            }
            else
            {
                OnGlassesUnavailable();
            }
        }

        /// <summary>
        /// On Glasses Available event.
        /// </summary>
        private void OnGlassesAvailable()
        {
            if(!_glassesAvailable)
            {
                _glassesAvailable = true;
                DoGlassesAvailable();
            }
        }

        /// <summary>
        /// On Glasses Unavailable event.
        /// </summary>
        private void OnGlassesUnavailable()
        {
            if (_glassesAvailable)
            {
                _glassesAvailable = false;
                DoGlassesUnavailable();
            }
        }

        /// <summary>
        /// Perform the glasses available action.
        /// </summary>
        protected virtual void DoGlassesAvailable()
        {

        }

        /// <summary>
        /// Perform the glasses unavailable action.
        /// </summary>
        protected virtual void DoGlassesUnavailable()
        {

        }
    }
}
