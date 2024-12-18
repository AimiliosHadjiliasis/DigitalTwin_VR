using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class lr_Testing : MonoBehaviour
{
    [SerializeField] private Transform[] points;
    [SerializeField] private lr_LineController line;

    // Update is called once per frame
    void Start()
    {
        line.SetUpLine(points);
    }
}
