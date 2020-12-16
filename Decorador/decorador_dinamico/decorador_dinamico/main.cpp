#include <iostream>
using namespace std;

#include "Shape.h"
#include "Circle.h"
#include "ColoredShape.h"
#include "TransparentShape.h"

int main() {
	Circle circle{ 0.5f }; // se crea un cículo
	cout << circle.toString() << endl;

	ColoredShape redCircle{ circle, "red" }; // se decora con color
	cout << redCircle.toString() << endl;
	
	redCircle.resize(3.24);
	
	cout << redCircle.toString() << endl;
	
	TransparentShape demiCircle{ circle, 85 }; // se decora con transparencia
	cout << demiCircle.toString() << endl;
	
	Shape& s = *(new ColoredShape{ *(new Circle{0.3f}), "black" });
	cout << s.toString() << endl;
	
	// se pueden componer figuras coloreadas con figuras transparentes en una sola creación:
	TransparentShape circuloDecorado {*(new ColoredShape { *(new Circle{23}), "green"}), 64};
	cout << circuloDecorado.toString() << endl;
	
	cin.ignore();
}