using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using Firebase;
using Firebase.Auth;
using Firebase.Unity.Editor;
using UnityEngine.Networking;

public class EventSpawner : MonoBehaviour {

    public GameObject container;
    public GameObject dotContainer;
    public GameObject prefabEvent;
    public GameObject dotPrefab;
    public string prefillurl = "https://fleet-fortress-211105.appspot.com/_ah/api/connected/v1/events/prefill";
    public string getEventurl = "https://fleet-fortress-211105.appspot.com/_ah/api/connected/v1/events/";
    public string jsonString;
    public ScrollSnapRect scroll;
    public GameObject Details;
    private prefill prefill;
    private Event Event;
    public Jsonparser j;
    public GameObject Loading;
    public void populateEvents()
    {
        StartCoroutine(prefillLister());
    }

    IEnumerator prefillLister()
    {
        FirebaseAuth auth = Firebase.Auth.FirebaseAuth.DefaultInstance;
        FirebaseUser user = auth.CurrentUser;


        Debug.Log("Prefilling events");
        //using (UnityWebRequest www = UnityWebRequest.Get("https://webhook.site/8e284497-5145-481d-8a18-0883dfd599e5"))
        using (UnityWebRequest www = UnityWebRequest.Get(prefillurl))
        {



            www.SetRequestHeader("Authorization", "Bearer " + j.token);
            www.SetRequestHeader("Content-Type", "application/json");

            yield return www.SendWebRequest();
            if (www.isNetworkError || www.isHttpError)
            {
                Debug.Log(www.responseCode);
                Debug.Log(www.url);
                Debug.Log(www.GetRequestHeader("Authorization"));
                Debug.Log(www.GetRequestHeader("Content-Type"));
                Debug.Log(www.error);
                Debug.Log(www.downloadHandler.text);
                if (www.responseCode.ToString() == "503")
                {
                    Debug.Log("Trying again : get prefill");
                    populateEvents();
                }
            }
            else
            {
                Debug.Log(www.responseCode);
                byte[] results = www.downloadHandler.data;
                jsonString = "";
                jsonString = Encoding.UTF8.GetString(results);
				Debug.Log(jsonString);
                prefill = JsonUtility.FromJson<prefill>(jsonString);

                StartCoroutine(Populator());
            }
        };
    }

    IEnumerator Populator()
    {
        FirebaseAuth auth = Firebase.Auth.FirebaseAuth.DefaultInstance;
        FirebaseUser user = auth.CurrentUser;


        for (int i = 0; i < prefill.events.Length; i++)
        {
            //using (UnityWebRequest www = UnityWebRequest.Get("https://webhook.site/8e284497-5145-481d-8a18-0883dfd599e5"))
            using (UnityWebRequest www = UnityWebRequest.Get(getEventurl + prefill.events[i]))
            {



                www.SetRequestHeader("Authorization", "Bearer " + j.token);
                www.SetRequestHeader("Content-Type", "application/json");

                yield return www.SendWebRequest();
                if (www.isNetworkError || www.isHttpError)
                {
                    Debug.Log(www.responseCode);
                    Debug.Log(www.url);
                    Debug.Log(www.GetRequestHeader("Authorization"));
                    Debug.Log(www.GetRequestHeader("Content-Type"));
                    Debug.Log(www.error);
                    Debug.Log(www.downloadHandler.text);
                }
                else
                {
                    Debug.Log(www.responseCode);
                    byte[] results = www.downloadHandler.data;
                    jsonString = "";
                    jsonString = Encoding.UTF8.GetString(results);
                    Debug.Log(jsonString);
                    Event = JsonUtility.FromJson<Event>(jsonString);
                    GameObject newEvent = Instantiate(prefabEvent, container.transform);
                    Instantiate(dotPrefab, dotContainer.transform);
                    newEvent.GetComponent<EventInitializer>().GetEvent(Event,prefill.distances[i]);
                    newEvent.GetComponent<EventInitializer>().button.onClick.AddListener(() =>Details.GetComponent<Animator>().SetBool("Show",true));
                }
            };
        }
        //refresh here
        Loading.SetActive(false);
        scroll.Refresh();
    }
}
[System.Serializable]
public class prefill
{
    public int[] distances;
    public string[] events;
}
