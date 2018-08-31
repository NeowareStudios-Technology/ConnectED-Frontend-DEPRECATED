﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Firebase;
using Firebase.Auth;
using UnityEngine.Networking;
using System.Text;
using UnityEngine.SceneManagement;

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
                if(www.responseCode == 500)
                {
                    PlayerPrefs.DeleteAll();
                    SceneManager.LoadScene(0);
                }
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
        }
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
            }
        }
        instantiateTeams(allTeams);
    }
    public GameObject teamsPage;

    public void instantiateTeams(Team[] teams)
    {
        for (int i = 0; i < teams.Length; i++){
            if(newTeamContainer == null || newTeamContainer.transform.childCount == 2){
                newTeamContainer = Instantiate(TeamContainer, SuggestedTeams.transform.GetChild(0));
            }
            if (newTeamContainer.transform.childCount < 2)
            {
                currentTeam = Instantiate(TeamPrefab, newTeamContainer.transform);
                currentTeam.GetComponent<teamInitializer>().setTeamButton(teams[i],teamsPage);
            }
        }
        if (newTeamContainer.transform.childCount == 1)
            Instantiate(EmptyTeam, newTeamContainer.transform);
        SuggestedTeams.GetComponent<ScrollSnapRect>().enabled = true;
        SuggestedTeams.GetComponent<ScrollSnapRect>().Refresh();
        getTopTeams();
    }

    private teamTopPrefill topPrefill;

    public void getTopTeams()
    {
        Debug.Log("Get top Teams");
        StartCoroutine(teamTopLister());
    }

    IEnumerator teamTopLister()
    {
        FirebaseAuth auth = Firebase.Auth.FirebaseAuth.DefaultInstance;
        FirebaseUser user = auth.CurrentUser;


        Debug.Log("Prefilling top Teams");
        //using (UnityWebRequest www = UnityWebRequest.Get("https://webhook.site/8e284497-5145-481d-8a18-0883dfd599e5"))
        using (UnityWebRequest www = UnityWebRequest.Get(teamURL + "top"))
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
                    Debug.Log("Trying again : get top prefill");
                    getTopTeams();
                }
            }
            else
            {
                Debug.Log(www.responseCode);
                byte[] results = www.downloadHandler.data;
                jsonString = "";
                jsonString = Encoding.UTF8.GetString(results);
                Debug.Log(jsonString);
                topPrefill = JsonUtility.FromJson<teamTopPrefill>(jsonString);

                StartCoroutine(TopPopulator());
            }
        }
    }

 
    IEnumerator TopPopulator()
    {
        FirebaseAuth auth = Firebase.Auth.FirebaseAuth.DefaultInstance;
        FirebaseUser user = auth.CurrentUser;
        Team[] allTopTeams = new Team[topPrefill.top_team_ids.Length];
        for (int i = 0; i < topPrefill.top_team_ids.Length; i++)
        {
            //using (UnityWebRequest www = UnityWebRequest.Get("https://webhook.site/8e284497-5145-481d-8a18-0883dfd599e5"))
            Debug.Log(topPrefill.top_team_names[i]);
            using (UnityWebRequest www = UnityWebRequest.Get(teamURL + topPrefill.top_team_ids[i]))
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
                    allTopTeams[i] = JsonUtility.FromJson<Team>(jsonString);

                }
            }
        }
        newTeamContainer = null;
        instantiateTopTeams(allTopTeams);
    }

    public void instantiateTopTeams(Team[] teams)
    {
        for (int i = 0; i < teams.Length; i++)
        {
            if (newTeamContainer == null || newTeamContainer.transform.childCount == 2)
            {
                newTeamContainer = Instantiate(TeamContainer, TopTeams.transform.GetChild(0));
            }
            if (newTeamContainer.transform.childCount < 2)
            {
                currentTeam = Instantiate(TeamPrefab, newTeamContainer.transform);
                currentTeam.GetComponent<teamInitializer>().setTeamButton(teams[i], teamsPage);
            }
        }
        if (newTeamContainer.transform.childCount == 1)
            Instantiate(EmptyTeam, newTeamContainer.transform);
        TopTeams.GetComponent<ScrollSnapRect>().enabled = true;
        TopTeams.GetComponent<ScrollSnapRect>().Refresh();
        gameObject.GetComponent<Image>().raycastTarget = true;
        gameObject.transform.GetChild(0).gameObject.SetActive(true);
        gameObject.GetComponent<Image>().color = Color.white;
        gameObject.SetActive(false);
    }

}
[System.Serializable]
public class teamPrefill
{
    public string[] team_ids;
    public string[] team_names;
}

[System.Serializable]
public class teamTopPrefill
{
    public string[] top_team_hours;
    public string[] top_team_ids;
    public string[] top_team_names;
}


