/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
TipoGrafo.h
Desarrollo de la clase TipoGrafo.
*/
#ifndef TIPOGRAFO_H
#define TIPOGRAFO_H

#include "Grafo.h"
/* CLASE DE TIPOGRAFO*/
class TipoGrafo
{
public:
	TipoGrafo();//Constructor.
	virtual ~TipoGrafo();//Destructor.

private:
	Grafo g;//Grafo.
};

TipoGrafo::TipoGrafo()//Constructor vacío para poder heredar.
{

}

TipoGrafo::~TipoGrafo()//Destructor vacío para poder heredar.
{

}
#endif // TIPOGRAFO_H
