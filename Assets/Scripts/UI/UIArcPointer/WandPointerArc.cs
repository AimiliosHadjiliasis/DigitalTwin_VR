using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace TiltFiveDemos
{
    /// <summary>
    /// Represent the pointer with a parabolic curve, and draw it in front of the wand.
    /// </summary>
    [ExecuteInEditMode] // Execute in edit mode to visualize the curve in the editor.
    public class WandPointerArc : WandPointer
    {
        /// <summary>
        /// The number of points the curve (affects appearance and performance).
        /// </summary>
        [SerializeField]
        private int _points = 120;

        /// <summary>
        /// The max distance of the curve.
        /// </summary>
        [SerializeField]
        private float _distance = 0.04f;

        /// <summary>
        /// The multiplier of the acceleration.
        /// </summary>
        [SerializeField]
        private Vector3 _accelerationMultiplier = new Vector3(0f, -0.8f, 0.18f);

        private void Update()
        {
            ParabolicCast();
        }

        /// <summary>
        /// Start performing the raycast.
        /// </summary>
        protected void ParabolicCast() 
        {
            Vector3 baseDirection = _pointerOrigin.forward + Vector3.up; // Hardcode direction between the pointer forward and up

            // Multiply direction by the acceleration multiplier.
            Vector3 acceleration = new Vector3(baseDirection.x * _accelerationMultiplier.x, baseDirection.y * _accelerationMultiplier.y, baseDirection.z * _accelerationMultiplier.z);

            // Normalize the direction to find the velocity.
            Vector3 velocity = baseDirection.normalized;

            Vector3 originalPosition = _pointerOrigin.position;

            Vector3 lastPoint = originalPosition;

            float timeStep = 0;

            bool hitCanvas = false;

            _line.positionCount = 0;

            // Run the time step through every point in the arc.
            for (int i = 0; i < _points; i++)
            {
                // Calculate the parabola for the current time step.
                timeStep += _distance / ParabolicCurveDerivation(velocity, acceleration, timeStep).magnitude;
                Vector3 nextPoint = ParabolicCurve(_pointerOrigin.position, velocity, acceleration, timeStep);

                // Draw each point of the parabola in the line renderer.
                _line.positionCount++;
                _line.SetPosition(i, _line.transform.InverseTransformPoint(lastPoint));

                // Perform the raycast
                Ray ray = new Ray(lastPoint,(nextPoint - lastPoint).normalized);

                RaycastHit hit;

                if (Physics.Raycast(ray, out hit, Vector3.Distance(lastPoint, nextPoint), _uILayers))
                {
                    Vector3 hitPoint = hit.point;

                    GraphicRaycaster raycaster = hit.collider.GetComponent<GraphicRaycaster>();

                    if (raycaster != null)
                    {

                        _pointer.SetActive(true);
                        _pointer.transform.position = hit.point;
                        _pointer.transform.rotation = raycaster.transform.rotation;

                        CheckCanvas(raycaster, hitPoint);
                        hitCanvas = true;
                        break; // If we found a canvas, stop the curve.
                    }
                }

                lastPoint = nextPoint; // Store the point for the next step.
            }

            // Deselect the last selectable if a canvas wasn't found.
            if(!hitCanvas)
            {
                _pointer.SetActive(false);
                DeselectCurrentSelectable();
            }
        }

        /// <summary>
        /// Calculate the parabolic curve in 3 dimensions.
        /// </summary>
        /// <param name="pPosition">Position</param>
        /// <param name="pVelocity">Velocity</param>
        /// <param name="pAcceleration">Acceleration</param>
        /// <param name="pTime">Step</param>
        /// <returns></returns>
        private Vector3 ParabolicCurve(Vector3 pPosition, Vector3 pVelocity, Vector3 pAcceleration, float pTime)
        {
            Vector3 curve = new Vector3();

            for (int i = 0; i < 3; i++)
            {
                curve[i] = ParabolicCurve(pPosition[i], pVelocity[i], pAcceleration[i], pTime);
            }

            return curve;
        }

        /// <summary>
        /// Calculate the step of each dimension of the parabolic curve.
        /// </summary>
        /// <param name="pPosition">The position</param>
        /// <param name="pVelocity">The velocity</param>
        /// <param name="pAcceleration">The acceleration</param>
        /// <param name="pTime">The time step</param>
        /// <returns></returns>
        private float ParabolicCurve(float pPosition, float pVelocity, float pAcceleration, float pTime)
        {
            return pPosition + pVelocity * pTime + 0.5f * pAcceleration * pTime * pTime;
        }

        /// <summary>
        /// Calculate the derivation of the parabolic curve in 3 dimensions.
        /// </summary>
        /// <param name="pVelocity">The position vector</param>
        /// <param name="pAcceleration">The acceleration vector</param>
        /// <param name="pTime">The time step</param>
        /// <returns></returns>
        private Vector3 ParabolicCurveDerivation(Vector3 pVelocity, Vector3 pAcceleration, float pTime)
        {
            Vector3 derivation = new Vector3();

            for (int i = 0; i < 3; i++)
            {
                derivation[i] = ParabolicCurveDerivation(pVelocity[i], pAcceleration[i], pTime);
            }

            return derivation;
        }

        /// <summary>
        /// Calculate the step of each dimension of the parabolic curve derivation.
        /// </summary>
        /// <param name="pPosition">The position</param>
        /// <param name="pAcceleration">The acceleration</param>
        /// <param name="pTime">The time step</param>
        /// <returns></returns>
        private float ParabolicCurveDerivation(float pPosition, float pAcceleration, float pTime)
        {
            return pPosition + pAcceleration * pTime;
        }
    }
}
