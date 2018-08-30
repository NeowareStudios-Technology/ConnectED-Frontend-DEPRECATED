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

public class TeamPageInit : MonoBehaviour {

    private Team team;
    public Text TeamName;
    public RawImage teamPhoto;
    public Text TeamDesc;
    public GameObject[] teamRoster;
    public int totalHours;
    public int totalOpportunities;
    public GameObject[] eventHistory;
    public Button Join;

    private string joinTeamURL = "https://connected-dev-214119.appspot.com/_ah/api/connected/v1/teams/";

    public void setTeamPage(Team t)
    {
        team = t;
        TeamName.text = t.t_name;
        TeamDesc.text = t.t_desc;
        totalHours = t.t_hours;
        Jsonparser j = GameObject.FindWithTag("Player").GetComponent<Jsonparser>();
        if (t.t_photo.Length > 300)
        {
            Texture2D tex = new Texture2D(200, 200);


            byte[] img = System.Convert.FromBase64String(t.t_photo);
            tex.LoadImage(img, false);

            teamPhoto.texture = tex;

        }

        Join.onClick.RemoveAllListeners();
        Join.onClick.AddListener(() => Register(t.t_orig_name + "/registration", j.token));

    }
    private IEnumerator coroutine;


    public void Register(string s, string t)
    {

        string newEvent = "";
        Debug.Log(newEvent);
        byte[] bodyRaw2 = Encoding.UTF8.GetBytes(newEvent);
        UnityWebRequest www2 = UnityWebRequest.Put(joinTeamURL + s, "");
        www2.SetRequestHeader("Authorization", "Bearer " + t);
        coroutine = Put(www2);
        StartCoroutine(coroutine);
    }

    private IEnumerator Put(UnityWebRequest www)
    {
        yield return www.SendWebRequest();

        Debug.Log("Status Code: " + www.responseCode);
        Debug.Log(www.error);
        Debug.Log(www.downloadHandler.text);
        Debug.Log(www.downloadHandler.data);
        Debug.Log(www.url);
        Debug.Log(www.GetRequestHeader("Authorization"));

    }
}
