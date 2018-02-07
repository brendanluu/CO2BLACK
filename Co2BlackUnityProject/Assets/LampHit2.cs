using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LampHit2 : MonoBehaviour {

	//first screen (after tap to place)
	public GameObject replaceBulb;
	public GameObject badBulb;
	public GameObject cflTrans;

	//second screen (bulb was switched)
	public GameObject cflBulb;
	public GameObject BuildingFactTop;
	public GameObject pointer;

	//third screen 
	public GameObject BuildingFactBot;

	//fourth screen
	public GameObject dontForget;

	//fifth screen
	public GameObject turnOff;
	public GameObject lampSpotlight;


	public Material smokeHigh;

	//example Cube for beginning to combine scenes
	public GameObject exampleCube;
	public GameObject newPlacedLamp;
	public GameObject nextButton;
	public GameObject newLightBulb;


	void Update () {
		if (replaceBulb.activeInHierarchy) {
			cflTrans.SetActive (true);
		}
		if (cflBulb.activeInHierarchy) {
			cflTrans.SetActive (false);
		}
	}

	void HitByRay () {
		//first screen
		Debug.Log ("I was hit by a Ray");

		if (badBulb.activeInHierarchy) {
			
			BuildingFactTop.SetActive (true);
			pointer.SetActive (true);
			badBulb.SetActive (false);
			cflBulb.SetActive (true);
			replaceBulb.SetActive (false);

			smokeHigh.SetFloat ("_Alpha", 0.15f);
		}

		if (turnOff.activeInHierarchy) {
			lampSpotlight.SetActive (false);
			nextButton.SetActive (true);
		}

	}

	public void nextBtn () {
		Debug.Log ("Next Button Tapped");
		//hide old text
		BuildingFactTop.SetActive (false);
		BuildingFactBot.SetActive (false);

		//hide btn and show cube
		exampleCube.SetActive (true);
		nextButton.SetActive (false);
		newPlacedLamp.SetActive (false);
		turnOff.SetActive (false);
		newLightBulb.SetActive (false);

		//show text
//		dontForget.SetActive (true);

//		pointer.SetActive (false);

	

		if (newPlacedLamp.activeInHierarchy) {
			Debug.Log ("didn't work");
		} else {
			Debug.Log ("Worked");
		}

	}
		
}
