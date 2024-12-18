using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class ProjectileScript : MonoBehaviour
{
    private void Start()
    {
        transform.DOMoveY(1f, 1f).SetEase(Ease.Linear).SetLoops(-1, LoopType.Yoyo);
    }
    //void Update()
    //{
    //    transform.position = transform.position + new Vector3(0f, 0f, 1f) * Time.deltaTime;
    //}
}
