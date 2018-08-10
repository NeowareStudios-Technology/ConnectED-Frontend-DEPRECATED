using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Text;
using UnityEngine.Networking;
using System.IO;
using Firebase;
using Firebase.Auth;
using Firebase.Unity.Editor;

public class Login : MonoBehaviour {

    public Animator EventPanel;
    public InputField email;
    public InputField Password;
    public Jsonparser j;
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
        //firebase signin
        FirebaseAuth auth = Firebase.Auth.FirebaseAuth.DefaultInstance;
        auth.SignInWithEmailAndPasswordAsync(e, p).ContinueWith(task => {
            if (task.IsCanceled)
            {
                Debug.LogError("SignInWithEmailAndPasswordAsync was canceled.");
                return;
            }
            if (task.IsFaulted)
            {
                Debug.LogError("SignInWithEmailAndPasswordAsync encountered an error: " + task.Exception);
                return;
            }

            Firebase.Auth.FirebaseUser newUser = task.Result;
            Debug.LogFormat("User signed in successfully: {0} ({1})",
                newUser.DisplayName, newUser.UserId);
            j.UserID = newUser.UserId;
            GetToken(auth);
            //Debug.Log(newUser.TokenAsync(true).Result);
        });


       //o = new oauthToken();
       //string newO = JsonUtility.ToJson(o);
       //byte[] bodyRaw = Encoding.UTF8.GetBytes(newO);
       //string client = "https://connected-app.auth0.com/oauth/token";
       //UnityWebRequest wwww = UnityWebRequest.Post(client,newO);
       //wwww.SetRequestHeader("content-type", "application/json");
       //wwww.uploadHandler = (UploadHandler)new UploadHandlerRaw(bodyRaw);
       //wwww.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
       //StartCoroutine(Post(wwww));
	
        Debug.Log("Logging in: "+e + " " + p);

        
	
    }

    public void GetToken(FirebaseAuth auth){
        FirebaseUser user = auth.CurrentUser;

        user.TokenAsync(true).ContinueWith(task => {
            if (task.IsCanceled)
            {
                Debug.LogError("TokenAsync was canceled.");
                return;
            }

            if (task.IsFaulted)
            {
                Debug.LogError("TokenAsync encountered an error: " + task.Exception);
                return;
            }

            j.token = task.Result;
            Debug.Log(j.token);
            // Send token to your backend via HTTPS
            // ...
        });
    }


    //public string filelocation;
    //private IEnumerator Post(UnityWebRequest www)
    //{
    //    yield return www.SendWebRequest();
    //    Debug.Log(Encoding.UTF8.GetString(www.downloadHandler.data));
    //    Debug.Log("Status Code: " + www.responseCode);
    //    r = JsonUtility.FromJson<retrievedToken>(Encoding.UTF8.GetString(www.downloadHandler.data));
    //    Debug.Log(r.access_token);
    //    sendAccessToken(r.access_token);
    //}

    public void sendAccessToken(string t)
    {
        //auth0 login
        string email = WWW.EscapeURL("Chatham.alexander@gmail.com");
        string authorize = "https://fleet-fortress-211105.appspot.com/_ah/api/connected/v1/profiles/"+"?"+email;
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
