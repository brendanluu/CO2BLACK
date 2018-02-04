using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnergyHit : MonoBehaviour {

	//first screen 
	public GameObject coal;
	public GameObject solar;
	public GameObject chooseEnergy;

	//second screen 
	public GameObject energyFact;
	public GameObject pointer;

	public Material smokeHigh;

	void HitByRay () {
		//first screen
		Debug.Log ("I was hit by a Ray");

		coal.SetActive (false);
		//trigger animation of solar pamphlet getting larger and centered
		chooseEnergy.SetActive (false);
		pointer.SetActive (true);
		energyFact.SetActive (true);

		smokeHigh.SetFloat ("_Alpha", 0.15f);

	}

}
