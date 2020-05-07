#include "iostream"
#include "Vector3D.h"
#include "Matrix.h"

using namespace Maths;

int main()
{
	char test;

	Matrix matrix(2, 1, 4, 3, 4, 1, 2, 1, 1);

	Matrix matrix2 = matrix.GetInverseOfMatrix();

	matrix2.Show();
	std::cin >> test;
	return 0;
}
