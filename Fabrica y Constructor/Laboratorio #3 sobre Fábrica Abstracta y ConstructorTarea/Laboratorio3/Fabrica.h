/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
Fabrica.h
Desarrollo de la clase Fabrica.h.
*/
#include "Tareas.h"
#include "Tarea.h"
#include "capaTareas.h"
#include "tipo.h"
#ifndef FABRICA_H
#define FABRICA_H
/*
Clase asbtracta Fabrica
*/
class Fabrica
{
public:
	
	Fabrica();//constructor
	~Fabrica();//destructor
	
	virtual Tareas* crearTareas()=0;//metodo para crear proyectos

	
	
};
/*
Constructor
*/

Fabrica::Fabrica(){

}
/*
Destructor
*/
Fabrica::~Fabrica(){
	
}

#endif