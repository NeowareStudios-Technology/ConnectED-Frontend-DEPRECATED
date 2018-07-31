using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class alphaAndText : MonoBehaviour {

    public Image i;
    public Text t;
    public Color primary;
    public Color secondary;

    public void alphachange()
    {
        if (i.color == Color.white || i.color.a == 1f)
        {
            i.color = Color.clear;
            return;
        }
        if (i.color == Color.clear ||i.color.a == 0)
            i.color = Color.white;
    }

    public void textColor()
    {
        if (t.color == primary)
            t.color = secondary;
        else
            t.color = primary;
    }
	public void Update()
	{
        if (this.GetComponent<spriteSwitcher>())
        {
            if (t.color == primary && this.GetComponent<spriteSwitcher>().pressed)
            {
                t.color = secondary;
            }
            else if(!this.GetComponent<spriteSwitcher>().pressed)
				t.color = primary;
        }
	}
}
