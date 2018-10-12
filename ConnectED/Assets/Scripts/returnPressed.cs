using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class returnPressed : MonoBehaviour {
	// Use this for initialization
    //this returns which ever element was pressed in a group
    public string Check()
    {
        string s = "";
        for (int i = 0; i < this.gameObject.transform.childCount; i++)
        {
            if (this.gameObject.transform.GetChild(i).GetComponent<spriteSwitcher>().pressed)
            {
                s = s + this.gameObject.transform.GetChild(i).GetChild(0).GetComponent<Text>().text;
            }
        }
        return s;
    }
}
