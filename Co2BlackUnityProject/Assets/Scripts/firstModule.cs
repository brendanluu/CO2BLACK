using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class firstModule : MonoBehaviour {

	//first screen (after tap to place)
	public GameObject replaceBulb;
	public GameObject badBulb;
	public GameObject cflTrans;

	//second screen (bulb was switched)
	public GameObject cflBulb;
	public GameObject lampShade;
	public Material lampShadeMat;
	public GameObject buildingFactTop;
	public GameObject pointer;

	//third screen 
	public GameObject buildingFactBot;

	//fourth screen
	public GameObject dontForget;

	//fifth screen
	public GameObject turnOff;
	public GameObject lampSpotlight;

	public Material smokeHigh;

	//to second module
	public GameObject toSecondMod;

	void Update () {
		//if text says "tap to replace bulb" show the cfl sprite
		if (replaceBulb.activeInHierarchy) {
			cflTrans.SetActive (true);
		}
		//if bulb has been switched, hide the cfl sprite
		if (cflBulb.activeInHierarchy) {
			cflTrans.SetActive (false);
			lampShade.SetActive (true);
			lampShadeMat.DisableKeyword ("_EMISSION");

		}
	}

	void HitByRay () {
		Debug.Log ("I was hit by a Ray");

		replaceBulb.SetActive (true);

		if (badBulb.activeInHierarchy) {

			replaceBulb.SetActive (false);
			badBulb.SetActive (false);

			cflBulb.SetActive (true);

			buildingFactTop.SetActive (true);
			pointer.SetActive (true);
		
			smokeHigh.SetFloat ("_Alpha", 0.15f);
		}

		if (turnOff.activeInHierarchy) {
			lampSpotlight.SetActive (false);
			toSecondMod.SetActive (true);
		}

	}


}
