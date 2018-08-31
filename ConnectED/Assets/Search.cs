using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using System.Text;

public class Search : MonoBehaviour {
    public InputField search;
    public Jsonparser j;

    public int mode = 0;

    //set mode, 0 is event, 1 is profile search, 2 is team search
    public void setMode(int i)
    {
        mode = i;
    }

    private Searcher s;
    public void startSearch()
    {
        if (search.text == "" || search.text == null || search.text == " ")
            return;
        search.text = search.text.Replace("  ", " ");
        search.text = search.text.Replace("   ", " ");
        search.text = search.text.Replace(" ", "+");
        if(mode == 0)
        {
            searchEvents(search.text , j.token );
        }


    }

    private string searchURL ="https://connected-dev-214119.appspot.com/_ah/api/connected/v1/events/search";
    private IEnumerator coroutine;
    public void searchEvents(string s, string t)
    {

        UnityWebRequest www2 = UnityWebRequest.Get(searchURL+"?search_term="+ search.text);
        www2.SetRequestHeader("Authorization", "Bearer " + t);
        coroutine = Put(www2);
        StartCoroutine(coroutine);
    }

    private IEnumerator Put(UnityWebRequest www)
    {
        yield return www.SendWebRequest();

        Debug.Log("Status Code: " + www.responseCode);
        Debug.Log(www.error);
        Debug.Log(www.downloadHandler.text);
        Debug.Log(www.downloadHandler.data);
        Debug.Log(www.url);
        Debug.Log(www.GetRequestHeader("Authorization"));

    }
	
}
[System.Serializable]
public class Searcher
{
    public string search_term;
}
public class EventSearch
{
    public float[] distances;
    public string[] event_ids;
    public string[] event_titles;
}