/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
Grafo.h
Desarrollo de la clase Grafo.
*/
#pragma once
#include <vector>
using namespace std;

#include "Nodo.h"

/* REPRESENTA UN GRAFO COMPLEJO GENÉRICO */
class Grafo
{
public:
	Grafo();//Constructor.
	virtual ~Grafo();//Destructor.

private:
	vector< Nodo > nodos;//Vector de nodos.
};

Grafo::Grafo()//Constructor vacío para poder heredar.
{

}

Grafo::~Grafo()//Destructor vacío para poder heredar.
{

}
