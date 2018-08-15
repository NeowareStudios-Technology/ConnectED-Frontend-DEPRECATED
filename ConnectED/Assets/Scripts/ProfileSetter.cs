using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ProfileSetter : MonoBehaviour {

    public Jsonparser j;
    public getProfileinfo g;
    public RawImage p;
    public Text username;
    public Text Interest1;
    public Text Interest2;
    public Text Interest3;
    public Text Skill1;
    public Text Skill2;
    public Text Skill3;
    public Text Education;
    public bool set = false;

    public void setProfile()
    {
        SetPicture();
        username.text = j.profile.first_name + " " + j.profile.last_name;
        set = true;
        if (j.profile.interests == null)
        {
            Interest1.text = "None";
            Destroy(Interest2.gameObject);
            Destroy(Interest3.gameObject);
        }
        else
        {
            if (j.profile.interests.Length >= 3)
            {
                Interest1.text = j.profile.interests[0];
                Interest2.text = j.profile.interests[1];
                Interest3.text = j.profile.interests[2];
            }
            if (j.profile.interests.Length == 2)
            {
                Interest1.text = j.profile.interests[0];
                Interest2.text = j.profile.interests[1];
                Destroy(Interest3.gameObject);
            }
            if (j.profile.interests.Length == 1)
            {
                Interest1.text = j.profile.interests[0];
                Destroy(Interest2.gameObject);
                Destroy(Interest3.gameObject);
            }
        }
        if (j.profile.skills == null)
        {
            Skill1.text = "None";
            Destroy(Skill2.gameObject);
            Destroy(Skill3.gameObject);
        }
        else
        {
            if (j.profile.skills.Length >= 3)
            {
                Skill1.text = j.profile.skills[0];
                Skill2.text = j.profile.skills[1];
                Skill3.text = j.profile.skills[2];
            }
            if (j.profile.skills.Length == 2)
            {
                Skill1.text = j.profile.skills[0];
                Skill2.text = j.profile.skills[1];
                Destroy(Skill3.gameObject);
            }
            if (j.profile.skills.Length == 1)
            {
                Skill1.text = j.profile.interests[0];
                Destroy(Skill2.gameObject);
                Destroy(Skill3.gameObject);
            }
        }
            if (j.profile.education != "" && j.profile.education != null)
            {
                Education.text = j.profile.education;
            } 
        else
        {
            Education.text = "Not Specified";
        }

    }
    public void SetPicture()
    {
        Texture2D tex = new Texture2D(200, 200);
        if (j.profile.photo != null)
        {
            byte[] img = System.Convert.FromBase64String(j.profile.photo);
            tex.LoadImage(img, false);

            p.texture = tex;
        }
    }
}
