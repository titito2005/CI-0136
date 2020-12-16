/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
ConstructorSerializadorAbstracto.h
Desarrollo de la clase ConstructorSerializadorJSON.h
*/
#pragma once
#include <sstream>
using namespace std;

#include "ConstructorSerializadorAbstracto.h"
/*
Clase que representa un ConstructorSerializador estilo json
*/
class ConstructorSerializadorJSON : public ConstructorSerializadorAbstracto
{
public:
	ConstructorSerializadorJSON();//constructor
	~ConstructorSerializadorJSON();//destrcutor

	/* SERIALIZADORES */
	virtual void inicioObjeto(string nombreObjeto) override;
	virtual void finObjeto() override;
	virtual void serializar(Tareas*, int) override;
	virtual string obtSerializacion() override;

private:
	string serializacion; // producto del constructor
};
/*
Constructor
*/
ConstructorSerializadorJSON::ConstructorSerializadorJSON(){
	serializacion="";
	cout<<"Creando un Serializador JSON"<<endl;
}

/*
Destrcutor
*/
ConstructorSerializadorJSON::~ConstructorSerializadorJSON(){
}
/*
Serializador inicia objeto
*/
void ConstructorSerializadorJSON::inicioObjeto(string nombreObjeto){
	serializacion = "{ " + nombreObjeto;
}

/*
Serializador fin objeto
*/
void ConstructorSerializadorJSON::finObjeto(){
	serializacion = serializacion + "}";
}
/*
Metodo que serializa tareas
*/
void ConstructorSerializadorJSON::serializar(Tareas *t, int n){
	string tab="";
		for(int i=0; i<n; i++){
			tab+="\t";
	}
	
	
	serializacion= serializacion +tab+ "{" + " " +t->getNombre() + " ";
	
	
	serializacion = serializacion + '"' + "Nombre" + '"' + ':' + t->getNombre() + ", ";
	serializacion = serializacion + '"' + "Fecha Inicio" + '"' + ':' + t->getInicio() + ", ";
	serializacion = serializacion + '"' + "Fecha Final" + '"' + ':' + t->getFinal() + ", ";
	serializacion = serializacion + '"' + "Responsable" + '"' + ':' + t->getResponsable() + ", ";	
	
	serializacion = serializacion + "\n\n";
	
	
	
	vector<Tareas*> capas = t->getVector();
	
	if(capas.size()>0){
		for (std::vector<Tareas*>::iterator it = capas.begin() ; it != capas.end(); ++it){
			Tareas *aux=*it;
			serializar(aux, n+1);
		}
	}
	serializacion= serializacion + tab + "}";
	serializacion = serializacion + "\n";
}
/*
Retorna el serializador
*/
string ConstructorSerializadorJSON::obtSerializacion()
{
	return serializacion;
}