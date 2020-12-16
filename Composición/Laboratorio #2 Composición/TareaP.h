/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
TareaP.h
Desarrollo de la clase TareaP.h.
*/
#pragma once
#include <vector>
#include <sstream>
#include <iostream>
#include <cstring>

using namespace std;

#include "TareasP.h"

class TareaP : public TareasP<TareaP>{//Clase TareaP, hereda TareasP <TareaP>
	public:
		TareaP();//Constructor vacío.
		TareaP(char*,char*,char*,char*);//Constructor inicializado.
		~TareaP();
		
		string toString();//ToString. Muestra los datos de la tarea.
		string toString2();
		string toString3();
		unsigned int gId();//Muestra el id de la tarea.
		void out_push_back(TareaP& other);//Ingresa nueva tarea al vector de out.
		void in_push_back(TareaP& other);//Ingresa nueva tarea al vector de in.
	    TareaP* begin() { return this; };//Retorna la primera posicion del vector.
	    TareaP* end() { return this + 1; };//Retorna la ultima posicion del vector.
		TareaP* busqueTarea(int);//Busca una tarea segun el id.
		bool modificarTarea(int);//Modifica los atributos de la tarea segun el ide.
		bool eliminarTarea(int);//Elimina una tarea segun el id.
		
		char* getNombre();//retorna el nombre de la tarea.
		char* getColaborador();//retorna el colaborador de la tarea.
		char* getInicio();//retorna el incio de la tarea (fecha).
		char* getFinal();//retorna el final de la tarea (fecha).
		
		void definaNombre(char*);//define el nombre de la tarea.
		void definaColaborador(char*);//define el colaborador de la tarea.
		void definaInicio(char*);//define el inicio de la tarea.
		void definaFinal(char*);//define el final de la tarea.
		
	private:
		vector<TareaP> in, out;//vectores de in y out para tareas
		static unsigned int idg;//id
		unsigned int id;//id

		char* nombre;//atributo nombre.
		char* colaborador;//atributo colaborador.
		char* inicio;//atributo incio.
		char* final;//atributo final.
};

unsigned int TareaP::idg=0;

TareaP::TareaP(char* nom, char* cola, char* ini, char* fin){//Constructor inicializado.
	this->id = TareaP::idg++;
	this->nombre=nom;
	this->colaborador=cola;
	this->inicio=ini;
	this->final=fin;
}

TareaP::TareaP(){//Constructor vacío.
	this->id = TareaP::idg++;
	this->nombre="";
	this->colaborador="";
	this->inicio="";
	this->final="";
}

TareaP::~TareaP(){//Destructor.
}

TareaP* TareaP::busqueTarea(int val){//Busca la tarea en los vectores segun el id.
	TareaP* aux=NULL;
	
	if(id==val){
		aux=this;
	}else{
		if(out.size()>0){
			bool encontrado=false;
			for (std::vector<TareaP>::iterator it = out.begin() ; it != out.end() && encontrado==false; ++it){
					aux= it->busqueTarea(val);
					if(aux!=NULL){
						encontrado=true;
					}
			}
		}		
		
	}
	return aux;
}
bool TareaP::modificarTarea(int val){//Busca y modifica la tarea segun el id.
	bool encontrado=false;
	if(id==val){
		string aux;
	
		cout<<"Defina nombre para la tarea "<<gId()<<endl;
		cin>>aux;
		char *cstr = new char[aux.length() + 1];
		strcpy(cstr, aux.c_str());
		definaNombre(cstr);
		
		cin.clear();
		fflush(stdin);
		
		cout<<"Defina colaborador para la tarea "<<gId()<<endl;
		cin>>aux;
		char *cstr1 = new char[aux.length() + 1];
		strcpy(cstr1, aux.c_str());
		definaColaborador(cstr1);
		
		cin.clear();
		fflush(stdin);
		
		cout<<"Defina inicio para la tarea "<<gId()<<endl;
		cin>>aux;
		char *cstr2 = new char[aux.length() + 1];
		strcpy(cstr2, aux.c_str());
		definaInicio(cstr2);
		
		cin.clear();
		fflush(stdin);
		
		cout<<"Defina final para la tarea "<<gId()<<endl;
		cin>>aux;
		char *cstr3 = new char[aux.length() + 1];
		strcpy(cstr3, aux.c_str());
		definaFinal(cstr3);
		
		cin.clear();
		fflush(stdin);
		
		encontrado=true;
		
	}else{
		if(out.size()>0){
			for (std::vector<TareaP>::iterator it = out.begin(); it != out.end() && encontrado==false; ++it){
					encontrado = it->modificarTarea(val);
			}
		}			
	}
	return encontrado;
}

