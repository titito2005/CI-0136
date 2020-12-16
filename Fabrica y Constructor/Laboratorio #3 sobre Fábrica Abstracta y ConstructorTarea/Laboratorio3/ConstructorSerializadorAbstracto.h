/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
ConstructorSerializadorAbstracto.h
Desarrollo de la clase ConstructorSerializadorAbstracto.h
*/
#pragma once
#include <vector>
#include "Tareas.h"
#include "Tarea.h"
#include "capaTareas.h"
#include <iostream>
#include <string>
#include <utility>
using namespace std;

class ConstructorSerializadorAbstracto{
public:
	ConstructorSerializadorAbstracto() {};//Constructor de la clase
	~ConstructorSerializadorAbstracto() {};//Destructor de la clase

	/* SERIALIZADORES */
	virtual void inicioObjeto(string) = 0;
	virtual void finObjeto() = 0;
	virtual void serializar(Tareas*, int n) = 0;
	virtual string obtSerializacion() = 0;

private:
};

