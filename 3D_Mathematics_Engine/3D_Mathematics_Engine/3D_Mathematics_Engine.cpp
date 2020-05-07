#include "iostream"
#include "Vector3D.h"
#include "Matrix.h"
#include "Quaternion.h"

using namespace Maths;

int main()
{
	char test;
	Quaternion quat1(0, 1, 0, 0);	
	Quaternion quat2(90, 1, 0, 0);

	quat1.Show();
	quat2.Show();

	quat2.Inverse();
	quat2.Show();
	quat2.Inverse();
	quat2.Show();

	quat2 *= quat1;
	quat2.Show();
	std::cin >> test;
	return 0;
}