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
    public Login l;

    public void GetmyProfile(string email,string password)
    {
        StartCoroutine(GetProfile(email,password));
    }
    

    IEnumerator GetProfile(string email, string password)
    {
        email = WWW.EscapeURL(email);
        password = WWW.EscapeURL(password);
        
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
                j.SetProfile(profile);
                if(l)
                    l.Continue();
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
    public void SetPicture()
    {
        Texture2D tex = new Texture2D(200, 200);
        byte[] img = System.Convert.FromBase64String(j.profile.photo);
        Debug.Log(img);
        tex.LoadImage(img, false);

        this.gameObject.GetComponent<RawImage>().texture = tex;
    }
}
