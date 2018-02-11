using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ignoreCollision : MonoBehaviour {
	
	public Transform goodTrash;
	public Transform goodTrash2;
	public Transform goodTrash3;

	void Start() {
//		Transform bullet = Instantiate(bulletPrefab) as Transform;
		Physics.IgnoreCollision(goodTrash.GetComponent<Collider>(), GetComponent<Collider>());
		Physics.IgnoreCollision(goodTrash2.GetComponent<Collider>(), GetComponent<Collider>());
		Physics.IgnoreCollision(goodTrash3.GetComponent<Collider>(), GetComponent<Collider>());

	}

	public GameObject trashDialogue;
	public GameObject foamDialogue;

	void OnTriggerEnter(Collider col){


		if (col.gameObject.name == "trashbag"){

			trashDialogue.SetActive (true);
			foamDialogue.SetActive (false);

		}

		if (col.gameObject.name == "foam cup"){
			

			trashDialogue.SetActive (false);
			foamDialogue.SetActive (true);

		}

	}

	public void trashTapAway() {
		trashDialogue.SetActive (false);
	}

	public void foamTapAway() {
		foamDialogue.SetActive (false);
	}

}