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

/* REPRESENTA UN GRAFO COMPLEJO GEN�RICO */
class Grafo
{
public:
	Grafo();//Constructor.
	virtual ~Grafo();//Destructor.

private:
	vector< Nodo > nodos;//Vector de nodos.
};

Grafo::Grafo()//Constructor vac�o para poder heredar.
{

}

Grafo::~Grafo()//Destructor vac�o para poder heredar.
{

}
