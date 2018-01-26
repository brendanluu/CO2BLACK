using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LampHit : MonoBehaviour {

	public GameObject lampSpotlight;
	public Material lampShade;
	public GameObject BuildingFactTop;
	public GameObject BuildingFactBot;
	public Material smokeHigh;
//	public GameObject impactButton;

	//first half
	public GameObject nextButton;
	public GameObject cflBulb;
	public GameObject badBulb;
	public GameObject replaceBulb;

	//second half
	public GameObject dontForget;
	public GameObject turnOff;



//	public GameObject smokeHigh;
//
//	public Material smokeLow;

	void HitByRay () {
		Debug.Log ("I was hit by a Ray");

		lampShade.DisableKeyword ("_EMISSION");
//		lampSpotlight.SetActive (false);
		BuildingFactTop.SetActive (true);
		BuildingFactBot.SetActive (true);
		badBulb.SetActive (false);
		cflBulb.SetActive (true);
		nextButton.SetActive (true);
		replaceBulb.SetActive (false);

//		MeshRenderer smokeHighMesh = smokeHigh.GetComponent<MeshRenderer>();
//
//		smokeLow = smokeHighMesh.material; 

		smokeHigh.SetFloat ("_Alpha", 0.15f);

	}

	public void nextBtn () {
		BuildingFactTop.SetActive (false);
		BuildingFactBot.SetActive (false);
		dontForget.SetActive (true);
		nextButton.SetActive (false);
		turnOff.SetActive (true);

	}
}
