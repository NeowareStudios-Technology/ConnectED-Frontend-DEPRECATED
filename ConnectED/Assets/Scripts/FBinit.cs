using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Facebook.Unity;

public class FBinit : MonoBehaviour {

    // Use this for initialization
    float timer = .5f;
    bool stop = false;
    private void Update()
    {
        if (!stop)
        {
            if (timer > 0)
                timer = timer - Time.deltaTime;
            else
            {
                this.GetComponent<FBscript>().FBlogin();
                stop = true;
            }
        }
    }

}
