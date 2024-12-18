using ChartsAndGraphs3D;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ValueDisplaySample : MonoBehaviour
{
    public List<ValueDisplay> ValueDisplays;


    // Use this for initialization
    void Start()
    {
        StartCoroutine(Loop());
    }

    private IEnumerator Loop()
    {
        while (true)
        {
            yield return new WaitForSeconds(0.1f);
            for (int i = 0; i < ValueDisplays.Count - 3; i++)
            {
                ValueDisplays[i].IncreaseValue(UnityEngine.Random.Range(0, 2));
            }
            int a = UnityEngine.Random.Range(0, 2);

            ValueDisplays[9].IncreaseValue(a);
            ValueDisplays[8].IncreaseValue(a);
        }
    }

    // Update is called once per frame
    void Update()
    {

    }
}
