using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class loadDelay : MonoBehaviour {


	public void ModeSelect(){
		StartCoroutine ("Wait");
	}

	IEnumerator Wait(){
		yield return new WaitForSeconds (1.3f);
		Application.LoadLevel ("lampSceneCool2");
	}


}
