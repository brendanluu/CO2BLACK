﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.XR.iOS;
using UnityEngine.EventSystems;

public class Move2 : MonoBehaviour {
	public GameObject instructions;

	//public GameObject bubblePrefab;
	private static GameObject objectSelect = null;
    private Rigidbody rb;



	// Update is called once per frame
	void Update () {



		if (Input.touchCount > 0) {

			Touch touch = Input.GetTouch (0);
			if (touch.phase == TouchPhase.Began  && !EventSystem.current.IsPointerOverGameObject(0)) {
				Ray ray = Camera.main.ScreenPointToRay (touch.position);
				RaycastHit hit;

				if (Physics.Raycast (ray, out hit, 100)) {

                    if (hit.transform.gameObject.tag == "goodTrash" || 	 hit.transform.gameObject.tag == "badTrash"){
						objectSelect = hit.transform.gameObject;
						rb = objectSelect.GetComponent<Rigidbody>();
						instructions.SetActive (false);
                    }
					
				}
			}

			Debug.Log ("Touch Position" + touch.position);
			if (touch.phase == TouchPhase.Moved) {
				Vector3 fingerPosition = Camera.main.ScreenToWorldPoint (new Vector3 (touch.position.x, touch.position.y, .3f));
				objectSelect.transform.position = new Vector3(fingerPosition.x, fingerPosition.y, fingerPosition.z);


			}

			if (touch.phase == TouchPhase.Stationary) {
				Vector3 fingerPosition = Camera.main.ScreenToWorldPoint (new Vector3 (touch.position.x, touch.position.y, .3f));
				objectSelect.transform.position = new Vector3 (fingerPosition.x, fingerPosition.y, fingerPosition.z);
				rb.isKinematic = true;



			} else {
				rb.isKinematic = false;
			}
				


            if (touch.phase == TouchPhase.Ended) {
				Debug.Log ("touch ended");

            }

		}
	}
}
