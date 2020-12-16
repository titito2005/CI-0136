#pragma once
#include <sstream>
#include <iostream>
using namespace std;

#include "Shape.h"

class ColoredShape : public Shape
{
public:
	ColoredShape(Shape& shape, const string& color);
	~ColoredShape();
	void resize(float nr);
	virtual string toString() const override;

private:
	Shape& shape;
	string color;
};

