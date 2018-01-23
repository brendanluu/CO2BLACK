using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ignoreCollision : MonoBehaviour {
	public GameObject theobjectToNotIgnore;
	void OnCollisionEnter(Collision collision)
	{
		if (collision.gameObject.tag == "badTrash") {
			Physics.IgnoreCollision (theobjectToNotIgnore.GetComponent<Collider>(), GetComponent<Collider>());
		}
	}

}