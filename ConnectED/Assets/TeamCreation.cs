using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.Text;
using UnityEngine.Networking;
public class TeamCreation : MonoBehaviour {

    public RawImage image;
    public InputField TeamName;
    public InputField TeamDesc;
    public bool expire;
    public bool priv;
    public InputField leader1;
    public InputField leader2;
    public InputField leader3;
    private Team team;
    private IEnumerator coroutine;
    public Jsonparser j;
    public string dbteams ="https://fleet-fortress-211105.appspot.com/_ah/api/connected/v1/teams";
	// Use this for initialization
    public void makeTeam()
    {
        team = new Team();
        team.t_desc = TeamDesc.text;
        team.t_name = TeamName.text;
        team.t_privacy = "o";

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
            team.t_photo = Convert.ToBase64String(myTexture2D.EncodeToJPG());
            //read in with texture2d.loadimage(bytedata);
        }

        string t = "Bearer " + j.token;
        string newEvent = JsonUtility.ToJson(team);
        byte[] bodyRaw2 = Encoding.UTF8.GetBytes(newEvent);
        UnityWebRequest www2 = UnityWebRequest.Post(dbteams, newEvent);
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
        if (www.responseCode.ToString() == "503")
        {
            Debug.Log("try again :maketeam");
        }

    }
}

[System.Serializable]
public class Team
{
    public int t_capacity;
    public string t_desc;
    public string t_name;
    public string t_photo;
    public string t_privacy;
}