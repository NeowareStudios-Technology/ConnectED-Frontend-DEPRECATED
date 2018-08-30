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

    public void setTeamButton(Team t)
    {
        team = t;
        teamName.text = t.t_name;
    }

}
