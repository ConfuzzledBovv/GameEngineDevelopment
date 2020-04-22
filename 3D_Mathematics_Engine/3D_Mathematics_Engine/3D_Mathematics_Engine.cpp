#include <iostream>
#include "Vector3D.h"

using namespace Maths;

int main()
{
	char test;
	Maths::Vector3D Vector1(2, 3, 1);
	Maths::Vector3D Vector2(1, 2, 0);

	Vector3D Vector3 = Vector1.CrossProduct(Vector2);

	Vector3D Vector4 = Vector1 % Vector2;

	Vector1 %= Vector2;



	std::cin >> test;

	return 0;
}
