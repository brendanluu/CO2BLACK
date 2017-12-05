using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class loadDelay : MonoBehaviour {


	public void ModeSelect(){
		StartCoroutine ("Wait");
		Initiate.Fade("lampSceneCool2",Color.black,1.0f);
	}

	IEnumerator Wait(){
		yield return new WaitForSeconds (1.3f);
		Application.LoadLevel ("lampSceneCool2");
	}


}
