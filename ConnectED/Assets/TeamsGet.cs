﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Firebase;
using Firebase.Auth;
using UnityEngine.Networking;
using System.Text;

public class TeamsGet : MonoBehaviour {

    public GameObject SuggestedTeams;
    public GameObject TopTeams;
    public GameObject TeamPrefab;
    public GameObject currentTeam;
    public GameObject TeamContainer;
    public GameObject newTeamContainer;
    public GameObject EmptyTeam;
    public Jsonparser j;
    int retry = 0;
    private string jsonString;
    teamPrefill prefill;
    private string teamURL = "https://connected-dev-214119.appspot.com/_ah/api/connected/v1/teams/";

    public void getTeams()
    {
        Debug.Log("GetTeams");
        StartCoroutine(teamLister());
    }

    IEnumerator teamLister()
    {
        FirebaseAuth auth = Firebase.Auth.FirebaseAuth.DefaultInstance;
        FirebaseUser user = auth.CurrentUser;


        Debug.Log("Prefilling Teams");
        //using (UnityWebRequest www = UnityWebRequest.Get("https://webhook.site/8e284497-5145-481d-8a18-0883dfd599e5"))
        using (UnityWebRequest www = UnityWebRequest.Get(teamURL + "suggested"))
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
                if (www.responseCode.ToString() == "503" & retry < 3)
                {
                    Debug.Log("Trying again : get prefill");
                    getTeams();
                }
            }
            else
            {
                Debug.Log(www.responseCode);
                byte[] results = www.downloadHandler.data;
                jsonString = "";
                jsonString = Encoding.UTF8.GetString(results);
                Debug.Log(jsonString);
                prefill = JsonUtility.FromJson<teamPrefill>(jsonString);

                StartCoroutine(Populator());
            }
        };
    }

    IEnumerator Populator()
    {
        FirebaseAuth auth = Firebase.Auth.FirebaseAuth.DefaultInstance;
        FirebaseUser user = auth.CurrentUser;
        Team[] allTeams = new Team[prefill.team_ids.Length];
        for (int i = 0; i < prefill.team_ids.Length; i++)
        {
            //using (UnityWebRequest www = UnityWebRequest.Get("https://webhook.site/8e284497-5145-481d-8a18-0883dfd599e5"))
            Debug.Log(prefill.team_names[i]);
            using (UnityWebRequest www = UnityWebRequest.Get(teamURL + prefill.team_ids[i]))
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
                    allTeams[i] = JsonUtility.FromJson<Team>(jsonString);

                    }
            };
        }
        instantiateTeams(allTeams);
    }

    public void instantiateTeams(Team[] teams)
    {
        for (int i = 0; i < teams.Length; i++){
            
        }
    }

}
[System.Serializable]
public class teamPrefill
{
    public string[] team_ids;
    public string[] team_names;
}



