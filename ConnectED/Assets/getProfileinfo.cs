using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using System.Text;

public class getProfileinfo : MonoBehaviour {

    private Profile profile;
    public Profile otherProfile;
    private string jsonString;
    private Coroutine getOtherProfile;
    public Jsonparser j;

    public void GetmyProfile()
    {
        StartCoroutine("GetProfile");
    }
    public void SetPicture()
    {
        Texture2D tex = null;
        tex.LoadRawTextureData(System.Convert.FromBase64String(profile.photo));
           
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
                Debug.Log(www.downloadHandler.text);
            }
            else
            {
                Debug.Log(www.responseCode);
                byte[] results = www.downloadHandler.data;
                jsonString = "";
                jsonString = Encoding.UTF8.GetString(results);
                profile = JsonUtility.FromJson<Profile>(jsonString);
                Debug.Log(jsonString);
                //j.profile = profile;
                //j.profile.photo = profile.photo;
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
