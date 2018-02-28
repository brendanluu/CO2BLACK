using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.XR.iOS;
using UnityEngine.EventSystems;

public class laptopHit : MonoBehaviour {

	public GameObject screen1;
	public GameObject screen2;
	public GameObject screen3;
	//public GameObject bubblePrefab;
	private static GameObject laptopSelect = null;
	private static GameObject screenTwoSelect = null;

//	private bool secondActive = false;



	// Update is called once per frame
	void Update () {

		Debug.Log (Input.touchCount);

		int fingerCount = 0;
		foreach (Touch touch in Input.touches) {
			if (touch.phase != TouchPhase.Ended && touch.phase != TouchPhase.Canceled)
				fingerCount++;
		}

		if (fingerCount > 0)
			print("User has " + fingerCount + " finger(s) touching the screen");




		if (Input.touchCount > 0) {

			Touch touch = Input.GetTouch (0);
			if (touch.phase == TouchPhase.Began  && !EventSystem.current.IsPointerOverGameObject(0)) {

				Ray ray = Camera.main.ScreenPointToRay (touch.position);
				RaycastHit hit;

				if (Physics.Raycast (ray, out hit, 100)) {

                    if (hit.transform.gameObject.tag == "laptop"){
						Debug.Log ("plz");

						laptopSelect = hit.transform.gameObject;
						screen1.SetActive (false);
						screen2.SetActive (true);

                    }


					else if (hit.transform.gameObject.tag == "screen2"){
						Debug.Log ("popp");
						screenTwoSelect = hit.transform.gameObject;
						screen2.SetActive (false);
						screen3.SetActive (true);
					}
					
				}
			}
		}



//		if (screen2.activeInHierarchy && hit.transform.gameObject.tag == "laptop"){
//			laptopSelect = hit.transform.gameObject;
//			//						Destroy(laptopSelect);
//			screen2.SetActive (false);
//			screen3.SetActive (true);
//		}
//		if (Input.touchCount > 1) {
//
//			Touch touch = Input.GetTouch (0);
//			if (touch.phase == TouchPhase.Began  && !EventSystem.current.IsPointerOverGameObject(0)) {
//				Ray ray = Camera.main.ScreenPointToRay (touch.position);
//				RaycastHit hit;
//
//				if (Physics.Raycast (ray, out hit, 100)) {
//
//					if (hit.transform.gameObject.tag == "laptop"){
//						laptopSelect = hit.transform.gameObject;
//						//						Destroy(laptopSelect);
//						screen2.SetActive (false);
//						screen3.SetActive (true);
//					}
//
//				}
//			}
//		}
	}
}
