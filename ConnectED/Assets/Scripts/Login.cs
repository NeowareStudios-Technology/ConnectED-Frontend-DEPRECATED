using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Text;
using UnityEngine.Networking;
using System.IO;
using Firebase;
using Firebase.Auth;
using Firebase.Unity.Editor;

public class Login : MonoBehaviour {

    public Animator EventPanel;
    public InputField email;
    public InputField Password;
    public Jsonparser j;
    public getProfileinfo info;
    public void StartLoginProcess()
    {
            string e = email.text;
            string p = Password.text;
	
        if (PlayerPrefs.GetString("email", "email") != "email" && PlayerPrefs.GetString("password", "password") != "password")
        {
            e = PlayerPrefs.GetString("email", "email");
            p = PlayerPrefs.GetString("password", "password");
        }
        else
        {
	
        PlayerPrefs.SetString("email", email.text);
        PlayerPrefs.SetString("password", Password.text);
	
        }
        //firebase signin
        FirebaseAuth auth = Firebase.Auth.FirebaseAuth.DefaultInstance;
        auth.SignInWithEmailAndPasswordAsync(e, p).ContinueWith(task => {
            if (task.IsCanceled)
            {
                Debug.LogError("SignInWithEmailAndPasswordAsync was canceled.");
                PlayerPrefs.DeleteAll();
                j.alreadyin.SetActive(false);
                return;
            }
            if (task.IsFaulted)
            {
                Debug.LogError("SignInWithEmailAndPasswordAsync encountered an error: " + task.Exception);
				PlayerPrefs.DeleteAll();
                j.alreadyin.SetActive(false);
                return;
            }
        
            Firebase.Auth.FirebaseUser newUser = task.Result;
            Debug.LogFormat("User signed in successfully: {0} ({1})",
                newUser.DisplayName, newUser.UserId);
            j.UserID = newUser.UserId;
            GetToken(auth);

			Debug.Log("Logging in: "+e + " " + p);
            EventPanel.enabled = true;
        });


    


    }

  public void GetToken(FirebaseAuth auth){
      FirebaseUser user = auth.CurrentUser;
 
      user.TokenAsync(true).ContinueWith(task => {
          if (task.IsCanceled)
          {
              Debug.LogError("TokenAsync was canceled.");
              return;
          }
 
          if (task.IsFaulted)
          {
              Debug.LogError("TokenAsync encountered an error: " + task.Exception);
              return;
          }
 
          j.token = task.Result;
          Debug.Log(j.token);

            info.GetmyProfile();
          // Send token to your backend via HTTPS
          // ...
      });
  }

    public void GetInitialToken(FirebaseAuth auth)
    {
        FirebaseUser user = auth.CurrentUser;

        user.TokenAsync(true).ContinueWith(task => {
            if (task.IsCanceled)
            {
                Debug.LogError("TokenAsync was canceled.");
                return;
            }

            if (task.IsFaulted)
            {
                Debug.LogError("TokenAsync encountered an error: " + task.Exception);
                return;
            }

            j.token = task.Result;
            Debug.Log(j.token);
            // Send token to your backend via HTTPS
            // ...
            j.SignUp();
        });
    }


    public void Continue()
    {
        if (j.profileSet)
            EventPanel.enabled = true;
    }
}
