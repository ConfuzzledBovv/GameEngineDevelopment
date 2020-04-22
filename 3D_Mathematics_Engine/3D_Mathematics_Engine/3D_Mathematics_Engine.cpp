#include "iostream"
#include "Vector3D.h"
#include "Matrix.h"

using namespace Maths;

int main()
{
	char test;

	Matrix matrix(0, 1, 2, 3, 4, 5, 6, 7, 8);
	Matrix matrix2(1, 5, 7, 9, 22, 7, 8, 2, 1);
	Matrix Matrix3 = matrix - matrix2;
	matrix.Show();
	matrix2.Show();
	Matrix3.Show();
	std::cin >> test;

	return 0;
}
