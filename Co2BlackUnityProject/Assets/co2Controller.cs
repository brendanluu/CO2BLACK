using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class co2Controller : MonoBehaviour {

// First Building Fact to Second Building Fact

	public GameObject BuildingFactTop;
	public GameObject BuildingFactTop_Trans;
	public GameObject BuildingFactBot_Trans;
	public GameObject BuildingFactBot;

	public void BuildingTop_BuildingBot () {

		BuildingFactTop.SetActive (false);
		BuildingFactTop_Trans.SetActive (false);
		BuildingFactBot_Trans.SetActive (true);
		BuildingFactBot.SetActive (true);
	}

// Second Building Fact to dontForget Fact
	public GameObject dontForget;
	public GameObject dontForgetTrans;

	public void BuildingBot_DontForget () {

		BuildingFactBot.SetActive (false);
		BuildingFactBot_Trans.SetActive (false);
		dontForgetTrans.SetActive (true);
		dontForget.SetActive (true);
	}

// dontForget Fact to TurnOff Dialogue
	public GameObject turnOff;

	public void DontForget_TurnOff () {
		dontForgetTrans.SetActive (false);
		dontForget.SetActive (false);
		turnOff.SetActive (true);
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
