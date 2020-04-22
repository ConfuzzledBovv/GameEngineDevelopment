#include "Matrix.h"
#include "iostream"

namespace Maths
{
	Matrix::Matrix()
	{
		for (int i = 0; i < 9; i++)
		{
			matrixData[i] = 0;

		}
		matrixData[0], matrixData[4], matrixData[8] = 1.0f;
	}
	Matrix::Matrix(float matrix0, float matrix3, float matrix6, float matrix1, float matrix4, float matrix7, float matrix2, float matrix5, float matrix8)
	{
		matrixData[0] = matrix0;
		matrixData[3] = matrix3;
		matrixData[6] = matrix6;

		matrixData[1] = matrix1;
		matrixData[4] = matrix4;
		matrixData[7] = matrix7;

		matrixData[2] = matrix2;
		matrixData[5] = matrix5;
		matrixData[8] = matrix8;

	}
	Matrix & Matrix::operator=(const Matrix & matrix)
	{
		for (int i = 0; i <= 8; i++)
		{
			matrixData[i] = matrix.matrixData[i];
		}
		return *this;
	}
	Matrix::~Matrix()
	{

	}
	void Matrix::Show()
	{
		std::cout << "X: " << matrixData[0] << ", " << matrixData[3] << ", " << matrixData[6] << std::endl;
		std::cout << "Y: " << matrixData[1] << ", " << matrixData[4] << ", " << matrixData[7] << std::endl;
		std::cout << "Z: " << matrixData[2] << ", " << matrixData[5] << ", " << matrixData[8] << std::endl;
	}
	Matrix Matrix::operator+(const Matrix & matrix)
	{
		return Matrix(matrixData[0] + matrix.matrixData[0], matrixData[3] + matrix.matrixData[3], matrixData[6] + matrix.matrixData[6], 
						matrixData[1] + matrix.matrixData[1], matrixData[4] + matrix.matrixData[4], matrixData[7] + matrix.matrixData[7], 
						matrixData[2] + matrix.matrixData[2], matrixData[5] + matrix.matrixData[5], matrixData[8] + matrix.matrixData[8]);
	}
	void Matrix::operator+=(const Matrix & matrix)
	{
		matrixData[0] += matrix.matrixData[0];
		matrixData[3] += matrix.matrixData[3];
		matrixData[6] += matrix.matrixData[6];
		matrixData[1] += matrix.matrixData[1];
		matrixData[4] += matrix.matrixData[4];
		matrixData[7] += matrix.matrixData[7];
		matrixData[2] += matrix.matrixData[2];
		matrixData[5] += matrix.matrixData[5];
		matrixData[8] += matrix.matrixData[8];
	}
	Matrix Matrix::operator-(const Matrix & matrix)
	{
		return Matrix(matrixData[0] - matrix.matrixData[0], matrixData[3] - matrix.matrixData[3], matrixData[6] - matrix.matrixData[6],
			matrixData[1] - matrix.matrixData[1], matrixData[4] - matrix.matrixData[4], matrixData[7] - matrix.matrixData[7],
			matrixData[2] - matrix.matrixData[2], matrixData[5] - matrix.matrixData[5], matrixData[8] - matrix.matrixData[8]);
	}
	void Matrix::operator-=(const Matrix & matrix)
	{
		matrixData[0] -= matrix.matrixData[0];
		matrixData[3] -= matrix.matrixData[3];
		matrixData[6] -= matrix.matrixData[6];
		matrixData[1] -= matrix.matrixData[1];
		matrixData[4] -= matrix.matrixData[4];
		matrixData[7] -= matrix.matrixData[7];
		matrixData[2] -= matrix.matrixData[2];
		matrixData[5] -= matrix.matrixData[5];
		matrixData[8] -= matrix.matrixData[8];
	}
}

