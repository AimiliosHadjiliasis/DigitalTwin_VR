using SimpleJSON;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class NetworkManager : MonoBehaviour
{
    public string successTxt;
    private void Awake()
    {
        if (RestClient.NetworkInstance == null)
        {
            RestClient.Initialize(this);
            DontDestroyOnLoad(gameObject);
            return;
        }

        Destroy(gameObject);
    }

    public void SendRequest_POST(string URL, WWWForm data, Action<string> onSuccess, Action<string> onError) =>
        StartCoroutine(SendRequest_POST_Coroutine(URL, data, onSuccess, onError));

    private IEnumerator SendRequest_POST_Coroutine(string URL, WWWForm data, Action<string> onSuccess, Action<string> onError)
    {
        yield return null;
        using (var request = UnityWebRequest.Post(URL, data))
        {
            yield return SendRequest(request, onSuccess, onError);
        }
    }

    public void SendRequest_POST(string URL, WWWForm data, Dictionary<string, string> header, Action<string> onSuccess, Action<string> onError) =>
        StartCoroutine(SendRequest_POST_Coroutine(URL, data, header, onSuccess, onError));


    private IEnumerator SendRequest_POST_Coroutine(string URL, WWWForm data, Dictionary<string, string> header, Action<string> onSuccess, Action<string> onError)
    {
        yield return null;
        using (var request = UnityWebRequest.Post(URL, data))
        {
            foreach (var item in header) request.SetRequestHeader(item.Key, item.Value);
            yield return SendRequest(request, onSuccess, onError);
        }
    }

    private IEnumerator SendRequest(UnityWebRequest request, Action<string> onSuccess, Action<string> onError)
    {
        yield return request.SendWebRequest();
        if (request.isNetworkError || request.isHttpError) onError?.Invoke(request.error);
        else
        {
            JSONNode node = JSON.Parse(request.downloadHandler.text);
            Debug.Log(node);
            successTxt = request.downloadHandler.text;
            onSuccess?.Invoke(node);
        }
    }
}
