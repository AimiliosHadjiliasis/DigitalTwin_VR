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
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace TiltFiveDemos
{
    /// <summary>
    /// Manually switches the Event System to a new interactable.
    /// For use in certain situations that require shifting the Event System.
    /// </summary>
    public class SwitchToInteractable : MonoBehaviour
    {
        [SerializeField]
        private Selectable _newInteractable;

        /// <summary>
        /// Does the switch.
        /// </summary>
        public void DoSwitchInteractable()
        {
            if (EventSystem.current != null)
            {

                EventSystem.current.SetSelectedGameObject(null);

                Canvas.ForceUpdateCanvases();

                _newInteractable.Select();

                Canvas.ForceUpdateCanvases();
                Debug.Log("Selecting: " + _newInteractable.gameObject, _newInteractable.gameObject);
            }
        }
    }
}
