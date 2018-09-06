using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using System.Text;
using Firebase;
using Firebase.Auth;
using Firebase.Unity.Editor;

public class notificationQueuer : MonoBehaviour {

    public string pendingName;
    public string eventName;
    public GameObject notificationPanel;
    public Text notificationText;
    public bool SettingDBa = false;
    public bool SettingDBd = false;
    public RawImage notificationImage;
    public int i = 0;
    public int x = 0;
    public List<Event> events;
    public GameObject loading;
    public Profile profile;
    public Jsonparser j;
    private bool gettingProf = false;
	public approveList approve;
    public approveList deny;
    public void queueNotifications(Event e){
        events.Add(e);
    }

    public void setNotification()
    {


        if (gettingProf)
            return;
        if (i < events.Count)
        {
            if (events[i].privacy == "p")
            {
                if (events[i].num_pending_attendees != 0)
                {
                    if (x < events[i].num_pending_attendees)
                    {
                        notificationPanel.SetActive(true);
                        GetmyProfile(i, x);

                    }
                }
                if (events[i].num_pending_attendees == 0)
                {
                    i++;
                    setNotification();
                }
            }
            else
            {
                Debug.Log("open event");
                i++;
                setNotification();
            }
        }
        else
        {
            if (!SettingDBa && !SettingDBd)
            {
                Debug.Log("no more notifications");
                this.gameObject.SetActive(false);
            }
        }
    }

    public void GetmyProfile(int i1, int x1)
    {
        loading.SetActive(true);
        gettingProf = true;
        StartCoroutine(GetProfile(i1,x1));
    }

    public string jsonString;

    IEnumerator GetProfile(int i1, int x1)
    {
        FirebaseAuth auth = Firebase.Auth.FirebaseAuth.DefaultInstance;
        FirebaseUser user = auth.CurrentUser;


        Debug.Log("Getting profile with " + events[i1].pending_attendees[x1]);
        //using (UnityWebRequest www = UnityWebRequest.Get("https://webhook.site/8e284497-5145-481d-8a18-0883dfd599e5"))
        using (UnityWebRequest www = UnityWebRequest.Get("https://connected-dev-214119.appspot.com/_ah/api/connected/v1/profiles/" + events[i1].pending_attendees[x1].ToLower()))
        {



            www.SetRequestHeader("Authorization", "Bearer " + j.token);
            www.SetRequestHeader("Content-Type", "application/json");

            yield return www.SendWebRequest();
            if (www.isNetworkError || www.isHttpError)
            {
                Debug.Log(www.responseCode);
                Debug.Log(www.url);
                Debug.Log(www.GetRequestHeader("Authorization"));
                Debug.Log(www.GetRequestHeader("Content-Type"));
                Debug.Log(www.error);
                Debug.Log(www.downloadHandler.text);
            }
            else
            {
                Debug.Log(www.responseCode);
                byte[] results = www.downloadHandler.data;
                jsonString = "";
                jsonString = Encoding.UTF8.GetString(results);
                Debug.Log(jsonString);
                profile = JsonUtility.FromJson<Profile>(jsonString);
                loading.SetActive(false);
                initializeNotification(i1);
                notificationPanel.SetActive(true);
            }
        };
    }

    public void initializeNotification(int i1)
    {
        notificationText.text = "Would you like to allow " + profile.first_name + " " + profile.last_name + " to come to your private event " + events[i1].e_title + "?";
        Texture2D tex = new Texture2D(200, 200);
        byte[] img = System.Convert.FromBase64String(profile.photo);
        Debug.Log(img);
        tex.LoadImage(img, false);
        notificationImage.texture = tex;
        gettingProf = false;
    }

    public int pendingIndex = 0;
    public void accept()
    {   
        if (approve.approve_list.Length != events[i].pending_attendees.Length)
            approve.approve_list = new string[events[i].pending_attendees.Length];
        approve.approve_list[x] = events[i].pending_attendees[x];
        Debug.Log(events[i].pending_attendees[x]);
        if (x < events[i].pending_attendees.Length - 1)
        {
            Debug.Log("Adding " + profile.email);
            x++;
            setNotification();
        }
        else
        {
            if (approve.approve_list.Length != 0 || approve.approve_list == null)
                StartCoroutine(acceptProfile());
            if (deny.approve_list.Length != 0 || deny.approve_list == null)
                StartCoroutine(denyProfile());
        }
        
    }

