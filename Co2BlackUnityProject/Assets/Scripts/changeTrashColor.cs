using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class changeTrashColor : MonoBehaviour {

		public GameObject trashBagDialogue;
		public GameObject trashBagDialogue_trans;
		public GameObject boxDialogue;
		public GameObject boxDialogue_trans;
		public GameObject bottleDialogue;
		public GameObject bottleDialogue_trans;
		public GameObject foamCupDialogue;
		public GameObject foamCupDialogue_trans;
		public GameObject sodaDialogue;
		public GameObject sodaDialogue_trans;

		public GameObject nextTrash;

		private int rejectionsCount;
		public bool twoRejections = false;
		
		

	void OnCollisionEnter(Collision collision)
	{
		if (collision.gameObject.name == "trashbag" || collision.gameObject.name == "foam cup"){

			GetComponent<Animation>().Play();

			rejectionsCount++;
			if(rejectionsCount > 1){
				twoRejections = true;

				nextTrash.SetActive (true);

			}




		}

		if (collision.gameObject.name == "trashbag"){

			trashBagDialogue.SetActive(true);
			trashBagDialogue_trans.SetActive(true);

			boxDialogue.SetActive(false);
			boxDialogue_trans.SetActive(false);

			bottleDialogue.SetActive(false);
			bottleDialogue_trans.SetActive(false);

			foamCupDialogue.SetActive(false);
			foamCupDialogue_trans.SetActive(false);
			
			sodaDialogue.SetActive(false);
			sodaDialogue_trans.SetActive(false);
		}

		if (collision.gameObject.name == "box"){

			trashBagDialogue.SetActive(false);
			trashBagDialogue_trans.SetActive(false);

			boxDialogue.SetActive(true);
			boxDialogue_trans.SetActive(true);

			bottleDialogue.SetActive(false);
			bottleDialogue_trans.SetActive(false);

			foamCupDialogue.SetActive(false);
			foamCupDialogue_trans.SetActive(false);
			
			sodaDialogue.SetActive(false);
			sodaDialogue_trans.SetActive(false);

		}


		if (collision.gameObject.name == "wata bottle"){

			trashBagDialogue.SetActive(false);
			trashBagDialogue_trans.SetActive(false);

			boxDialogue.SetActive(false);
			boxDialogue_trans.SetActive(false);

			bottleDialogue.SetActive(true);
			bottleDialogue_trans.SetActive(true);

			foamCupDialogue.SetActive(false);
			foamCupDialogue_trans.SetActive(false);
			
			sodaDialogue.SetActive(false);
			sodaDialogue_trans.SetActive(false);

		}

		if (collision.gameObject.name == "foam cup"){

			trashBagDialogue.SetActive(false);
			trashBagDialogue_trans.SetActive(false);

			boxDialogue.SetActive(false);
			boxDialogue_trans.SetActive(false);

			bottleDialogue.SetActive(false);
			bottleDialogue_trans.SetActive(false);

			foamCupDialogue.SetActive(true);
			foamCupDialogue_trans.SetActive(true);
			
			sodaDialogue.SetActive(false);
			sodaDialogue_trans.SetActive(false);

		}

		if (collision.gameObject.name == "soda can"){

			trashBagDialogue.SetActive(false);
			trashBagDialogue_trans.SetActive(false);

			boxDialogue.SetActive(false);
			boxDialogue_trans.SetActive(false);

			bottleDialogue.SetActive(false);
			bottleDialogue_trans.SetActive(false);

			foamCupDialogue.SetActive(false);
			foamCupDialogue_trans.SetActive(false);
			
			sodaDialogue.SetActive(true);
			sodaDialogue_trans.SetActive(true);


		}

	}
}
