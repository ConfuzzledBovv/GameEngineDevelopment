#pragma once
namespace Maths
{
	class Vector3D
	{
	public:

		float x, y, z;

		// Constructors
		Vector3D();
		Vector3D(float _x, float _y, float _z);
		Vector3D(const Vector3D& vector);
		Vector3D& operator=(const Vector3D& vector);

		// Deconstructor
		~Vector3D();

		// Addition
		Vector3D operator+(const Vector3D& vector);
		void operator+=(const Vector3D& vector);

		// Subtraction
		Vector3D operator-(const Vector3D& vector);
		void operator-=(const Vector3D& vector);

		// Multiplication
		Vector3D operator*(const float Multiplication);
		void operator*=(const Vector3D Multiplication);
		
		// Division
		Vector3D operator/(const float Division);
		void operator/=(const float Division);

		// Dot Product
		float DotProduct(const Vector3D vector);
		float operator*(const Vector3D Multiplication);

		// Cross Product

		Vector3D CrossProduct(const Vector3D vector);
		Vector3D operator%(const Vector3D vector);
		void operator%=(const Vector3D vector);
	};

}
