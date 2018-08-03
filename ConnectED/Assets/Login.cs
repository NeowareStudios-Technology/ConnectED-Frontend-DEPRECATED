using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Login : MonoBehaviour {

    public Animator EventPanel;
    public InputField email;
    public InputField Password;
    public getProfileinfo g;
    public Jsonparser j;

	public void StartLoginProcess()
    {

        string e = email.text;
        string p = Password.text;
        Debug.Log("Logging in: "+email.text+Password.text);
        if(!j.profileSet)
            g.GetmyProfile(e, p);
        

    }
    public void Continue()
    {
        if (j.profileSet)
            EventPanel.enabled = true;
    }
}
