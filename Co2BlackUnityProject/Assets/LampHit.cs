using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LampHit : MonoBehaviour {

	public GameObject lampSpotlight;
	public Material lampShade;
	public GameObject BuildingFact;




	void HitByRay () {
		Debug.Log ("I was hit by a Ray");

		lampShade.DisableKeyword ("_EMISSION");
		lampSpotlight.SetActive (false);
		BuildingFact.SetActive (true);


	}
}
