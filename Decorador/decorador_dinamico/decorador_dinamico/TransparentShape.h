#pragma once
#include <sstream>
#include <iostream>
using namespace std;

#include "Shape.h"
class TransparentShape : public Shape
{
public:
	TransparentShape(Shape& shape, const uint8_t transparency);
	~TransparentShape();

	virtual string toString() const override;
private:
	Shape& shape;
	uint8_t transparency;
};
