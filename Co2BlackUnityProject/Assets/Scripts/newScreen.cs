using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class newScreen : MonoBehaviour {

	public GameObject Screen3;
	public GameObject Screen2;

	public void visualize(){
		Screen3.SetActive (true);
		Screen2.SetActive (false);
	}
}
