using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ignoreCollision : MonoBehaviour {
	
	public Transform goodTrash;
	void Start() {
//		Transform bullet = Instantiate(bulletPrefab) as Transform;
		Physics.IgnoreCollision(goodTrash.GetComponent<Collider>(), GetComponent<Collider>());
	}

}