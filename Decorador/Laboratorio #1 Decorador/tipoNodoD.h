/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
tipoNodoD.h
Desarrollo de la clase tipoNodoD.
Decorador dinámico para asignarle el tipo a los nodos.
*/
#ifndef tipoNodoD_H
#define tipoNodoD_H
#pragma once
#include <sstream>
#include <iostream>
#include "Nodo.h"

using namespace std;

class tipoNodoD : public Nodo//Clase tipoNodoD, hereda de Nodo.
{
    public:
        tipoNodoD(Nodo& nodo,const string);//Constructor con parámetros.
        virtual ~tipoNodoD();//Destructor.
        virtual string toString() const ;//Muestra los datos del nodo.



    private:
        Nodo& nodoD;//Atributo Nodo.
        string tipoD;//Atributo tipo.
};

tipoNodoD::tipoNodoD(Nodo& nodo,const string tipo):nodoD{nodo}, tipoD{tipo}{//Constructor con los datos de inicialización.
}

tipoNodoD::~tipoNodoD()//Destructor.
{
    cout<<"Borrando decoradorNodoDinamico"<<endl;
	(&nodoD)->~Nodo();
}

string tipoNodoD::toString()const{//Muestra los datos del nodo.
	ostringstream oss;

	oss<<nodoD.toString()<<" ,tipo: "<<tipoD<<endl;

	return oss.str();
}

#endif // DECORADORNODO_H
