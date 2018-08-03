using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class pictureGrabber : MonoBehaviour {
    public RawImage image;
    public void pick()
    {
        PickImage(400);
    }
    private void PickImage(int maxSize)
    {
        NativeGallery.Permission permission = NativeGallery.GetImageFromGallery((path) =>
        {
            Debug.Log("Image path: " + path);
            if (path != null)
            {
                // Create Texture from selected image
                Texture2D texture = NativeGallery.LoadImageAtPath(path, maxSize);
                if (texture == null)
                {
                    Debug.Log("Couldn't load texture from " + path);
                    return;
                }
                Color[] c = texture.GetPixels(0, 0, 200, 200);
                Texture2D m2Texture = new Texture2D(200, 200);
                m2Texture.SetPixels(c);
                m2Texture.Apply();
                texture = m2Texture;
                image.texture = texture;
                image.color = Color.white;
                // If a procedural texture is not destroyed manually, 
                // it will only be freed after a scene change
            }
        }, "Select a PNG image", "image/png", maxSize);

        Debug.Log("Permission result: " + permission);
    }

}
