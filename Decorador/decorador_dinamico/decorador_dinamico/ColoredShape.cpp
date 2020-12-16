#include "ColoredShape.h"

ColoredShape::ColoredShape(Shape& shape, const string& color) : shape{ shape }, color{ color }
{

}

ColoredShape::~ColoredShape()
{
	cout << "destruye ColoredShape de color " << color << endl;
	(&shape)->~Shape();
}

string ColoredShape::toString() const
{
	ostringstream oss;
	oss << shape.toString() << " has the color " << color;
	return oss.str();
}

void ColoredShape::resize(float nr)
{
	shape.resize(nr);
}