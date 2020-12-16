#pragma once
#include <sstream>
#include <iostream>
using namespace std;

#include "Shape.h"

class Circle : public Shape
{
public:
    Circle();
    // explicit habilita al compilador para NO aceptar conversiones INDESEABLES a float de otros tipos
    explicit Circle(const float radius);

    ~Circle();

    // getters y setters
    float gRadius();
    void sRadius(float nr);

    void resize(float factor);
    virtual string toString() const override;
	
private:
    float radius;
};

