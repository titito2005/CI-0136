/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
AristaD.h
Desarrollo de la clase AristaD.
*/
#pragma once
#ifndef ARISTAD_H
#define ARISTAD_H

#include <sstream>
#include <iostream>

#include "Arista.h"

using namespace std;
/* REPRESENTA UNA ARISTA DIRIGIDA GEN�RICA */

class AristaD : public Arista//Hereda de la clase Arista.
{
public:
	explicit AristaD();//Constructor vac�o.
	explicit AristaD(string inicio, string fin);//Constructor con atributos de inicializaci�n.
	~AristaD();//Destructor.
	virtual string toString() const override;//Muestra los datos de la Arista.
	
private:
	string inicio;//Atributo inicio.
	string fin;//Atributo fin.
};

AristaD::AristaD(){//Constructor.
}

AristaD::AristaD( string inicio, string fin): inicio{inicio}, fin{fin}{//Constructor con los datos de inicializaci�n.
}

AristaD::~AristaD(){//Destructor.
	cout<<"Destruye la arista dirigida"<<endl;
}

string AristaD:: toString() const{//Muestra los datos de la Arista.
	ostringstream oss;
	oss<< "Arista Dirigida de: "<< inicio<<" a: "<<fin<<" ";
	return oss.str();
}

#endif // ARISTAD_H
