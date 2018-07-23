using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class spriteSwitcher : MonoBehaviour {


    private Sprite firstImage;
    public Sprite secondImage;
    private Sprite onImage;
    private Sprite offImage;
    public int currentImage = 1;
    public bool pressed = false;
	// Use this for initialization
	void Start () {
        firstImage = this.GetComponent<Image>().sprite;
        if (pressed)
        {
            onImage = firstImage;
            offImage = secondImage;
        }
        else
        {
            onImage = secondImage;
            offImage = firstImage;
        }
	}
	
    public void isPressed()
    {
        pressed = !pressed;
        if(currentImage == 1)
        {
            this.GetComponent<Image>().sprite = secondImage;
            currentImage = 2;
        }
        else
        {
            this.GetComponent<Image>().sprite = firstImage;
            currentImage = 1;
        }

    }

    public void turnOff()
    {
        this.GetComponent<Image>().sprite = offImage;
    }
    public void turnOn()
    {
        this.GetComponent<Image>().sprite = onImage;
    }
}
