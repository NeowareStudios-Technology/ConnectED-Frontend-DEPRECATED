using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PersonSearch : MonoBehaviour {

    public Search search;
    public InputField leader;

    public void setAsTarget(){
        search.leader = leader;
    }

}
