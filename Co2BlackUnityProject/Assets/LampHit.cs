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
	public GameObject cflTrans;

	//second half
	public GameObject dontForget;
	public GameObject turnOff;



//	public GameObject smokeHigh;
//
//	public Material smokeLow;

	void HitByRay () {
		//first screen
		Debug.Log ("I was hit by a Ray");

		if (badBulb.activeInHierarchy) {
//		lampShade.DisableKeyword ("_EMISSION");
//		lampSpotlight.SetActive (false);
			BuildingFactTop.SetActive (true);
			BuildingFactBot.SetActive (true);
			badBulb.SetActive (false);
			cflBulb.SetActive (true);
			cflTrans.SetActive (false);
			nextButton.SetActive (true);
			replaceBulb.SetActive (false);

//		MeshRenderer smokeHighMesh = smokeHigh.GetComponent<MeshRenderer>();
//
//		smokeLow = smokeHighMesh.material; 

			smokeHigh.SetFloat ("_Alpha", 0.15f);
		}

		if (dontForget.activeInHierarchy) {
			lampSpotlight.SetActive (false);
		}
	}

	public void nextBtn () {
		//hide old text
		BuildingFactTop.SetActive (false);
		BuildingFactBot.SetActive (false);

		//show text
		dontForget.SetActive (true);
		turnOff.SetActive (true);

		//hide btn
		nextButton.SetActive (false);

	}
}
