using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Firebase;
using Firebase.Auth;
using UnityEngine.Networking;
using System.Text;

public class CalendarEventButton : MonoBehaviour {

    public RawImage pic;
    public Text title;
    public Text Date;
    public Image qr;
    private Event e;
    public void setCalendarEvent(Event a )
    {
        e = new Event();
        e = a;
        title.text = a.e_title;

        string dateString = dateGetter();
        Date.text = dateString;
    }
    public string dateGetter(){
        string s = "";
        string month = e.date[0].Substring(0, 2);
        string day = e.date[0].Substring(3, 2);
        switch(int.Parse(month)){
            case 1:
                s = "January";
                break;
            case 2:
                s = "February";
                break;
            case 3:
                s = "March";
                break;
            case 4:
                s = "April";
                break;
            case 5:
                s = "May";
                break;
            case 6:
                s = "June";
                break;
            case 7:
                s = "July";
                break;
            case 8:
                s = "August";
                break;
            case 9:
                s = "September";
                break;
            case 10:
                s = "October";
                break;
            case 11:
                s = "November";
                break;
            case 12:
                s = "December";
                break;

        }
        s += " ";
        int d = int.Parse(day);
        switch(d){
            case 1:
			case 21:
			case 31:
                s += d.ToString() + "st";
                break;
            case 22:
            case 2:
                s += d.ToString() + "nd";
                break;
            case 3:
            case 23:
                s += d.ToString() + "rd";
                break;
            case 4:
            case 24:
            case 5:
            case 25:
            case 6:
            case 26:
            case 7:
            case 27:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 28:
            case 29:
            case 30:
                s += d.ToString() + "th";
                break;
        }
        return s;
    }




    private string prefillurl = "https://connected-dev-214119.appspot.com/_ah/api/connected/v1/events/prefill/dates";
    private Jsonparser j;
    private string jsonString;
    timePrefill prefill;
    public void populateEvents(){
        j = GameObject.FindWithTag("Player").GetComponent<Jsonparser>();
        StartCoroutine(prefillLister());
    }
    IEnumerator prefillLister()
    {
        int retry = 0;
        FirebaseAuth auth = Firebase.Auth.FirebaseAuth.DefaultInstance;
        FirebaseUser user = auth.CurrentUser;


        Debug.Log("Prefilling events by date");
        //using (UnityWebRequest www = UnityWebRequest.Get("https://webhook.site/8e284497-5145-481d-8a18-0883dfd599e5"))
        using (UnityWebRequest www = UnityWebRequest.Get(prefillurl))
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
                if (www.responseCode.ToString() == "503" & retry < 3)
                {
                    Debug.Log("Trying again : get prefill");
                    populateEvents();
                }
            }
            else
            {
                Debug.Log(www.responseCode);
                byte[] results = www.downloadHandler.data;
                jsonString = "";
                jsonString = Encoding.UTF8.GetString(results);
                Debug.Log(jsonString);
                prefill = JsonUtility.FromJson<timePrefill>(jsonString);

            }
        };
    }
}
