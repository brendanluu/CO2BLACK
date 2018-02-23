using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.XR.iOS;

public class HitByRayThird : MonoBehaviour {

	private static GameObject laptopObject;
	//	private Vector3 fixedPos;
	//	private Vector3 moleculePosition;

	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {
		//debug
		Vector3 forward = transform.TransformDirection(Vector3.forward) * 10;
		Debug.DrawRay(transform.position, forward, Color.green);

		if (Input.touchCount > 0) {
			laptopObject = null;
			Touch touch = Input.GetTouch (0);
			if (touch.phase == TouchPhase.Began) {
				Ray ray = Camera.main.ScreenPointToRay (touch.position);
				RaycastHit hit;
				if (Physics.Raycast (ray, out hit, 100)) {
					laptopObject = hit.transform.gameObject;
					laptopObject.transform.SendMessage ("HitByRay");
				}
			}
		}
	}
}