#include "Circle.h"

Circle::Circle() : radius{ 10 }
{
}

Circle::Circle(float radius) : radius{ radius }
{
}

Circle::~Circle()
{
	cout << "destruye circulo de radio: " << radius << endl;
}

float Circle::gRadius()
{
	return radius;
}

void Circle::sRadius(float nr)
{
	radius = nr;
}

string Circle::toString() const
{
	ostringstream oss;
	oss << "A circle of radius " << radius;
	return oss.str();
}

void Circle::resize(float factor)
{
	radius *= factor;
}