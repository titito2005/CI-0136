/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
capaTareas.h
Desarrollo de la clase capaTareas.h.
*/

#pragma once
#include <vector>
using namespace std;

#include "Tarea.h"
#include "Tareas.h"

#ifndef CAPATAREAS_H
#define CAPATAREAS_H
/*
Clase que representa una capa de tareas
*/
class capaTareas : public Tareas{
	
public:
	capaTareas();//constructor
	~capaTareas();//destructor
	void agregarTareas(Tareas*)override;//agrega tareas a la capa
	Tareas* busqueID(int)override;//busca una tarea
	string toString(int n)override;//imprime los datos de la clase
	vector<Tareas*> getVector() override;//retorna el vector de tareas

		
private:
	vector <Tareas*> capa;//VECTOR DE CLASE PADRE ABSTRACTA.
	string val;// atributo valor
};

/*
Constructor
*/
capaTareas::capaTareas(){
}

/*
Destructor
*/
capaTareas::~capaTareas(){
}

/*
Metodo que imprime datos de la clase 
*/
string capaTareas::toString(int n){
	ostringstream salida;
	string tab="";
	for(int i=0; i<n; i++){
			tab+="\t";
	}
	
		salida<<tab<<"Tarea id: " << muestreID() << "\n";
		salida<<tab<<"Nombre: "<<getNombre()<< "\n"; 
		salida<<tab<<"Fecha Inicio: "<<getInicio()<<"\n";
		salida<<tab<<"Fecha Final: "<< getFinal()<<"\n";
		salida<<tab<<"Responsable: "<< getResponsable()<<endl;
		salida<<endl;
		int valor=0;
		valor= n+1;
		for (std::vector<Tareas*>::iterator it = capa.begin() ; it != capa.end(); ++it){
				Tareas *aux=*it;
				salida<<aux->toString(valor);
		}
		
	return salida.str();
	
}
/*
Agrega una tarea a la capa
*/
void capaTareas::agregarTareas(Tareas* t1){

	capa.push_back(t1);
	
}

/*
Busca una tarea por su iD
*/
Tareas* capaTareas::busqueID(int ID){
	Tareas *aux=NULL;
	bool encontrado=false;
	if(muestreID()==ID){
		aux=this;
	}else{
		for (std::vector<Tareas*>::iterator it = capa.begin() ; it != capa.end() && encontrado == false; ++it){
				Tareas *auxiliar=*it;
				aux=auxiliar->busqueID(ID);
				if(aux!=NULL){
					encontrado=true;
				}
		}
	}
	return aux;
}

/*
Retorna el vector de tareas
*/
vector<Tareas*> capaTareas::getVector(){
	return capa;
}


#endif