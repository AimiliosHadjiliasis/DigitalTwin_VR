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
using UnityEngine;

namespace TiltFiveDemos
{
    /// <summary>
    /// Sets the mouse locked state to the selected lock mode.
    /// </summary>
    public class MouseCursorToggle : MonoBehaviour
    {
        /// <summary>
        /// The selected toggle mode.
        /// Locked: Cursor is locked to the center of the screen.
        /// None: No cursor locking.
        /// </summary>
        [SerializeField]
        private CursorLockMode _lockMode;

        /// <summary>
        /// Set the lock mode on Start.
        /// </summary>
        void Start()
        {
            Cursor.visible = false;
            Cursor.lockState = _lockMode;
        }
    }
}
