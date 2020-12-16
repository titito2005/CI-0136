/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
colorAristaD.h
Desarrollo de la clase colorAristaD.
Decorador dinámico para asignarle el color a las aristas.
*/
#pragma once

#ifndef COLORARISTAD_H
#define COLORARISTAD_H

#include <sstream>
#include <iostream>

using namespace std;

#include "Arista.h"

class colorAristaD : public Arista//ClaseAristaD, hereda de Arista.
{
	public:
	colorAristaD(Arista& arista , const string);//Constructor con parámetros.
	~colorAristaD();//Destructor.
	virtual string toString() const override;//Muestra los datos de la Arista.
	
	private:
	Arista& arista;//Atributo arista.
	string color;//Atributo color.
};

colorAristaD::colorAristaD(Arista &arista, const string color):arista{arista}, color {color}{//Constructor con los datos de inicialización.
}

colorAristaD::~colorAristaD(){//Destructor.
	cout<<"Borrando decorador de Arista dinamico"<<endl;
	(&arista)->~Arista();
}

string colorAristaD::toString()const{//Muestra los datos de la Arista.
	ostringstream oss;
	oss<<arista.toString()<<" color: "<<color<<endl;
	return oss.str();
}

#endif // COLORARISTAD_H