    public void denial()
    {
        if (deny.approve_list.Length != events[i].pending_attendees.Length)
            deny.approve_list = new string[events[i].pending_attendees.Length];
        deny.approve_list[x] = events[i].pending_attendees[x];
        Debug.Log(events[i].pending_attendees[x]);
        if (x < events[i].pending_attendees.Length - 1)
        {
            Debug.Log("Denying " + profile.email);
            x++;
            setNotification();
        }
        else
        {
            if(approve.approve_list.Length != 0 || approve.approve_list == null)
                StartCoroutine(acceptProfile());
            if(deny.approve_list.Length != 0 || deny.approve_list == null)
                StartCoroutine(denyProfile());
        }
    }

    IEnumerator acceptProfile()
    {
        loading.SetActive(true);
        SettingDBa = true;
        FirebaseAuth auth = Firebase.Auth.FirebaseAuth.DefaultInstance;
        FirebaseUser user = auth.CurrentUser;
        string newApprove = JsonUtility.ToJson(approve);
        Debug.Log(approve.approve_list[0]);
        Debug.Log(newApprove);
        byte[] bodyRaw = Encoding.UTF8.GetBytes(newApprove);
        Debug.Log("Accepting profile with for "+events[i].e_title );
        //using (UnityWebRequest www = UnityWebRequest.Get("https://webhook.site/8e284497-5145-481d-8a18-0883dfd599e5"))
        using (UnityWebRequest www = UnityWebRequest.Put("https://connected-dev-214119.appspot.com/_ah/api/connected/v1/events/" + PlayerPrefs.GetString("email", "email").ToLower() +"/"+ events[i].e_orig_title +"/approve", bodyRaw))
        {



            www.uploadHandler = (UploadHandler)new UploadHandlerRaw(bodyRaw);
            www.SetRequestHeader("Authorization", "Bearer " + j.token);
            www.SetRequestHeader("Content-Type", "application/json");

            yield return www.SendWebRequest();
            if (www.isNetworkError || www.isHttpError)
            {
                Debug.Log(www.responseCode);
                Debug.Log(www.url);
                Debug.Log(www.GetRequestHeader("Authorization"));
                Debug.Log(www.GetRequestHeader("Content-Type"));
                Debug.Log(www.error);
                Debug.Log(www.downloadHandler.text);
            }
            i++;
            x = 0;
            SettingDBa = false;
            setNotification();
            loading.SetActive(false);
        };
    }

    IEnumerator denyProfile()
    {

        loading.SetActive(true);
        SettingDBd = true;
        FirebaseAuth auth = Firebase.Auth.FirebaseAuth.DefaultInstance;
        FirebaseUser user = auth.CurrentUser;
        string newApprove = JsonUtility.ToJson(deny);
        Debug.Log(deny.approve_list[0]);
        Debug.Log(newApprove);
        byte[] bodyRaw = Encoding.UTF8.GetBytes(newApprove);
        Debug.Log("Denying profile with for " + events[i].e_title);
        //using (UnityWebRequest www = UnityWebRequest.Get("https://webhook.site/8e284497-5145-481d-8a18-0883dfd599e5"))
        using (UnityWebRequest www = UnityWebRequest.Put("https://connected-dev-214119.appspot.com/_ah/api/connected/v1/events/" + PlayerPrefs.GetString("email", "email").ToLower() + "/" + events[i].e_orig_title + "/deny", bodyRaw))
        {



            www.uploadHandler = (UploadHandler)new UploadHandlerRaw(bodyRaw);
            www.SetRequestHeader("Authorization", "Bearer " + j.token);
            www.SetRequestHeader("Content-Type", "application/json");

            yield return www.SendWebRequest();
            if (www.isNetworkError || www.isHttpError)
            {
                Debug.Log(www.responseCode);
                Debug.Log(www.url);
                Debug.Log(www.GetRequestHeader("Authorization"));
                Debug.Log(www.GetRequestHeader("Content-Type"));
                Debug.Log(www.error);
                Debug.Log(www.downloadHandler.text);
            }
            i++;
            x = 0;
            SettingDBd = false;
            setNotification();
            loading.SetActive(false);
        };
    }


}
[System.Serializable]
public class approveList 
{
    public string[] approve_list;
}
