using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScrollRectSnap : MonoBehaviour {

    // Public Variables
    public RectTransform panel;
    public GameObject[] tile;
    public RectTransform center;
    

    private float[] distance;
    private bool dragging = false;
    private bool beenDragged = false;
    private bool active = false;
    private int tileDistance;
    private int minTileNum;
	// Use this for initialization
	void Start () {
        int TileLength = tile.Length;
        distance = new float[TileLength];

        tileDistance = (int)Mathf.Abs(tile[1].GetComponent<Transform>().transform.position.x - tile[0].GetComponent<Transform>().transform.position.x);

	}
	
	// Update is called once per frame
	void Update () {
        if (!active)
            return;
        for (int i = 0; i < tile.Length; i++)
        {
            distance[i] = Mathf.Abs(center.transform.position.x - tile[i].transform.transform.position.x);
        }

        float minDistance = Mathf.Min(distance);

        for (int a = 0; a < tile.Length; a++)
        {
            if(minDistance == distance[a])
            {
                minTileNum = a;
            }
        }

        if (!dragging && beenDragged)
        {
            LerpToTile(minTileNum * -tileDistance);
        }
	}

    public void activate()
    {
        active = true;
    }
    void LerpToTile(int position)
    {
        float newX = Mathf.Lerp(panel.position.x, position, Time.deltaTime * 10f);
        Vector2 newPosition = new Vector2(newX, panel.position.y);

        panel.position = newPosition;
    }

    public void StartDrag()
    {
        dragging = true;
        beenDragged = true;
    }

    public void EndDrag()
    {
        dragging = false;
    }
}
