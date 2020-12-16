/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
capaTareasP.h
Desarrollo de la clase capaTareasP.h.
*/

#pragma once
#include <vector>
using namespace std;

#include "TareaH.h"
#include "TareasH.h"
/*
Clase que representa una capa de tareas 
*/
class CapasDeTareasH : public TareasH
{
public:
	// Construye una CapasDeTarea con "count" tareas.
	CapasDeTareasH(int count);//Constructor de la clase
	~CapasDeTareasH();//Destructor

	unsigned int gId();//Devuelve el id
	TareaH* begin() override;//Devulve la primea posicion
	TareaH* end() override;//Devulve la ultima posicion
	TareaH* next() override;//Devulve la siguiente posicion
	void connect_to(TareasH* other) override;//Conecta dos clases
	//void definaCapa();
	TareaH* busqueTarea(int);//Buca una tarea por el id
	bool modificarTarea(int);//Modifica una tarea segun el id
	string toString() override;//Imprime los datos de la clase
	bool eliminarTarea(int );//Elimina una tarea segun el id

private:
	static unsigned int idg;

	int id;//atributo id
	vector< TareaH > tareas;//vector de tareas
	int pos;//atributo posicion
	TareaH* cursor;//Cursor del vector
	string nombreProyecto;//Nombre del proyecto
	string fechaInicio;//Inicio del proyecto
	string fechaFinal;//Final del proyecto
	string responsable;//Responsable de la tarea

};

// Definición de variables static:
unsigned int CapasDeTareasH::idg = 0;

/*
Constructor de la clase
*/
CapasDeTareasH::CapasDeTareasH(int count)
{
	this->id = CapasDeTareasH::idg++;
	while (count-- > 0)
		tareas.emplace_back(TareaH{});
	pos = 0;
	cursor = &tareas[pos];
}

/*
Destructor de la clase
*/
CapasDeTareasH::~CapasDeTareasH()
{
}
/*
Metodo que retorna el Id de la capa
*/
unsigned int CapasDeTareasH::gId()
{
	return id;
}

/*
Devuelve la primera posicion
*/
TareaH* CapasDeTareasH::begin()
{
	pos = 0;
	cursor = &tareas[pos];
	return cursor;
}

/*
Devuelve la ultima posicion
*/
TareaH* CapasDeTareasH::end()
{
	return 0;
}
/*
Devuelve la siguinete posicion
*/
TareaH* CapasDeTareasH::next()
{
	if (pos < tareas.size() - 1) {
		pos++;
		cursor = &tareas[pos];
	}
	else cursor = 0;
	return cursor;
}

/*
Metodo para conectar clases
*/

void CapasDeTareasH::connect_to(TareasH* other)
{
	TareaH* from = this->begin();
	while (from != 0) {
		TareaH* to = other->begin();
		while (to != 0) {
			from->out_push_back(*to);
			to->in_push_back(*from);
			to = other->next();
		}
		from = this->next();
	}
}

/*
Busca una tarea segun el id
*/
TareaH* CapasDeTareasH::busqueTarea(int val){
	TareaH* aux= NULL;
	bool encontrado=false;
	for (std::vector<TareaH>::iterator it = tareas.begin() ; it != tareas.end() && encontrado == false; ++it){
		aux= it->busqueTarea(val);
		if(aux!=NULL){
			encontrado=true;
		}
	}
	return aux;
}

/*
Modifica la capa de tareas segun el id
*/
bool CapasDeTareasH::modificarTarea(int val){
	bool encontrado=false;
	for (std::vector<TareaH>::iterator it = tareas.begin() ; it != tareas.end() && encontrado == false; ++it){
		encontrado=it->modificarTarea(val);
	}	
	return encontrado;
}

/*
Muestra los datos de la capa de tareas
*/
string CapasDeTareasH::toString()
{
	ostringstream salida;
	salida<<"PROYECTO"<<endl;
	
	for (auto n : tareas)
		salida << n.toString();
		salida << "--------------------------------------------------------------------" <<endl;

	return salida.str();
}
/*
Elimina una tarea segun el id
*/
bool CapasDeTareasH::eliminarTarea(int val){
	bool encontrado=false;
	for (std::vector<TareaH>::iterator it = tareas.begin() ; it != tareas.end() && encontrado == false; ++it){

		if(it->gId()==val){
		
			tareas.erase(it);
			encontrado=true;
		}else{
			
			encontrado=it->eliminarTarea(val);
		}
	}	
	return encontrado;
}