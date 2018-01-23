using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LampHit : MonoBehaviour {

	public GameObject lampSpotlight;
	public Material lampShade;
	public GameObject BuildingFactTop;
	public GameObject BuildingFactBot;
	public Material smokeHigh;
	public GameObject impactButton;

//	public GameObject smokeHigh;
//
//	public Material smokeLow;





	void HitByRay () {
		Debug.Log ("I was hit by a Ray");

		lampShade.DisableKeyword ("_EMISSION");
		lampSpotlight.SetActive (false);
		BuildingFactTop.SetActive (true);
		BuildingFactBot.SetActive (true);
		impactButton.SetActive (true);

//		MeshRenderer smokeHighMesh = smokeHigh.GetComponent<MeshRenderer>();
//
//		smokeLow = smokeHighMesh.material; 

		smokeHigh.SetFloat ("_Alpha", 0.15f);

	}
}
