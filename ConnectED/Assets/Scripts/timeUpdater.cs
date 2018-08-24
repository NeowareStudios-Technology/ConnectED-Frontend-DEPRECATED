using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class timeUpdater : MonoBehaviour {
    public Dropdown hour;
    public Dropdown minute;
    public Dropdown ampm;

    public string[] time()
    {
        string s = "";
        if (ampm.value == 1)
            s += (hour.value + 13).ToString();
        else
            s += (hour.value + 1).ToString();

        switch(minute.value){
            case 0:
                s += ":00";
                break;
            case 1:
                s += ":15";
                break;
            case 2:
                s += ":30";
                break;
            case 3:
                s += ":45";
                break;
        }
        Debug.Log(s);
        return new string[] { s };
    }
	
}
