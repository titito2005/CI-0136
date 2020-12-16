/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
tipoAristaD.h
Desarrollo de la clase tipoAristaD.
Decorador dinámico para asignarle el tipo a las aristas.
*/
#pragma once

#ifndef TIPOARISTAD_H
#define TIPOARISTAD_H

#include <sstream>
#include <iostream>

using namespace std;

#include "Arista.h"

class tipoAristaD : public Arista //Clase tipoAristaD, hereda de Arista.
{
	public:
	tipoAristaD(Arista& arista , const string);//Constructor con parámetros.
	~tipoAristaD();//Destructor.
	virtual string toString() const override;//Muestra los datos de la arista.
	
	private:
	Arista& arista;//Atributo Arista.
	string tipo;//Atributo tipo.
};

tipoAristaD::tipoAristaD(Arista &arista, const string tipo):arista{arista}, tipo {tipo}{//Constructor con los datos de inicialización.
}

tipoAristaD::~tipoAristaD(){//Destructor.
	cout<<"Borrando decorador de Arista dinámico"<<endl;
	(&arista)->~Arista();
}

string tipoAristaD::toString()const{//Muestra los datos de la arista.
	ostringstream oss;
	
	oss<<arista.toString()<<" tipo: "<<tipo<<endl;
	
	return oss.str();
}

#endif // TIPOARISTAD_H