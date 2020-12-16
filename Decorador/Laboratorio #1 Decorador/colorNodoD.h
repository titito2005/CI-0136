/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
colorNodoD.h
Desarrollo de la clase colorNodoD.
Decorador dinámico para asignarle el color a los nodos.
*/
#ifndef colorNodoD_H
#define colorNodoD_H
#pragma once
#include <sstream>
#include <iostream>
#include "Nodo.h"

using namespace std;



class colorNodoD : public Nodo//Clase colorNodoD, hereda de Nodo.
{
    public:
        colorNodoD(Nodo& nodo,const string);//Constructor con parámetros.
        virtual ~colorNodoD();//Destructor.
        virtual string toString() const ;//Muestra los datos del nodo.



    private:
        Nodo& nodoD;//Atributo nodo.
        string color;//Atributo color.
};

colorNodoD::colorNodoD(Nodo& nodo,const string color):nodoD{nodo}, color{color}{//Constructor con los datos de inicialización.
}

colorNodoD::~colorNodoD()//Destructor.
{
    cout<<"Borrando decoradorNodoDinamico"<<endl;
	(&nodoD)->~Nodo();
}

string colorNodoD::toString()const{//Muestra los datos del nodo.
	ostringstream oss;

	oss<<nodoD.toString()<<" color del Nodo: "<<color<<endl;

	return oss.str();
}

#endif // DECORADORNODO_H
