/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
AristaND.h
Desarrollo de la clase AristaND.
*/
#ifndef ARISTAND_H
#define ARISTAND_H

#include "Arista.h"

/* REPRESENTA UNA ARISTA NO DIRIGIDA GENÉRICA */
class AristaND : public Arista//Hereda de la clase Arista.
{
public:
	explicit AristaND();//Constructor vacío.
	explicit AristaND(string inicio, string fin);//Constructor con datos iniciales.
	virtual ~AristaND();//Destructor.
	virtual string toString() const override;//Muestra los datos de la arista.
	
private:
	string inicio;//Atributo de inicio.
	string fin;//Atributo de fin.
};

AristaND::AristaND(){//Constructor vacío.
}

AristaND::AristaND( string inicio, string fin): inicio{inicio}, fin{fin}{//Constructor con atributos de inicialización.
}

AristaND::~AristaND(){//Destructor de la Arista.
	cout<<"Destruye la arista no dirigida"<<endl;
}

string AristaND:: toString() const{//Muestra los datos de la Arista.
	ostringstream oss;
	oss<< "Arista de: "<< inicio<<" a: "<<fin<<" ";
	return oss.str();
}
#endif // ARISTAND_H
