using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class thirdmod : MonoBehaviour {

	public GameObject fire;
	public GameObject coal;
	public GameObject gas;
	public GameObject clean;

	public GameObject woodEnergy;
	public GameObject coalEnergy;

	public GameObject gasEnergy;

	public void turnOnCoal() {
		coal.SetActive (true);
		coalEnergy.SetActive (true);
		woodEnergy.SetActive (false);
	}

	public void turnOnGas(){
		gas.SetActive (true);
		gasEnergy.SetActive (true);
		coalEnergy.SetActive (false);
	}

	public void  turnOnClean(){
		clean.SetActive (true);
		gasEnergy.SetActive (true);
	}


}
