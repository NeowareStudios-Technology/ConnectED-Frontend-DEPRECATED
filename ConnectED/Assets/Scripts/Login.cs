using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Text;
using UnityEngine.Networking;
using System.IO;

public class Login : MonoBehaviour {

    public Animator EventPanel;
    public InputField email;
    public InputField Password;
    public getProfileinfo g;
    public Jsonparser j;
    public oauthToken o;
    public retrievedToken r;
    public void StartLoginProcess()
    {
            string e = email.text;
            string p = Password.text;

        if (PlayerPrefs.GetString("email", "email") != "email" && PlayerPrefs.GetString("password", "password") != "password")
        {
            e = PlayerPrefs.GetString("email", "email");
            p = PlayerPrefs.GetString("password", "password");
        }
        else
        {

        PlayerPrefs.SetString("email", email.text);
        PlayerPrefs.SetString("password", Password.text);

        }
        o = new oauthToken();
        o.client_id = "jW2cYQtmtOwLNUHFpg9BzVSvCRfezOai";
        o.audience = "https://connected-app.auth0.com/api/v2/";
        o.client_secret = "kRkKuP3sIibpH0ct286Z2VKF222-1Bpq3Ssv1ccc8Tp-g_lwEFz3WnoInPFcS6Sy";
        o.grant_type = "password";
        o.username = e;
        o.password = p;
        string newO = JsonUtility.ToJson(o);
        byte[] bodyRaw = Encoding.UTF8.GetBytes(newO);
        string client = "https://connected-app.auth0.com/oauth/token";
        UnityWebRequest wwww = UnityWebRequest.Post(client,newO);
        wwww.SetRequestHeader("content-type", "application/json");
        wwww.uploadHandler = (UploadHandler)new UploadHandlerRaw(bodyRaw);
        wwww.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        StartCoroutine(Post(wwww));

        Debug.Log("Logging in: "+e + " " + p);


       

        //if (!j.profileSet)
            //g.GetmyProfile(e, p);
        

    }


    public class oauthToken
    {
        public string client_id;
        public string client_secret;
        public string audience;
        public string grant_type;
        public string username;
        public string password;
    }
    public class retrievedToken
    {
        public string access_token;
        public string token_type;
    }

    public string filelocation;
    private IEnumerator Post(UnityWebRequest www)
    {
        yield return www.SendWebRequest();
        Debug.Log(Encoding.UTF8.GetString(www.downloadHandler.data));
        Debug.Log("Status Code: " + www.responseCode);
        r = JsonUtility.FromJson<retrievedToken>(Encoding.UTF8.GetString(www.downloadHandler.data));
        Debug.Log(r.access_token);
        sendAccessToken(r.access_token);
    }

    public void sendAccessToken(string t)
    {
        //auth0 login
        string email = WWW.EscapeURL("Chatham.alexander@gmail.com");
        string authorize = "https://fleet-fortress-211105.appspot.com/_ah/api/connected/v1/profiles/"+email;
        UnityWebRequest www = UnityWebRequest.Get(authorize);
        www.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        www.SetRequestHeader("authorization", "Bearer " + t);
        www.SetRequestHeader("content-type", "application/json");
        StartCoroutine(AccessPost(www));
    }

    private IEnumerator AccessPost(UnityWebRequest www)
    {
        yield return www.SendWebRequest();
        Debug.Log(www.downloadHandler.text);
        Debug.Log("Status Code: " + www.responseCode);
    }
    public void Continue()
    {
        if (j.profileSet)
            EventPanel.enabled = true;
    }
}
