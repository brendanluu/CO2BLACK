using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FactHit2 : MonoBehaviour {

	private Vector3 fact2OrigPos;
	private Vector3 fact2NewPos;

	void HitByRay () {
		Debug.Log ("I was hit by a Ray");

		fact2OrigPos = this.gameObject.transform.position;
		this.gameObject.transform.localPosition = new Vector3(-1.25f, 0, -1.25f);

	}
}

