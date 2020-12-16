/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
ConstructorSerializadorXML.h
Desarrollo de la clase ConstructorSerializadorXML.h
*/
#pragma once
#include <sstream>
using namespace std;

#include "ConstructorSerializadorAbstracto.h"

class ConstructorSerializadorXML : public ConstructorSerializadorAbstracto
{
public:
	ConstructorSerializadorXML();//constructor
	~ConstructorSerializadorXML();//destructor

	/* SERIALIZADORES */
	virtual void inicioObjeto(string nombreObjeto) override;
	virtual void finObjeto() override;
	virtual void serializar(Tareas*, int) override;
	virtual string obtSerializacion() override;

private:
	string serializacion; // el producto del Constructor
};

/*
Constructor
*/

ConstructorSerializadorXML::ConstructorSerializadorXML(){
	serializacion="";
	cout<<"Creando un Serializador XML"<<endl;
}

/*
Destrcutor
*/
ConstructorSerializadorXML::~ConstructorSerializadorXML(){
}

/*
Serializador inicia objeto
*/

void ConstructorSerializadorXML::inicioObjeto(string nombreObjeto){
	serializacion = serializacion + "< " + nombreObjeto + ' ';
}

/*
Serializador fin objeto
*/
void ConstructorSerializadorXML::finObjeto(){
	serializacion = serializacion + ">";
}

/*
Metodo que serializa tareas
*/
void ConstructorSerializadorXML::serializar(Tareas *t, int n){
	string tab="";
		for(int i=0; i<n; i++){
			tab+="\t";
	}
	
	serializacion= serializacion +tab+ "<" + " "+t->getNombre()+" ";
	
	
	serializacion = serializacion + "Nombre" + '=' + '"' + t->getNombre() + '"' + " ";
	serializacion = serializacion + "Fecha Inicio" + '=' + '"' + t->getInicio() +  '"'+ " ";
	serializacion = serializacion + "Fecha Final" + '=' + '"' +t->getFinal() + '"'+ " ";
	serializacion = serializacion + "Responsable" + '='+ '"' +t->getResponsable() + '"'+ " ";	
	
	serializacion = serializacion + "\n\n";
	
	
	vector<Tareas*> capas = t->getVector();
	
	if(capas.size()>0){
		for (std::vector<Tareas*>::iterator it = capas.begin() ; it != capas.end(); ++it){
			Tareas *aux=*it;
			serializar(aux, n+1);
		}
	}
	serializacion= serializacion + tab + ">";
	serializacion = serializacion + "\n";
}

/*
Retorna el serializador
*/

string ConstructorSerializadorXML::obtSerializacion()
{
	return serializacion;
}