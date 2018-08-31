using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Firebase;
using Firebase.Auth;
using UnityEngine.Networking;
using System.Text;

public class teamInitializer : MonoBehaviour {

    private Team team;
    public RawImage pic;
    public Text teamName;
    public Text teamMembers;
    public Button button;

    public void setTeamButton(Team t, GameObject teamPage)
    {
        team = t;
        teamName.text = t.t_name;
        teamMembers.text = t.t_member_num.ToString() + " Members" ;

        if ( t.t_photo != null && t.t_photo.Length > 300)
        {
            Texture2D tex = new Texture2D(200, 200);


            byte[] img = System.Convert.FromBase64String(t.t_photo);
            tex.LoadImage(img, false);

            pic.texture = tex;

        }
        GetComponent<Button>().onClick.AddListener(() => teamPage.SetActive(true));
        GetComponent<Button>().onClick.AddListener(() => teamPage.GetComponent<Image>().color = Color.white);
        GetComponent<Button>().onClick.AddListener(() => teamPage.transform.GetChild(0).gameObject.SetActive(true));
        GetComponent<Button>().onClick.AddListener(() => teamPage.GetComponent<TeamPageInit>().setTeamPage(t));

    }

}
