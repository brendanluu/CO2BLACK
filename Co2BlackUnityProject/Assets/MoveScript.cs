using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.XR.iOS;

public class MoveScript : MonoBehaviour {

	private static GameObject moleculeSelect;
	private static GameObject moleculeSelect1;
	private Vector3 fixedPos;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.touchCount > 0) {
			moleculeSelect = null;
			Touch touch = Input.GetTouch (0);
			if (touch.phase == TouchPhase.Began) {
				Ray ray = Camera.main.ScreenPointToRay (touch.position);
				RaycastHit hit;
				if (Physics.Raycast (ray, out hit, 100)) {
					moleculeSelect = hit.transform.gameObject;
					moleculeSelect.transform.localPosition = new Vector3(0, 0, 1);
				}
			}
		}


//		if (Input.touchCount > 0) {
//			moleculeSelect1 = null;
//			Touch touch = Input.GetTouch (0);
//			if (touch.phase == TouchPhase.Began) {
//				Ray ray = Camera.main.ScreenPointToRay (touch.position);
//				RaycastHit hit;
//				if (Physics.Raycast (ray, out hit, 100)) {
//					moleculeSelect1 = hit.transform.gameObject;
//					moleculeSelect1.transform.localPosition = new Vector3(0, 0, 1);
//				}
//			}
//		}
			
	}

}