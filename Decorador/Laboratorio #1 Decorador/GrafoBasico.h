/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
GrafoBasico.h
Desarrollo de la clase GrafoBasico.
*/
#ifndef GRAFOBASICO_H
#define GRAFOBASICO_H

#include "Grafo.h"
#include "TipoGrafo.h"

/* REPRESENTA UN GRAFO BÁSICO */
class GrafoBasico : public TipoGrafo//Hereda de TipoGrafo.h.
{
public:
	GrafoBasico();//Constructor.
	~GrafoBasico();//Destructor.
	virtual string mostrarGrafoB();//Muestra el grafo.
};

GrafoBasico::GrafoBasico()//Constructor.
{

}

GrafoBasico::~GrafoBasico()//Destructor.
{

}

string GrafoBasico::mostrarGrafoB(){//Muestra el grafo.
	string mostrar="Se genero un grafo Basico";
	return mostrar;
}
#endif // GRAFOBASICO_H
