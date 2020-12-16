/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
capaTareasP.h
Desarrollo de la clase capaTareasP.h.
*/
#pragma once
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

#include "TareaP.h"
#include "TareasP.h"

// Este uso de la herencia no es muy apropiado porque una NeuronLayer NO 
// es un ejemplo de vector< Neuron >, es decir, NO es un vector lo que implica
// que se heredan muchos métodos que no tienen sentido para un NeuronLayer.
class capaTareasP : public vector < TareaP >, public TareasP< capaTareasP >//Clase capaTareasP, hereda vector < TareaP >, TareasP< capaTareasP >
{
public:
	// Construye una NeuronLayer con "count" neuronas.
	capaTareasP(int count);//Constructor con la cantidad de tareas a inicializar.
	~capaTareasP();//destructor de la capa de tareas.
	string toString();//muestra los datos de las tareas.
	TareaP* busqueTarea(int);//Busca una tarea segun su id y lo retorna.
	bool modificarTarea(int);//Modifica una tarea segun el id.
	bool eliminarTarea(int);//Busca y elimina una tarea segun el id.
private:
};

capaTareasP::capaTareasP(int count)//Crea la capa de tareas segun la cantidad deseada.
{
	while (count-- > 0){
		emplace_back(TareaP{});
	}
}

capaTareasP::~capaTareasP()//Destructor de la capa de tareas.
{
}

string capaTareasP::toString(){//Muestra los datos de la capa de tareas.
	ostringstream salida;
	salida<<"PROYECTO"<<endl;
	
	for (std::vector<TareaP>::iterator it = begin() ; it != end(); ++it){
		salida << it->toString();
		salida << "--------------------------------------------------------------------" <<endl;
	}
	return salida.str();
}

TareaP* capaTareasP::busqueTarea(int val){//Busca una tarea segun el id.
	TareaP* aux= NULL;
	bool encontrado=false;
	for (std::vector<TareaP>::iterator it = begin() ; it != end() && encontrado == false; ++it){
		aux= it->busqueTarea(val);
		if(aux!=NULL){
			encontrado=true;
		}
	}
	return aux;
}

bool capaTareasP::modificarTarea(int val){//Modifica la capa de tareas segun el id.
	bool encontrado=false;
	for (std::vector<TareaP>::iterator it = begin() ; it != end() && encontrado == false; ++it){
		encontrado=it->modificarTarea(val);
	}	
	return encontrado;
}

bool capaTareasP::eliminarTarea(int val){//Busca y elimina una tarea segun un id.
	bool encontrado=false;
	for (std::vector<TareaP>::iterator it = begin() ; it != end() && encontrado == false; ++it){
		if(it->gId()==val){
			erase(it);
			encontrado=true;
		}else{
			encontrado=it->eliminarTarea(val);
		}
	}	
	return encontrado;
}
