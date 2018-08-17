using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class FieldsReturner : MonoBehaviour {

    private FieldsController f;
    public void onPress()
    {
       
            this.GetComponent<spriteSwitcher>().turnOn();
			f = transform.parent.parent.parent.parent.GetComponent<FieldsController>();
            f.returnField(this.gameObject);

    }
}
