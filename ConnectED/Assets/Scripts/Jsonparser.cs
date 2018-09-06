﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using UnityEditor;
using System.IO;
using System.Text;
using System;
using Firebase;
using Firebase.Auth;
using Firebase.Unity.Editor;

public class Jsonparser : MonoBehaviour {

    public Text email;
    public string UserID;
    public string token;
    public InputField password;
    public Text firstname;
    public Text lastname;
    public float lat = 0;
    public float lon = 0;
    public GameObject mon;
    public GameObject tue;
    public GameObject wed;
    public GameObject thu;
    public GameObject fri;
    public GameObject sat;
    public GameObject sun;
    public timeOfDay timeDay;
    public returnPressed education;
    public returnPressedFields interests;
    public returnPressedFields skills;
    public RawImage profilePic;
    public Profile profile;
    protected Firebase.Auth.FirebaseAuth auth;
    protected Firebase.Auth.FirebaseAuth otherAuth;
    public bool profileSet = false;
    public Animator a;
    public Login l;
    public ProfileSetter setter;
    public GameObject alreadyin;
    private string path;
    private string jsonString;
    private string dbprofiles = "https://connected-dev-214119.appspot.com/_ah/api/connected/v1/profiles";
    //Post
    private IEnumerator coroutine;

    private IEnumerator StartLocationService()
    {
        if (!Input.location.isEnabledByUser){
 
            yield break;
        }

        Input.location.Start();
        int maxWait = 20;
        while(Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSeconds(1);
            maxWait--;
        }
        if(maxWait <= 0){
            Debug.Log("Timed out");
            yield break;
        }

        if(Input.location.status == LocationServiceStatus.Failed)
        {
            Debug.Log("Unable to determine device location");
            yield break;
        }

        lat = Input.location.lastData.latitude;
        lon = Input.location.lastData.longitude;
        Debug.Log("lat: " + lat + " lon: " + lon);

        yield break;
    }
    // Use this for initialization

    void Start() {


        System.DateTime DateTime = new DateTime(2018, 8, 24);
        Debug.Log(DateTime.DayOfWeek);
        //firebase init
        Firebase.FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task =>
        {
            var dependencyStatus = task.Result;
            if (dependencyStatus == Firebase.DependencyStatus.Available)
            {
                Debug.Log("Firebase OK!");
            }
            else
            {
                UnityEngine.Debug.LogError(System.String.Format(
                  "Could not resolve all Firebase dependencies: {0}", dependencyStatus));
                // Firebase Unity SDK is not safe to use here.
            }
        });
        FirebaseApp.DefaultInstance.SetEditorDatabaseUrl("https://connected-dev-214119.firebaseio.com/");
        auth = Firebase.Auth.FirebaseAuth.DefaultInstance;

