using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LampHit : MonoBehaviour {

	public GameObject lampObject;

	public Material lampShade;



	void HitByRay () {
		Debug.Log ("I was hit by a Ray");

		lampShade.DisableKeyword ("_EMISSION");

		Destroy (lampObject);


	}
}
