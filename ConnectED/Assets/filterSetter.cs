using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.Text;
using System.IO;
using UnityEngine.Networking;
using Firebase;
using Firebase.Auth;
using Firebase.Unity.Editor;
using UnityEngine.SceneManagement;

public class filterSetter : MonoBehaviour {

    public Slider distance;
    public int dist = 100;
    public string env = "b";
    public string dbProfilePut = "https://connected-dev-214119.appspot.com/_ah/api/connected/v1/profiles";
    public Jsonparser j;
    private Profile profile;
    public void setEnv(int i){
        if(i == 0){
            env = "i";
        }
        if(i == 1){
            env = "o";
        }
        if(i == 2){
            env = "b";
        }
    }

    public void setDist(){
        dist = (int)distance.value;
    }
    private IEnumerator coroutine;
    public void editProfile()
    {
        profile = new Profile();

        profile.search_rad = dist;
        profile.env_pref = env;
        string t = "Bearer " + j.token;

        string ourProfile = JsonUtility.ToJson(profile);
        byte[] bodyRaw2 = Encoding.UTF8.GetBytes(ourProfile);
        UnityWebRequest www2 = UnityWebRequest.Put(dbProfilePut, ourProfile);
        www2.uploadHandler = (UploadHandler)new UploadHandlerRaw(bodyRaw2);
        www2.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        www2.SetRequestHeader("Authorization", t);
        www2.SetRequestHeader("Content-Type", "application/json");
        coroutine = Post(www2);
        StartCoroutine(coroutine);
    }


    private IEnumerator Post(UnityWebRequest www)
    {
        yield return www.SendWebRequest();

        Debug.Log("Status Code: " + www.responseCode);
        Debug.Log(www.error);
        Debug.Log(www.uploadHandler.data);
        Debug.Log(www.downloadHandler.data);
        Debug.Log(www.GetRequestHeader("Authorization"));
        if (www.responseCode.ToString() == "200")
        {

            SceneManager.LoadScene(0);
            //if (EmailCheck && Email.text != j.profile.email)
            //    changeEmail();
        }
    }
}
