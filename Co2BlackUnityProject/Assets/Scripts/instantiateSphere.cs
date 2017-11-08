// Instantiates 10 copies of prefab each 2 units apart from each other

using UnityEngine;
using System.Collections;

public class instantiateSphere : MonoBehaviour
{



	public GameObject holder;

	public GameObject sphere;

	int ballCount = 3000/10;





	void Start()
	{
		

		for (int i = 0; i < ballCount; i++)
		{
			GameObject spheres = Instantiate(sphere, new Vector3(0, 0, 0), Quaternion.identity) as GameObject;
			spheres.transform.parent = holder.transform;


		}
	}
}





