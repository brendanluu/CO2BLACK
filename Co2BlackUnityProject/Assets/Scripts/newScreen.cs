using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class newScreen : MonoBehaviour {

	public GameObject Screen3;
	public GameObject Screen2;
	public GameObject smoke;

	public void visualize(){
		Screen2.SetActive (false);
		Screen3.SetActive (true);
		smoke.SetActive (true);
	}
}
