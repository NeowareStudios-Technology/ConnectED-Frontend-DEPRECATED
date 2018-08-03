using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class getProfileinfo : MonoBehaviour {

    public Profile profile;
    public Profile otherProfile;
    public string jsonString;
    private Coroutine getOtherProfile;
    public Jsonparser j;

    public void GetmyProfile()
    {
        StartCoroutine("GetProfile");
    }
    public void SetPicture()
    {
        Texture2D tex = null;
        tex.LoadImage(System.Convert.FromBase64String(j.profile.photo));
           
        this.gameObject.GetComponent<RawImage>().texture = tex;
    }

    IEnumerator GetProfile()
    {
        string email = PlayerPrefs.GetString("email");
        string password = PlayerPrefs.GetString("password");
    
        
            password = "a";
            email = WWW.EscapeURL("Alex@email.com");
        
        using (UnityWebRequest www = UnityWebRequest.Get("https://fleet-fortress-211105.appspot.com/_ah/api/connected/v1/profiles/" + email + "?passwrd=" + password + "&email=" + email))
        {
            yield return www.SendWebRequest();
            if (www.isNetworkError || www.isHttpError)
            {
                Debug.Log(www.error);
            }
            else
            {
                Debug.Log(www.downloadHandler.text);

                byte[] results = www.downloadHandler.data;
                jsonString = "";
                jsonString = System.Convert.ToString(results);
                profile = JsonUtility.FromJson<Profile>(jsonString);
                j.profile = profile;
                Debug.Log(profile);
            }
        };
    }


    IEnumerator GetOtherProfile(string other)
    {
        string email = PlayerPrefs.GetString("email");
        string password = PlayerPrefs.GetString("password");

        using (UnityWebRequest www = UnityWebRequest.Get("https://fleet-fortress-211105.appspot.com/_ah/api/connected/v1/profiles/" + "&email_to_get=" + other + "?passwrd=" + password + "&email=" + email))
        {
            yield return www.SendWebRequest();
            if (www.isNetworkError || www.isHttpError)
            {
                Debug.Log(www.error);
            }
            else
            {
                Debug.Log(www.downloadHandler.text);

                byte[] results = www.downloadHandler.data;
                jsonString = "";
                jsonString = System.Convert.ToString(results);
                otherProfile = JsonUtility.FromJson<Profile>(jsonString);
            }
        };
    }
}
