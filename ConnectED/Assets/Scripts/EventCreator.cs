using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using System.Text;
using System;


public class EventCreator : MonoBehaviour
{
    
    public InputField title;
    public InputField description;
    public InputField date;
    public InputField startTime;
    public InputField endTime;
    public InputField city;
    public InputField State;
    public InputField Street;
    public InputField zipcode;
    public InputField NumberofVolunteers;
    public InputField LeaderOne;
    public InputField LeaderTwo;
    public InputField LeaderThree;
    public InputField TagOne;
    public InputField TagTwo;
    public InputField TagThree;
    public RawImage image;
    public bool isPrivate;
    public bool skillsRequired;
    public InputField SkillOne;
    public InputField SkillTwo;
    public InputField SkillThree;
    public bool indoor;
    public bool outdoor;
    public Jsonparser j;
    public returnPressedFields f;
	private IEnumerator coroutine;
    private string dbevents = "https://fleet-fortress-211105.appspot.com/_ah/api/connected/v1/events";


    public void initEvent()
    {
        Event e = new Event();
        if(NumberofVolunteers.text != "" || NumberofVolunteers.text !=null)
        e.capacity = int.Parse(NumberofVolunteers.text);
        e.city = city.text;
        e.date = new string[] { "2018-09-20" };
        e.day = new string[] { "mon", "tue", "wed" };
        e.e_desc = description.text;
        e.e_title = title.text;
        e.education = "";
        e.end = new string[] { "16:00"};
        e.env = "b";
        e.interests = f.returnFields();
        e.privacy = "o";
        e.qr = "";
        e.req_skills = new string[] { "" };
        e.start = new string[] { "14:00" };
        e.state = State.text;
        e.street = Street.text;
        e.zip_code = zipcode.text;

        if (image.color.a == 1)
        {
            RenderTexture tmp = RenderTexture.GetTemporary(image.texture.width, image.texture.height, 0, RenderTextureFormat.Default, RenderTextureReadWrite.Linear);
            Graphics.Blit(image.texture, tmp);
            RenderTexture previous = RenderTexture.active;
            RenderTexture.active = tmp;
            Texture2D myTexture2D = new Texture2D(image.texture.width, image.texture.height);
            myTexture2D.ReadPixels(new Rect(0, 0, tmp.width, tmp.height), 0, 0);
            myTexture2D.Apply();
            RenderTexture.active = previous;
            RenderTexture.ReleaseTemporary(tmp);
            //https://support.unity3d.com/hc/en-us/articles/206486626-How-can-I-get-pixels-from-unreadable-textures-
            e.e_photo = Convert.ToBase64String(myTexture2D.EncodeToJPG());
            //read in with texture2d.loadimage(bytedata);
        }

        string t = "Bearer " + j.token;
        string newEvent = JsonUtility.ToJson(e);
        byte[] bodyRaw2 = Encoding.UTF8.GetBytes(newEvent);
        UnityWebRequest www2 = UnityWebRequest.Post(dbevents, newEvent);
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
    }

}

[System.Serializable]
public class Event
{
    public int capacity;
    public string city;
    public string[] date;
    public string[] day;
    public string e_desc;
    public string e_photo;
    public string e_title;
    public string education;
    public string[] end;
    public string env;
    public string[] interests;
	public int num_attendees;
	public int num_pending_attendees;
    public string privacy;
    public string qr;
    public string[] req_skills;
    public string[] start;
    public string state;
    public string street;
    public string zip_code;
}