// Instantiates 10 copies of prefab each 2 units apart from each other

using UnityEngine;
using System.Collections;

public class instantiateSphere : MonoBehaviour
{



	public GameObject holder;

	public GameObject sphere;

	int ballCount = 5000/10;





	void Start()
	{
		

		for (int i = 0; i < ballCount; i++)
		{
			GameObject spheres = Instantiate(sphere, new Vector3(0, (i + 50) * 1.20F, Random.Range(-120.0f, 120.0f)), Quaternion.identity) as GameObject;
			spheres.transform.parent = holder.transform;


		}
	}
}





