using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EventTagger : MonoBehaviour {

    public InputField i;
    public FieldsController f;
    public GameObject button;
	public void Start()
	{
        i = transform.GetComponentInParent<InputField>();
	}

    public void SetI()
    {
        f.SetieT(i, this);
        if (i.text != "" && i.text != null)
            ResetButton();
    }
	public void ResetButton()
	{
        button.GetComponent<spriteSwitcher>().turnOff();
	}
}
