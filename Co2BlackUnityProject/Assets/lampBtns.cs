﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class lampBtns : MonoBehaviour {

	public GameObject BuildingFactTop;
	public GameObject BuildingFactBot;
	public GameObject dontForget;
	public GameObject turnOff;
	public GameObject infoTextBox;
	public GameObject directionTextBox;
	public GameObject pointer;


	public void BuildingFactTopBtn () {

		BuildingFactTop.SetActive (false);
		BuildingFactBot.SetActive (true);
	}

	public void BuildingFactBotBtn () {

		BuildingFactBot.SetActive (false);
		dontForget.SetActive (true);
	}

	public void dontForgetBtn () {

		dontForget.SetActive (false);
		infoTextBox.SetActive (false);
		pointer.SetActive (false);
		turnOff.SetActive (true);
		directionTextBox.SetActive (true);

	}

}
