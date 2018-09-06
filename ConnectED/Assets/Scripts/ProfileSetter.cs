using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Firebase;
using Firebase.Auth;
using Firebase.Unity.Editor;
using UnityEngine.Networking;
using System.Text;
using System;

public class ProfileSetter : MonoBehaviour {

    public Jsonparser j;
    public getProfileinfo g;
    public RawImage p;
    public Text username;
    public Text Interest1;
    public Text Interest2;
    public Text Interest3;
    public Text hours;
    public Text Skill1;
    public Text Skill2;
    public Text Skill3;
    public Text Education;
    public Text totalHours;
    public Text totalOpportunities;
    public bool set = false;

    public void setProfile()
    {
        SetPicture();
        hours.text = j.profile.hours.ToString();
        username.text = j.profile.first_name + " " + j.profile.last_name;
        set = true;
        searchEvents();
        if (j.profile.interests == null)
        {
            Interest1.text = "None";
            Destroy(Interest2.gameObject);
            Destroy(Interest3.gameObject);
        }
        else
        {
            if (j.profile.interests.Length >= 3)
            {
                Interest1.text = j.profile.interests[0];
                Interest2.text = j.profile.interests[1];
                Interest3.text = j.profile.interests[2];
            }
            if (j.profile.interests.Length == 2)
            {
                Interest1.text = j.profile.interests[0];
                Interest2.text = j.profile.interests[1];
                Destroy(Interest3.gameObject);
            }
            if (j.profile.interests.Length == 1)
            {
                Interest1.text = j.profile.interests[0];
                Destroy(Interest2.gameObject);
                Destroy(Interest3.gameObject);
            }
        }
        if (j.profile.skills == null)
        {
            Skill1.text = "None";
            Destroy(Skill2.gameObject);
            Destroy(Skill3.gameObject);
        }
        else
        {
            if (j.profile.skills.Length >= 3)
            {
                Skill1.text = j.profile.skills[0];
                Skill2.text = j.profile.skills[1];
                Skill3.text = j.profile.skills[2];
            }
            if (j.profile.skills.Length == 2)
            {
                Skill1.text = j.profile.skills[0];
                Skill2.text = j.profile.skills[1];
                Destroy(Skill3.gameObject);
            }
            if (j.profile.skills.Length == 1)
            {
                Skill1.text = j.profile.interests[0];
                Destroy(Skill2.gameObject);
                Destroy(Skill3.gameObject);
            }
        }
            if (j.profile.education != "" && j.profile.education != null)
            {
                Education.text = j.profile.education;
            } 
        else
        {
            Education.text = "Not Specified";
        }

    }
    public void SetPicture()
    {
        Texture2D tex = new Texture2D(400, 400);
        if (j.profile.photo != null && j.profile.photo.Length > 300)
        {
            byte[] img = System.Convert.FromBase64String(j.profile.photo);
            tex.LoadImage(img, false);

            p.texture = tex;
        }
    }

    private string jsonString;
    private string searchURL = "https://connected-dev-214119.appspot.com/_ah/api/connected/v1/profiles/";
    public void searchEvents()
    {
        searchURL += j.profile.email + "/events";

        UnityWebRequest www2 = UnityWebRequest.Get(searchURL);
        www2.SetRequestHeader("Authorization", "Bearer " + j.token);

        StartCoroutine(eventPut(www2));
    }
    private EventSearch eSearch;
    private IEnumerator eventPut(UnityWebRequest www)
    {
        yield return www.SendWebRequest();

        Debug.Log("Status Code: " + www.responseCode);
        Debug.Log(www.error);
        Debug.Log(www.downloadHandler.text);
        Debug.Log(www.downloadHandler.data);
        Debug.Log(www.url);
        Debug.Log(www.GetRequestHeader("Authorization"));
        if (www.responseCode == 200)
        {
            byte[] results = www.downloadHandler.data;
            jsonString = "";
            jsonString = Encoding.UTF8.GetString(results);
            Debug.Log(jsonString);
            eSearch = JsonUtility.FromJson<EventSearch>(jsonString);
            if (jsonString != "{}")
            {
                eventPopulator();
            }
            gameObject.SetActive(false);
        }
    }

    public GameObject ProfileCreatedEventContainer;
    public GameObject ProfileHistoryEventContainer;
    public GameObject TeamEventPrefab;
    public void eventPopulator()
    {
        GameObject newEvent;
        int childKillCount = ProfileHistoryEventContainer.transform.childCount;
        for (int i = childKillCount - 1; i >= 0; i--)
        {
            Destroy(ProfileHistoryEventContainer.transform.GetChild(i).gameObject);
        }
        childKillCount = ProfileCreatedEventContainer.transform.childCount;
        for (int i = childKillCount - 1; i >= 0; i--)
        {
            Destroy(ProfileCreatedEventContainer.transform.GetChild(i).gameObject);
        }
        for (int i = 0; i < eSearch.event_ids.Length; i++)
        {
            Debug.Log(eSearch.event_ids[i]);
            //newEvent = Instantiate(TeamEventPrefab, ProfileCreatedEventContainer.transform);
        }

		


        //if (childKillCount > 7)
        //{
        //    TeamEventHistoryContainer.AddComponent<ContentSizeFitter>();
        //    TeamEventHistoryContainer.GetComponent<ContentSizeFitter>().verticalFit = ContentSizeFitter.FitMode.PreferredSize;
        //}
    }




}

[System.Serializable]
public class profileHistory{
    public string[] completed_events;
    public string[] created_events;
    public string[] registered_events;
}