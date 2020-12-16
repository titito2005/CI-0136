/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
ND_UML.h
Desarrollo de la clase ND_UML.
*/
#ifndef ND_UML_H
#define ND_UML_H

#include "Nodo.h"

/* REPRESENTA UN NODO UML DE GRAFOUML */
class ND_UML : public Nodo//Hereda de Nodo.
{
public:
	explicit ND_UML();//Constructor vacío.
	explicit ND_UML(string nombreNodo);//Constructor con datos iniciales.
	virtual ~ND_UML();//Destructor.
	virtual string toString() const override;//Muestra datos del nodo.
private:
	string nombre;//Atributo nombre.
};

ND_UML::ND_UML()//Constructor vacío.
{

}
ND_UML::ND_UML(string nombreNodo){//Constructor que recibe el nombre de parámetro
	nombre=nombreNodo;

}

ND_UML::~ND_UML()//Destructor del nodo.
{
	cout<<"Destruye el nodo"<<endl;

}

string ND_UML::toString() const{//Muestra los datos del Nodo.
    ostringstream oss;
	oss<< " Nombre Nodo_UML: "<< nombre;
	return oss.str();

}

#endif // ND_UML_H
