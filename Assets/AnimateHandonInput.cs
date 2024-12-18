using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class AnimateHandonInput : MonoBehaviour
{
    public InputActionProperty PinchAnimatinAction;
    public InputActionProperty gripAnimationAction;
    public Animator handAnimator;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        float triggerValue = PinchAnimatinAction.action.ReadValue<float>();
        if (handAnimator != null)
        {
            handAnimator.SetFloat("Trigger", triggerValue);
        }

        float gripvalue = gripAnimationAction.action.ReadValue<float>();
        if (handAnimator != null)
        {
            handAnimator.SetFloat("Grip", gripvalue);
        }
    }
}