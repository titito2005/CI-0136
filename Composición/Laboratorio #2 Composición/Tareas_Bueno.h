/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
Tareas.h
Desarrollo de la clase Tareas.h.
*/
#pragma once
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#ifndef TAREAS_H
#define TAREAS_H
/*
Clase que representa Tareas
*/
class Tareas{

public:
	Tareas();//Constrcutor
	~Tareas();//Destructor
	
	/*
	Metodo para mostrar los datos de la clase
	*/
	virtual string toString(int n){
		ostringstream salida;
		string tab="";
		for(int i=0; i<n; i++){
			tab+="\t";
		}
		salida<<tab<<"Tarea id: " << id << "\n"; 
		salida<<tab<<"Nombre: "<<nombreTarea<<"\n";
		salida<<tab<<"Fecha Inicio: "<<fechaInicio<<"\n";
		salida<<tab<<"Fecha Final: "<< fechaFinal<<"\n";
		salida<<tab<<"Responsable: "<< responsable<<endl;
		salida<<endl;
		return salida.str();
	}
	/*
	Metodo que agrega nombrea la tarea
	*/
	virtual void agregarNombre(string nombre){
		nombreTarea=nombre;
	}

	/* 
	Metodo que agrega fecha de inicio
	*/
	virtual void agregarFechaInicio(string fecha){
		fechaInicio=fecha;
	}
	/*
	Metodo que agrega fecha final
	*/
	virtual void agregarFechaFinal(string fecha){
		fechaFinal=fecha;
	}
	/*
	Metodo que agrega responsable
	*/
	virtual void agregarResponsable(string nombre){
		responsable=nombre;
	}
	/*
	Metodo que retorna el id
	*/
	virtual unsigned int muestreID(){
		return id;
	}

	/*
	Metodo para agergar datos a las tareas
	*/
	virtual void agregarDatos(){
		string datos="";
		cout<<"Ingrese la fecha de inicio"<<endl;
		cin>>datos;
		fechaInicio= datos;
		cout<<"Ingrese la fecha de fin"<<endl;
		cin>>datos;
		fechaFinal= datos;
		cout<<"Ingrese el responsable"<<endl;
		cin>>datos;
		responsable= datos;
		
	}

	/*
	Metodo que busca una tarea
	*/
	virtual Tareas* busqueID(int ID){
		Tareas *aux=NULL;
			if(muestreID()==ID){
				aux=this;
			}
		return aux;
	}
	/*
	Metodo que indica que no se puene agregar mas tareas
	*/
	
	virtual void agregarTareas(Tareas* t1){
		cout<<"No puedo agregar más tareas, soy simple"<<endl;
	}
	
	/*
	Metodo que retorna el atrbuto agregado
	*/
	virtual bool getAgregado(){
		return agregado;
	}

	/*
	Metodo que modifica el atributo agregado
	*/
	virtual void agregarAgregado(bool n){
		agregado=n;
	}

	/*
	Retorna el nombre de la tarea
	*/
	virtual string getNombre(){
		return nombreTarea;
	}
	
	/*
	Retorna la fecha de inicio de la tarea
	*/
	virtual string getInicio(){
		return fechaInicio;
	}
	/*
	Retorna la fecha de finalizacion de la tarea
	*/
	virtual string getFinal(){
		return fechaFinal;
	}
	
	/*
	Retorna el responsable de la tarea
	*/
	virtual string getResponsable(){
		return responsable;
	}
	
	/*
	Retorna el vector de tareas
	*/
	virtual vector<Tareas*> getVector(){
		vector<Tareas*> capa;
		return capa;
		
	}
private:	
	static unsigned int idg;
	unsigned int id;//atributo id
	
	string nombreTarea;//Nombre de la tarea
	string fechaInicio;//Fecha de inicio
	string fechaFinal;//Fecha final
	string responsable;//Responsable de la tarea
	
	bool agregado;
};

unsigned int Tareas::idg = 0;

/*
Constructor
*/
Tareas::Tareas(){
	this->id =Tareas::idg++;
	nombreTarea= "";
	fechaInicio= "";
	fechaFinal= "";
	responsable= "";
	agregado=false;
}

/*
Destructor
*/

Tareas::~Tareas(){
}
#endif