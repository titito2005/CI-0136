#include "TransparentShape.h"

TransparentShape::TransparentShape(Shape& shape, const uint8_t transparency) : shape{ shape }, transparency{ transparency }
{
}

TransparentShape::~TransparentShape()
{
	cout << "TransparentShape de transparencia " << transparency << endl;
	(&shape)->~Shape();
}

string TransparentShape::toString() const
{
	ostringstream oss;
	oss << shape.toString() << " has " << static_cast<float>(transparency) / 255.f*100.f << "% transparency";
	return oss.str();
}