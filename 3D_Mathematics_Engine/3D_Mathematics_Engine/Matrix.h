#pragma once

namespace Maths
{
	class Matrix
	{
	public:
		// Data Elements
		float matrixData[9] = { 0.0f };

		// Constructors
		Matrix();
		Matrix(float matrix0, float matrix3, float matrix6, float matrix1, float matrix4, float matrix7, float matrix2, float matrix5, float matrix8);
		Matrix& operator=(const Matrix& matrix);

		// Deconstructor
		~Matrix();

		void Show();

		// Addition
		Matrix operator+(const Matrix& matrix);
		void operator+=(const Matrix& matrix);

		// Subtraction

		Matrix operator-(const Matrix& matrix);
		void operator-=(const Matrix& matrix);

	};

}


/*

Column format preferred by OpenGL

0 3 6
1 4 7
2 5 8

*/