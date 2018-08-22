using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DetailChanger : MonoBehaviour {

    public Text Date;
    public Text Title;
    public RawImage pic;
    public Text Description;
    public Text Capacity;
    public Text Time;
    public Text Location;
    public Text Status;
    public Text Tag1;
    public Text Tag2;
    public Text Tag3;

    public Button Volunteer;

    public void setDetails(Event e)
    {
        Date.text = GetMonth(e.date[0]) +" "+ GetDay(e.date[0]);
        Location.text = (e.street +" "+ e.city +" " + e.state +" " + e.zip_code);
        Title.text = e.e_title;
        Time.text = e.start[0] + " -" + e.end[0];
        Description.text = e.e_desc;
        Capacity.text = e.num_attendees + " / " + e.capacity;

        Texture2D tex = new Texture2D(400, 400);
        if (e.e_photo != null && e.e_photo.Length> 300)
        {
            byte[] img = System.Convert.FromBase64String(e.e_photo);
            tex.LoadImage(img, false);

            pic.texture = tex;
        }
    }
    public string GetMonth(string s)
    {
        string m = s.Substring(0, 2);
        switch (m)
        {
            case "01":
                return "January";
            case "02":
                return "February";
            case "03":
                return "March";
            case "04":
                return "April";
            case "05":
                return "May";
            case "06":
                return "June";
            case "07":
                return "July";
            case "08":
                return "August";
            case "09":
                return "September";
            case "10":
                return "October";
            case "11":
                return "November";
            case "12":
                return "December";
            default:
                return "???";
        }
    }
    public string GetDay(string s)
    {
        string m = s.Substring(3, 2);
        if (m[0] == '0')
            return m[1].ToString();
        else
            return m;
    }
}
