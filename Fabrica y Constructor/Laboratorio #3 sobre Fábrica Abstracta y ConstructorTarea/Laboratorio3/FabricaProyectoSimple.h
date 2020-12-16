/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
FabricaProyectoSimple.h
Desarrollo de la clase FabricaProyectoSimple.h.
*/
#include "Tareas.h"
#include "Tarea.h"
#include "capaTareas.h"
#include "tipo.h"
#include "Fabrica.h"
#ifndef FABRICAPROYECTOSIMPLE_H
#define FABRICAPROYECTOSIMPLE_H
/*
Clase para fabricar una tarea simple
*/
class FabricaProyectoSimple: public Fabrica
{
public:
	FabricaProyectoSimple();//constructor
	~FabricaProyectoSimple();//destructor
	 
	 Tareas* crearTareas()override;// retorna el valor para inicializar una instancia de tarea simple
	
};
/*
Constructor

*/
FabricaProyectoSimple::FabricaProyectoSimple(){

}
/*
Destructor
*/

FabricaProyectoSimple::~FabricaProyectoSimple(){

}

/*
Retorna el valor para crear una instancia de tarea simple
*/
Tareas* FabricaProyectoSimple::crearTareas(){
	 	return new Tarea();
}

#endif