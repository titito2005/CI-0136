/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
GrafoUML.h
Desarrollo de la clase GrafoUML.
*/
#ifndef GRAFOUML_H
#define GRAFOUML_H

#include "Grafo.h"
#include "TipoGrafo.h"

/* REPRESENTA UN GRAFO NOTACIÓN UML */
class GrafoUML : public TipoGrafo//Hereda de TipoGrafo.h.
{
public:
	GrafoUML();//Constructor.
	~GrafoUML();//Destructor.
	virtual string mostrarGrafo();//Muestra Grafo.
};

GrafoUML::GrafoUML()//Constructor.
{

}

GrafoUML::~GrafoUML()//Destructor.
{

}

string GrafoUML::mostrarGrafo(){//Muestra grafo.
	string mostrar="Se genero un grafo UML";
	return mostrar;
}
#endif // GRAFOUML_H
