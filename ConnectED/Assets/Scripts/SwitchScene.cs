using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Animations;
public class SwitchScene : MonoBehaviour {
    private string scene = "splash";
    public Animator form;
    public Animator eventpanel;
    public void Switch()
    {
        if (scene == "splash" && PlayerPrefs.GetInt("signedin", 0) == 0)
        {
            scene = "form";
            animateform();
        }
        else
            animateevent();
    }

    public void animateform(){
        form.enabled = true;
    }
    public void animateevent(){
        eventpanel.enabled = true;
    }
}