bool TareaP::eliminarTarea(int val){//Busca y elimina la tarea segun el id.
	bool encontrado=false;
		if(out.size()>0){
			for (std::vector<TareaP>::iterator it = out.begin(); it != out.end() && encontrado==false; ++it){
				if(it->gId()==val){
				out.erase(it);
				encontrado=true;
				}else{
				encontrado=it->eliminarTarea(val);
				}
			}
		}
	return encontrado;	
}

void TareaP:: definaNombre(char* nom){//define el nombre de una tarea.
	this->nombre=nom;
}

void TareaP:: definaColaborador(char* cola){//define el colaborador de una tarea.
	this->colaborador=cola;
}

void TareaP:: definaInicio(char* ini){//define el incio de una tarea.
	this->inicio=ini;
}

void TareaP:: definaFinal(char* fin){//define el final de una tarea.
	this->final=fin;
}

unsigned int TareaP::gId(){//retorna el id de la tarea.
	return id;
}

char* TareaP::getNombre(){//retorna el nombre de la tarea.
	return nombre;
}

char* TareaP::getColaborador(){//retorna el colaborador de la tarea.
	return colaborador;
}

char* TareaP::getInicio(){//retorna el colaborador de la tarea.
	return inicio;
}

char* TareaP::getFinal(){//retorna el final de la tarea.
	return final;
}

void TareaP::out_push_back(TareaP& other){//push_back del vector out.
	out.push_back(other);
}

void TareaP::in_push_back(TareaP& other){//push back del vector un.
	in.push_back(other);
}

string TareaP::toString3(){//Métodos to string para mostrar los datos de la tarea.
	ostringstream salida;
	
	salida <<"\t""\t""\t"<<"ID:" << id << endl;
	salida <<"\t""\t""\t"<<"Tarea:" << nombre << endl;
	salida <<"\t""\t""\t"<<"Colaborador: "<< colaborador << endl;
	salida <<"\t""\t""\t"<<"Inicio: "<< inicio << endl;
	salida <<"\t""\t""\t"<<"Final: "<< final << endl;
	salida <<endl;
	
	for (auto n : out){
		salida <<n.toString3() << endl;
	}
	
	return salida.str();
}

string TareaP::toString2(){//Métodos to string para mostrar los datos de la tarea.
	ostringstream salida;
	
	salida <<"\t""\t"<<"ID:" << id << endl;
	salida <<"\t""\t"<<"Tarea:" << nombre << endl;
	salida <<"\t""\t"<<"Colaborador: "<< colaborador << endl;
	salida <<"\t""\t"<<"Inicio: "<< inicio << endl;
	salida <<"\t""\t"<<"Final: "<< final << endl;
	salida <<endl;
	
	for (auto n : out){
		salida <<n.toString3() << endl;
	}
	
	return salida.str();
}

string TareaP::toString(){//Métodos to string para mostrar los datos de la tarea.
	ostringstream salida;
	
	salida <<"\t"<<"ID:" << id << endl;
	salida <<"\t"<<"Tarea:" << nombre << endl;
	salida <<"\t"<<"Colaborador: "<< colaborador << endl;
	salida <<"\t"<<"Inicio: "<< inicio << endl;
	salida <<"\t"<<"Final: "<< final << endl;
	salida <<endl;
	
	for (auto n : out){
		salida <<n.toString2() << endl;
	}
	return salida.str();
}
