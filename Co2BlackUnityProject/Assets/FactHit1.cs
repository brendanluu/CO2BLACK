using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FactHit1 : MonoBehaviour {

	private Vector3 fact1OrigPos;
	private Vector3 fact1NewPos;

	void HitByRay () {
		Debug.Log ("I was hit by a Ray");

//		Destroy (this.gameObject);

		fact1OrigPos = this.gameObject.transform.position;






	}
}
	