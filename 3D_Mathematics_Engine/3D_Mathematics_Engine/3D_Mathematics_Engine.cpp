#include "iostream"
#include "Vector3D.h"
#include "Matrix.h"
#include "Quaternion.h"

using namespace Maths;

int main()
{
	char test;
	Quaternion quat1(0, 1, 0, 0);	
	Quaternion quat2(90, 1, 0, 1);
	Vector3D vect1(3, 2, 3);

	vect1.Show();
	vect1.SetPitch(90);
	vect1.Show();


	
	std::cin >> test;


	return 0;
}