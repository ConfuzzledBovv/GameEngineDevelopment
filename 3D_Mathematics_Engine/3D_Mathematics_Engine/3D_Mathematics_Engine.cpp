#include <iostream>
#include "Vector3D.h"

using namespace Maths;

int main()
{
	char test;
	Maths::Vector3D Vector1(2, 3, 1);
	Maths::Vector3D Vector2;
	Maths::Vector3D Vector3 = Vector1;

	Vector3D Vector4(1, 2, 3);

	Vector2 = Vector1 + Vector4;

	std::cin >> test;

	return 0;
}
