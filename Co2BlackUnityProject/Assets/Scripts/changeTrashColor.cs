using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class changeTrashColor : MonoBehaviour {

	void OnCollisionEnter(Collision collision)
	{
		if (collision.gameObject.name == "trashbag" || collision.gameObject.name == "foam cup"){

			
			GetComponent<Animation>().Play();

			

		}

		if (collision.gameObject.name == "trashbag"){






		}

		if (collision.gameObject.name == "box"){






		}

	}
}
