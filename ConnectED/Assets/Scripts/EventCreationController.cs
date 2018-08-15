using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EventCreationController : MonoBehaviour {

    public GameObject Fields;
    public GameObject EventSetup;
    public GameObject LeadersAndTags;
    public GameObject EventSettings;
    public GameObject EventSubmission;
    public EventCreator evcr;
    public void Next()
    {
        

        if (EventSetup.activeSelf)
        {
            EventSetup.SetActive(false);
            LeadersAndTags.SetActive(true);
            return;
        }
        if (LeadersAndTags.activeSelf)
        {
            LeadersAndTags.SetActive(false);
            EventSettings.SetActive(true);
            return;
        }
        if (EventSettings.activeSelf)
        {
            EventSettings.SetActive(false);
            EventSubmission.SetActive(true);
            evcr.initEvent();
            return;
        }
    }

    public void GetFields(){
        Fields.SetActive(true);
    }

    public void Back()
    {
        if (EventSetup.activeSelf)
        {
            EventSetup.SetActive(false);
            Fields.SetActive(true);
            return;
        }
        if (LeadersAndTags.activeSelf)
        {
            LeadersAndTags.SetActive(false);
            EventSetup.SetActive(true);
            return;
        }
        if (EventSettings.activeSelf)
        {
            EventSettings.SetActive(false);
            LeadersAndTags.SetActive(true);
            return;
        }
        if (EventSubmission.activeSelf)
        {
			EventSubmission.SetActive(false);
            EventSettings.SetActive(true);
            return;
        }
    }
    public void setNew()
    {
        Fields.SetActive(false);
        EventSetup.SetActive(true);
        LeadersAndTags.SetActive(false);
        EventSettings.SetActive(false);
        EventSubmission.SetActive(false);
    }
}
