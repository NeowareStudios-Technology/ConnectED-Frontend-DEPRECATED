using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ProfileEdit : MonoBehaviour {

    public Jsonparser j;
    public InputField fname;
    public InputField lname;
    public InputField Email;
    private Profile profile;
    public void GetProfile()
    {
        fname.text = j.profile.first_name;
        lname.text = j.profile.last_name;
        Email.text = PlayerPrefs.GetString("email","email");
    }
}
