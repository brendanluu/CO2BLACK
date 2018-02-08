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

}