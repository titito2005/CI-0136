/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
FabricaProyectoCompuesto.h
Desarrollo de la clase FabricaProyectoCompuesto.h.
*/
#include "Tareas.h"
#include "Tarea.h"
#include "capaTareas.h"
#include "tipo.h"
#include "Fabrica.h"
#ifndef FABRICAPROYECTOCOMPUESTO_H
#define FABRICAPROYECTOCOMPUESTO_H
/*
Clase para fabricar un proyecto compuesto
*/
class FabricaProyectoCompuesto: public Fabrica
{
public:
	FabricaProyectoCompuesto();//constructor
	~FabricaProyectoCompuesto();//destructor
	 
	 Tareas* crearTareas()override;// retorna el valor para inicializar una instancia de tareas compuestas
	
};
/*
Constructor
*/
FabricaProyectoCompuesto::FabricaProyectoCompuesto(){

}

/*
Destructor
*/

FabricaProyectoCompuesto::~FabricaProyectoCompuesto(){

}

/*
Retorna el valor para crear una instancia de tareas compuestas
*/
Tareas* FabricaProyectoCompuesto::crearTareas(){
	 	return new capaTareas();
}

#endif