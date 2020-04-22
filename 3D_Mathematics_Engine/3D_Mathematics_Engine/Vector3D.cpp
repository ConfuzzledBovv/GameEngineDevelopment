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
}