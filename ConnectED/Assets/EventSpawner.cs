using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EventSpawner : MonoBehaviour {

    public GameObject container;
    public GameObject prefabEvent;
    public GameObject dotPrefab;
    public string prefillurl = "https://fleet-fortress-211105.appspot.com/_ah/api/connected/v1/events/prefill";
	// Use this for initialization
	void Start () {
        populateEvents();
	}

    public void populateEvents()
    {
        
    }
	
}
[System.Serializable]
public class prefill
{
    public int[] distances;
    public string[] events;
}
