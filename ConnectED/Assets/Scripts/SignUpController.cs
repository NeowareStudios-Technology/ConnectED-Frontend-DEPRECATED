using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SignUpController : MonoBehaviour {

    public GameObject Email;
    public GameObject Password;
    public GameObject rePassword;
    public GameObject Name;
    public GameObject ProfilePic;
    public GameObject Schedule;
    public GameObject Fields;
    public Animator a;

    public int current = 1;

    public void Next()
    {
        if(current == 1)
        {
            Email.SetActive(false);
            Password.SetActive(true);
            current++;
            return;
        }
        if(current == 2)
        {
            Password.SetActive(false);
            rePassword.SetActive(true);
            current++;
            return;
        }
        if(current == 3)
        {
            rePassword.SetActive(false);
            Name.SetActive(true);
            current++;
            return;
        }
        if(current == 4)
        {
            Name.SetActive(false);
            ProfilePic.SetActive(true);
            current++;
            return;
        }
        if(current == 5)
        {
            ProfilePic.SetActive(false);
            Schedule.SetActive(true);
            current++;
            return;
        }
        if(current == 6)
        {
            Schedule.SetActive(false);
            Fields.SetActive(true);
            current++;
            return;
        }
        if(current == 7)
        {
            a.SetTrigger("SignupOver");
        }
    }
}
