using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class lr_MoveLine : MonoBehaviour
{
    public Transform startPoint;
    public Transform endPoint;
    public float maxSpeed = 0.1f;
    public bool isPlaying = false;
    public bool isFF1 = false;
    public bool isFF2 = false;
    public bool isFF3 = false;
    public bool isStoped = false;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(isPlaying == true)
        {
            Play();
        }

        if (isFF1 == true)
        {
            FF1();
        }

        if (isFF2 == true)
        {
            FF2();
        }

        if (isFF3 == true)
        {
            FF3();
        }
    }

    public void Play()
    {
        isPlaying = true;
        isFF1 = false;
        isFF2 = false;
        isFF3 = false;
        var change = maxSpeed * Time.deltaTime;
        transform.position = Vector3.MoveTowards(transform.position, endPoint.position, change);
        if(transform.position == endPoint.position)
        {
            isPlaying = false;
        }
    }

    public void Stop()
    {
        isPlaying = false;
        isFF1 = false;
        isFF2 = false;
        isFF3 = false;
    }

    public void FF1()
    {
        isPlaying = false;
        isFF1 = true;
        isFF2 = false;
        isFF3 = false;
        var change = 0.13f * Time.deltaTime;
        transform.position = Vector3.MoveTowards(transform.position, endPoint.position, change);
        if (transform.position == endPoint.position)
        {
            isFF1 = false;
        }
    }

    public void FF2()
    {
        isPlaying = false;
        isFF1 = false;
        isFF2 = true;
        isFF3 = false;
        var change = 0.19f * Time.deltaTime;
        transform.position = Vector3.MoveTowards(transform.position, endPoint.position, change);
        if (transform.position == endPoint.position)
        {
            isFF2 = false;
        }
    }

    public void FF3()
    {
        isPlaying = false;
        isFF1 = false;
        isFF2 = false;
        isFF3 = true;
        var change = 0.4f * Time.deltaTime;
        transform.position = Vector3.MoveTowards(transform.position, endPoint.position, change);
        if (transform.position == endPoint.position)
        {
            isFF3 = false;
        }
    }

    public void Rest()
    {
        transform.position = startPoint.position;
    }
}
