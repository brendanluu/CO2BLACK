using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class co2Controller : MonoBehaviour {

// First Building Fact to Tap to Replace

	public GameObject BuildingFact;
	public GameObject BuildingFact_Trans;
	public GameObject replaceBulb;
	public GameObject lampNew;

	public void BuildingFact_ReplaceBulb () {

		BuildingFact.SetActive (false);
		BuildingFact_Trans.SetActive (false);
		replaceBulb.SetActive (true);
		
	}

// Tap to Replace to dontForget Fact
	public GameObject dontForget;
	public GameObject dontForgetTrans;

	// public void ReplaceBulb_DontForget () {

	// 	replaceBulb.SetActive (false);
	// 	// ReplaceBulb_Trans.SetActive (false);
	// 	dontForgetTrans.SetActive (true);
	// 	dontForget.SetActive (true);
	// }

// dontForget Fact to TurnOff Dialogue
	public GameObject turnOff;
	public GameObject findFlatText;

	public void DontForget_TurnOff () {
		dontForgetTrans.SetActive (false);
		dontForget.SetActive (false);
		turnOff.SetActive (true);
		findFlatText.SetActive (false);
	
	}

// SECOND MODULE //

// Tap Box Dialogue Trans to remove

	public GameObject boxDialogue;
	public GameObject boxDialogue_trans;

	public void tapBoxDialogue_trans () {
		boxDialogue.SetActive(false);
		boxDialogue_trans.SetActive(false);
	}

// Tap Soda Dialogue Trans to remove 

	public GameObject sodaDialogue;
	public GameObject sodaDialogue_trans;

	public void tapSodaDialogue_trans () {
		sodaDialogue.SetActive(false);
		sodaDialogue_trans.SetActive(false);
	}

// Tap Bottle Dialogue Trans to remove

	public GameObject bottleDialogue;
	public GameObject bottleDialogue_trans;

	public void tapBottleDialogue_trans () {
		bottleDialogue.SetActive(false);
		bottleDialogue_trans.SetActive(false);
	}

// Tap Trash Bag Dialogue Trans to remove 

	public GameObject trashBagDialogue;
	public GameObject trashBagDialogue_trans;

	public void tapTrashDialogue_trans () {
		trashBagDialogue.SetActive(false);
		trashBagDialogue_trans.SetActive(false);
	}

// Tap Foam Cup Dialogue Trans to remove 

	public GameObject foamCupDialogue;
	public GameObject foamCupDialogue_trans;

	public void tapFoamDialogue_trans () {
		foamCupDialogue.SetActive(false);
		foamCupDialogue_trans.SetActive(false);
	}



}
