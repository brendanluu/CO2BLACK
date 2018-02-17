using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class thirdmod : MonoBehaviour {

	public GameObject fire;
	public GameObject coal;
	public GameObject gas;
	public GameObject clean;


	void turnOnCoal() {
		coal.SetActive (true);
	}

	void turnOnGas(){
		gas.SetActive (true);
	}

	void turnOnClean(){
		clean.SetActive (true);
	}


}
