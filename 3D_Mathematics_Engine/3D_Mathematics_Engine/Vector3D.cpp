#include "Vector3D.h"

namespace Maths
{
	Vector3D::Vector3D()
	{
		x = 0.0f;
		y = 0.0f;
		z = 0.0f;
	}
	Vector3D::Vector3D(float _x, float _y, float _z)
	{
		x = _x;
		y = _y;
		z = _z;
	}
	Vector3D::Vector3D(const Vector3D & vector)
	{
		x = vector.x;
		y = vector.y;
		z = vector.z;
	}
	Vector3D & Vector3D::operator=(const Vector3D & vector)
	{
		x = vector.x;
		y = vector.y;
		z = vector.z;

		return *this;
	}
	Vector3D::~Vector3D()
	{

	}
	Vector3D Vector3D::operator+(const Vector3D & vector)
	{
		return Vector3D(x + vector.x, y + vector.y, z + vector.z);
	}
	void Vector3D::operator+=(const Vector3D & vector)
	{
		x += vector.x;
		y += vector.y;
		z += vector.z;
	}
	Vector3D Vector3D::operator-(const Vector3D & vector)
	{
		return Vector3D(x - vector.x, y - vector.y, z - vector.z);
	}
	void Vector3D::operator-=(const Vector3D & vector)
	{
		x -= vector.x;
		y -= vector.y;
		z -= vector.z;
	}
	Vector3D Vector3D::operator*(const float Multiplication)
	{
		return Vector3D(x * Multiplication, y * Multiplication, z * Multiplication);
	}
	void Vector3D::operator*=(const Vector3D Multiplication)
	{
		x *= Multiplication.x;
		y *= Multiplication.y;
		z *= Multiplication.z;
	}
	Vector3D Vector3D::operator/(const float Division)
	{
		return Vector3D(x / Division, y / Division, z / Division);
	}
	void Vector3D::operator/=(const float Division)
	{
		x /= Division;
		y /= Division;
		z /= Division;
	}
	float Vector3D::DotProduct(const Vector3D vector)
	{
		return x * vector.x + y * vector.y + z * vector.z;
	}
	float Vector3D::operator*(const Vector3D vector)
	{
		return x * vector.x + y * vector.y + z * vector.z;
	}
	Vector3D Vector3D::CrossProduct(const Vector3D vector)
	{
		return Vector3D(y * vector.z - z * vector.y,
						z * vector.x - x * vector.z,
						x * vector.y - y * vector.x);
	}
	Vector3D Vector3D::operator%(const Vector3D vector)
	{
		return CrossProduct(vector);
	}
	void Vector3D::operator%=(const Vector3D vector)
	{
		*this = CrossProduct(vector);
	}
}