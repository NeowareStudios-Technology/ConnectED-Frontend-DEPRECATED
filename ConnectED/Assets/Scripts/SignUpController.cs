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
    public GameObject Education;
    public GameObject Skills;
    public Animator a;
    public Jsonparser signup;

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
            Fields.SetActive(false);
            Skills.SetActive(true);
            current++;
            return;
        }
        if (current == 8)
        {
            Skills.SetActive(false);
            Education.SetActive(true);
            current++;
            return;
        }
        if (current == 9)
        {
            signup.CreateProfile();
            a.SetTrigger("SignupOver");
        }
    }
    public void Back()
    {

        if (current == 2)
        {
            Password.SetActive(false);
            Email.SetActive(true);
            current--;
            return;
        }
        if (current == 3)
        {
            rePassword.SetActive(false);
            Password.SetActive(true);
            current--;
            return;
        }
        if (current == 4)
        {
            Name.SetActive(false);
            rePassword.SetActive(true);
            current--;
            return;
        }
        if (current == 5)
        {
            ProfilePic.SetActive(false);
            Name.SetActive(true);
            current--;
            return;
        }
        if (current == 6)
        {
            Schedule.SetActive(false);
            ProfilePic.SetActive(true);
            current--;
            return;
        }
        if (current == 7)
        {
            Fields.SetActive(false);
            Schedule.SetActive(true);
            current--;
            return;
        }
        if (current == 8)
        {
            Skills.SetActive(false);
            Fields.SetActive(true);
            current--;
            return;
        }
        if (current == 9)
        {
            Education.SetActive(false);
            Skills.SetActive(true);
            current--;
            return;
        }
        if (current == 1)
        {
            a.SetTrigger("SignupOver");
        }
    }
}
