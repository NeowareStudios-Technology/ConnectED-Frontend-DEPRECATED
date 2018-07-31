using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using System.IO;
using System.Text;

public class Jsonparser : MonoBehaviour {

    public Text email; 
    public Text password;
    public Text firstname;
    public Text lastname;
    public Text education;
    public string[] interests;
    public string[] skills;
    public float lat;
    public float lon;
    public GameObject mon;
    public GameObject tue;
    public GameObject wed;
    public GameObject thu;
    public GameObject fri;
    public GameObject sat;
    public GameObject sun;
    public timeOfDay timeDay;


    private string path;
    private string jsonString;
    private string db = "https://fleet-fortress-211105.appspot.com/_ah/api/connected/v1/profiles";
    //Post
    private IEnumerator coroutine;

	public void Start()
	{
        StartCoroutine(StartLocationService());
	}

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
	public void CreateProfile()
    {
        path = Application.streamingAssetsPath + "/Profile.json";
        jsonString = File.ReadAllText(path);
        Profile profile = JsonUtility.FromJson<Profile>(jsonString);
        Debug.Log(profile.first_name);
        profile.first_name = firstname.text;
        profile.last_name = lastname.text;
        profile.email = email.text;
        profile.passwrd = password.text;
        profile.time_day = timeDay.setTime();
        profile.mon = mon.GetComponent<spriteSwitcher>().pressed;
        profile.tue = tue.GetComponent<spriteSwitcher>().pressed;
        profile.wed = wed.GetComponent<spriteSwitcher>().pressed;
        profile.thu = thu.GetComponent<spriteSwitcher>().pressed;
        profile.fri = fri.GetComponent<spriteSwitcher>().pressed;
        profile.sat = sat.GetComponent<spriteSwitcher>().pressed;
        profile.sun = sun.GetComponent<spriteSwitcher>().pressed;
        profile.lat = lat;
        profile.lon = lon;
        string newProfile = JsonUtility.ToJson(profile);
        Debug.Log(newProfile);
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
}
