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

/// <summary>
/// An object that emits a sound when it receives a collision.
/// </summary>
public class SoundCollision : MonoBehaviour
{
    /// <summary>
    /// The sound to play.
    /// </summary>
    [SerializeField]
    private AudioClip _sound;

    /// <summary>
    /// The audio source of this object.
    /// </summary>
    [SerializeField]
    private AudioSource _audioSource;

    /// <summary>
    /// The SpeedCalculator assigned to the wand, so we can know the speed of the wand in the collision.
    /// </summary>
    [SerializeField]
    private SpeedCalculator _wandSpeed;

    /// <summary>
    /// Whether to use the wand speed to increase or decrease the volume.
    /// </summary>
    [SerializeField]
    private bool _useWandSpeed = true;

    /// <summary>
    /// The animator of this object.
    /// </summary>
    [SerializeField]
    private Animator _animator;

    /// <summary>
    /// The particles to instance when the object is touched.
    /// </summary>
    [SerializeField]
    private GameObject _particlesPrefab;

    /// <summary>
    /// The container for the particles in the scene..
    /// </summary>
    [SerializeField]
    private Transform _particlesContainer;

    /// <summary>
    /// The tag of the collider in the wand.
    /// </summary>
    private const string WAND_COLLIDER_TAG = "Wand";

    /// <summary>
    /// The trigger string for the hit animation.
    /// </summary>
    private const string HIT_ANIMATOR_TRIGGER = "Hit";

    /// <summary>
    /// The maximum wand speed to calculate for volume.
    /// (Taken from the magnitud of the wand movement)
    /// </summary>
    private const float MAX_WAND_SPEED = 1.5f;

    /// <summary>
    /// The minimum wand speed to calculate for volume.
    /// (Taken from the magnitud of the wand movement)
    /// </summary>
    private const float MIN_WAND_SPEED = 0.05f;

    /// <summary>
    /// The maximum volume to play the sound.
    /// </summary>
    private const float MAX_VOLUME = 2f;

    /// <summary>
    /// The minimum volume to play the sound.
    /// </summary>
    private const float MIN_VOLUME = 0.25f;

    /// <summary>
    /// The default volume of the sound.
    /// </summary>
    private const float DEFAULT_VOLUME = 0.8f;

    /// <summary>
    /// The factor for the volume calculation in relation to the speed.
    /// </summary>
    private float _speedFactor;

    private void Start()
    {
        // Calculate the factor for the volume calculation.
        float speedAmount = MAX_WAND_SPEED - MIN_WAND_SPEED;

        _speedFactor = 1f / speedAmount;
    }

    /// <summary>
    /// On trigger enter, make sure the wand is touching the object and play the sound.
    /// </summary>
    /// <param name="other"></param>
    private void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag(WAND_COLLIDER_TAG))
        {
            PlaySound();
            AddParticles(other.transform.position);
        }
    }

    /// <summary>
    /// Play the sound.
    /// </summary>
    private void PlaySound()
    {
        float volume = DEFAULT_VOLUME;
        
        // If we're using the wand speed for volume, calculate the volume with the current wand speed.
        if (_useWandSpeed)
        {
            float fixedSpeed = _wandSpeed.Speed - MIN_WAND_SPEED;
            volume = Mathf.Clamp(fixedSpeed * _speedFactor, MIN_VOLUME, MAX_VOLUME);
        }

        _audioSource.PlayOneShot(_sound, volume); // Play the audio as one shot, so that it can be played multiple times.
        _animator.SetTrigger(HIT_ANIMATOR_TRIGGER); // Trigger the animation in the animator.
    }

    /// <summary>
    /// Instance the particles on the position of the wand collider.
    /// </summary>
    /// <param name="pHitPosition"></param>
    private void AddParticles(Vector3 pHitPosition)
    {
        GameObject particles = Instantiate(_particlesPrefab, _particlesContainer);
        particles.transform.position = pHitPosition;
    }
}
