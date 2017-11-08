using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FactHit2 : MonoBehaviour {

	void HitByRay () {
		Debug.Log ("I was hit by a Ray");

		Destroy (this.gameObject);


	}
}
