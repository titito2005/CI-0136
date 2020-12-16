/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
Nodo.h
Desarrollo de la clase Nodo.
*/
#pragma once
/* REPRESENTA UN NODO GENÉRICO DE GRAFO GENÉRICO */
class Nodo//Clase principal de Nodo.h.
{
public:
	Nodo();//Constructor.
	virtual ~Nodo();//Destructor.
	virtual string toString() const = 0;//Muestra los datos del nodo.
};

Nodo::Nodo()//Constructor de Nodo vacío para heredar.
{

}

Nodo::~Nodo()//Destructor vacío para heredar.
{

}
