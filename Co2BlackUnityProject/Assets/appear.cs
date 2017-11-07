﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class appear : MonoBehaviour {

	public GameObject molecule;
	public GameObject tapButton;
	public GameObject fact1;
	public GameObject fact2; 
	private Vector3 lastPos;


	public void Set_Active(){

		lastPos = fact1.position;
		molecule.SetActive (true);
		tapButton.SetActive (false);
		fact1.SetActive (true);
		fact2.SetActive (false);

		if (fact1.active) {
			molecule.SetActive (false);

			Vector3 offset = fact1.position - lastPos;
			if (offset.x > 0.0f) {
				lastPos = fact1.position;

				fact2.SetActive (true);
			}
		}
				
//
//		Vector3 offset = obj.position - lastPos;
//		if (offset.x > threshold){
//			lastPos = obj.position; // update lastPos
//			// code to execute when X is getting bigger

		molecule.transform.SetParent(null);
	}
}