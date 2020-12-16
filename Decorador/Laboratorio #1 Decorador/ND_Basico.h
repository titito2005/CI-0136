/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
ND_Basico.h
Desarrollo de la clase ND_Basico.
*/
#ifndef ND_BASICO_H
#define ND_BASICO_H

#include <sstream>
#include <iostream>

#include "Nodo.h"
using namespace std;

/* REPRESENTA UN NODO GENÉRICO DE GRAFO */
class ND_Basico : public Nodo//Hereda de tipo Nodo.
{
public:
	explicit ND_Basico();//Constructor vacío.
	explicit ND_Basico(string nombreNodo);//Constructor con datos iniciales.
	virtual ~ND_Basico();//Destructor.
	virtual string toString() const override;//Muestra los datos de los nodos.
private:
    string nombre;//Atributo nombre del nodo.

};

ND_Basico::ND_Basico()//Constructor vacío.
{

}
ND_Basico::ND_Basico(string nombreNodo)//Constructor que recibe de parámetro del nombre.
{
nombre=nombreNodo;
}

ND_Basico::~ND_Basico()//Destructor del nodo.
{
cout<<"Destruye el nodo"<<endl;
}

string ND_Basico :: toString() const{//Muestra los datos del nodo.
    ostringstream oss;
	oss<< "Nombre Nodo: "<< nombre;
	return oss.str();

}

#endif // ND_BASICO_H
