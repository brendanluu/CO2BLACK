﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class learningLayerUp : MonoBehaviour {

	public GameObject trashCan;

	private changeTrashColor trashScript;

	private bool twoRejections;

	public GameObject trashLayer;

	private bool isLayerUp = false;

	private bool isBadgeUp = false;

	public GameObject trashBadge;

	public GameObject closeBtn;

	public GameObject nextBtn;

	public GameObject progBtn;

	public GameObject secondBoxes;


	public GameObject secondModuleGroup;
	public GameObject toThirdMod;
	public GameObject thirdModuleGroup;
	public GameObject thirdUI;

	public GameObject lampModel;
	public GameObject lampStand;
	public GameObject lampCFL;





	// Use this for initialization
	void Start () {
		trashScript = trashCan.GetComponent<changeTrashColor> ();

	}
	
	// Update is called once per frame
	void Update () {
		twoRejections = trashScript.twoRejections;

		
	}

	public void layerUp(){

		if (isLayerUp == false) {
			

			trashLayer.SetActive (true);
			trashLayer.GetComponent<Animation> ().Play ("layerUp");
			isLayerUp = true;
			closeBtn.SetActive (true);
			isBadgeUp = false;




		} else if (isLayerUp == true) {
		
			

			trashLayer.GetComponent<Animation> ().Play ("layerDown");
			isLayerUp = false;
			trashBadge.SetActive (true);
			trashBadge.GetComponent<Animation> ().Play ("badgeIn");
			isBadgeUp = true;
			nextBtn.SetActive (false);
			progBtn.SetActive (true);



		}

	}

	public void layerClose(){

		if (!isBadgeUp) {
			
			isLayerUp = false;
			trashLayer.GetComponent<Animation> ().Play ("layerDown");

			closeBtn.SetActive (false);
			secondBoxes.SetActive (true);



		} else if (isBadgeUp) {
			isLayerUp = false;
			trashBadge.SetActive (false);
			closeBtn.SetActive (false);
			progBtn.SetActive (false);
			secondBoxes.SetActive (true);
		}


	}

	public void goToThirdModule(){
		trashBadge.GetComponent<Animation> ().Play ("badgeOut");
		progBtn.SetActive (false);
		closeBtn.SetActive (false);
		secondBoxes.SetActive (false);

		Debug.Log ("Go to Third Mod Button Tapped");

		//hide second module
		secondModuleGroup.SetActive (false);





		//show third module
		thirdModuleGroup.SetActive (true);
		thirdUI.SetActive (true);




	}












}
