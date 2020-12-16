/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
Arista.h
Desarrollo de la clase Arista.
*/
#pragma once
//ARISTA PADRE
#ifndef ARISTA_H
#define ARISTA_H

/* REPRESENTA UNA ARISTA GENÉRICA */
#include <string>
#include <iostream>

using namespace std;

class Arista//Clase básica Arista.
{
public: 
	Arista();//Constructor.
	virtual ~Arista();//Destructor.
	virtual string toString() const = 0;//Muestra los datos de la arista.
};

Arista::Arista(){//Constructor vacío para heredar.

}

Arista::~Arista()//Destructor vacío para heredar.
{

}

#endif // ARISTA_H