        StartCoroutine(StartLocationService());
        if (PlayerPrefs.GetString("email", "email") != "email" && PlayerPrefs.GetString("password", "password") != "password")
        {
            alreadyin.SetActive(true);
            l.StartLoginProcess();
        }
    }

	public void CreateProfile()
    {
        
        auth.CreateUserWithEmailAndPasswordAsync(email.text, password.text).ContinueWith(task => {
            if (task.IsCanceled)
            {
                Debug.LogError("CreateUserWithEmailAndPasswordAsync was canceled.");
                return;
            }
            if (task.IsFaulted)
            {
                Debug.LogError("CreateUserWithEmailAndPasswordAsync encountered an error: " + task.Exception);
                return;
            }
        
            // Firebase user has been created.
            Firebase.Auth.FirebaseUser newUser = task.Result;
            Debug.LogFormat("Firebase user created successfully: {0} ({1})",
                newUser.DisplayName, newUser.UserId);
            UserID = newUser.UserId;
            l.GetInitialToken(auth);
        });


        //create a profile

    }

    public void SignUp()
    {
        path = Application.streamingAssetsPath + "/Profile.json";
        jsonString = File.ReadAllText(path);
        profile = JsonUtility.FromJson<Profile>(jsonString);


        profile.first_name = firstname.text;
        profile.last_name = lastname.text;
        profile.email = email.text;
        PlayerPrefs.SetString("email", email.text);
        PlayerPrefs.SetString("password", password.text);
        profile.time_day = timeDay.setTime();
        profile.education = education.Check();
        profile.interests = interests.returnFields();
        profile.skills = skills.returnFields();
        profile.mon = mon.GetComponent<spriteSwitcher>().pressed;
        profile.tue = tue.GetComponent<spriteSwitcher>().pressed;
        profile.wed = wed.GetComponent<spriteSwitcher>().pressed;
        profile.thu = thu.GetComponent<spriteSwitcher>().pressed;
        profile.fri = fri.GetComponent<spriteSwitcher>().pressed;
        profile.sat = sat.GetComponent<spriteSwitcher>().pressed;
        profile.sun = sun.GetComponent<spriteSwitcher>().pressed;
        profile.lat = lat;
        profile.lon = lon;

        if (profilePic.color.a == 1)
        {
            RenderTexture tmp = RenderTexture.GetTemporary(profilePic.texture.width, profilePic.texture.height, 0, RenderTextureFormat.Default, RenderTextureReadWrite.Linear);
            Graphics.Blit(profilePic.texture, tmp);
            RenderTexture previous = RenderTexture.active;
            RenderTexture.active = tmp;
            Texture2D myTexture2D = new Texture2D(profilePic.texture.width, profilePic.texture.height);
            myTexture2D.ReadPixels(new Rect(0, 0, tmp.width, tmp.height), 0, 0);
            myTexture2D.Apply();
            RenderTexture.active = previous;
            RenderTexture.ReleaseTemporary(tmp);
            //https://support.unity3d.com/hc/en-us/articles/206486626-How-can-I-get-pixels-from-unreadable-textures-
            profile.photo = Convert.ToBase64String(myTexture2D.EncodeToJPG());
            Debug.Log(profile.photo);
            //read in with texture2d.loadimage(bytedata);
        }

        string t = "Bearer " + token;

        string ourProfile = JsonUtility.ToJson(profile);
        byte[] bodyRaw2 = Encoding.UTF8.GetBytes(ourProfile);
        UnityWebRequest www2 = UnityWebRequest.Post(dbprofiles, ourProfile);
        www2.uploadHandler = (UploadHandler)new UploadHandlerRaw(bodyRaw2);
        www2.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        www2.SetRequestHeader("Authorization", t);
        www2.SetRequestHeader("Content-Type", "application/json");
        coroutine = Post(www2);
        StartCoroutine(coroutine);
    }


    private IEnumerator Post(UnityWebRequest www){
        yield return www.SendWebRequest();

        Debug.Log("Status Code: " + www.responseCode);
        Debug.Log(www.error);
        Debug.Log(www.uploadHandler.data);
        Debug.Log(www.downloadHandler.data);
        Debug.Log(www.GetRequestHeader("Authorization"));
        if(www.error == null)
        {
            l.StartLoginProcess();
        }
    }
    public EventSpawner eventSpawner;
    public void SetProfile(Profile p)
    {
        profile = p;
        setter.setProfile();
        profileSet = true;
        eventSpawner.populateEvents();

    }

    public void setExploreTile(GameObject o)
    {
        exploreTile = o;
    }

    //functions to help the Detail changer
    public GameObject exploreTile;
    public void changeExploreRegisterStatus(int i)
    {
        exploreTile.GetComponent<EventInitializer>().setRegistration(i);
    }
}


[System.Serializable]
public class Profile
{
    public string first_name;
    public string last_name;
    public float hours;
    public string email;
    public string env_pref;
    public string education;
    public string[] interests;
    public string[] skills;
    public float lat;
    public float lon;
    public bool mon;
    public bool tue;
    public bool wed;
    public bool thu;
    public bool fri;
    public bool sat;
    public bool sun;
    public int search_rad;
    public string time_day;
    public string photo;
}


