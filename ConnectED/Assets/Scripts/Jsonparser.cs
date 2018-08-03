using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using UnityEditor;
using System.IO;
using System.Text;
using System;

public class Jsonparser : MonoBehaviour {

    public Text email; 
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


    private string path;
    private string jsonString;
    private string db = "https://fleet-fortress-211105.appspot.com/_ah/api/connected/v1/profiles";
    //Post
    private IEnumerator coroutine;

    private IEnumerator StartLocationService()
    {
        if (!Input.location.isEnabledByUser){
            Debug.Log("User has not enabled GPS");
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

    void Start() { StartCoroutine(StartLocationService()); }


	public void CreateProfile()
    {
        path = Application.streamingAssetsPath + "/Profile.json";
        jsonString = File.ReadAllText(path);
        profile = JsonUtility.FromJson<Profile>(jsonString);


        profile.first_name = firstname.text;
        profile.last_name = lastname.text;
        profile.email = WWW.EscapeURL(email.text);
        PlayerPrefs.SetString("email", email.text);
        profile.passwrd = password.text;
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
        string newProfile = JsonUtility.ToJson(profile);
        byte[] bodyRaw = Encoding.UTF8.GetBytes(newProfile);
        UnityWebRequest www = UnityWebRequest.Post(db, newProfile);
        www.uploadHandler = (UploadHandler)new UploadHandlerRaw(bodyRaw);
        www.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        www.SetRequestHeader("Content-Type", "application/json");
        coroutine = Post(www);
        StartCoroutine(coroutine);
    }


    private IEnumerator Post(UnityWebRequest www){
        yield return www.SendWebRequest();

        Debug.Log("Status Code: " + www.responseCode);
    }
	
}


[System.Serializable]
public class Profile
{
    public string first_name;
    public string last_name;
    public string email;
    public string passwrd;
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
    public string time_day;
    public string photo;
}
