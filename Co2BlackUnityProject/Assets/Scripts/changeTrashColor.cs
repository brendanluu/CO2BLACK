using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class changeTrashColor : MonoBehaviour {

	void OnCollisionEnter(Collision collision)
	{
		if (collision.gameObject.name == "trashbag" || collision.gameObject.name == "foam cup"){

			
			GetComponent<Animation>().Play();
			Debug.Log("yolo");
			

		}

	}
}
