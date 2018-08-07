﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Logout : MonoBehaviour {

    public void pressed()
    {
        PlayerPrefs.DeleteAll();
        SceneManager.LoadScene(0);
    }
}
