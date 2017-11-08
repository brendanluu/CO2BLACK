// Instantiates 10 copies of prefab each 2 units apart from each other

using UnityEngine;
using System.Collections;

public class instantiateSphere : MonoBehaviour
{



	public GameObject holder;

	public GameObject sphere;

<<<<<<< HEAD


	int ballCount = 3000/10;

=======
<<<<<<< HEAD

	int ballCount = 3000/10;
=======
<<<<<<< HEAD
	int ballCount = 3000;
=======

	int ballCount = 3000/10;
>>>>>>> b4645d287836b418c6fa37c80bca20036d927578
>>>>>>> ff913892ba02d441ccd83606ba40979e8cd848cb
>>>>>>> 8ad1f48656ecf4f6179e394bfc2a5e21c3b47be7






	void Start()
	{
		

		for (int i = 0; i < ballCount; i++)
		{
			GameObject spheres = Instantiate(sphere, new Vector3(0, i * 0.1f, -3), Quaternion.identity) as GameObject;
			spheres.transform.parent = holder.transform;


		}
	}
}





