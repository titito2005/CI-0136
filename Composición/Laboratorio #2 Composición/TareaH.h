/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
capaTareasP.h
Desarrollo de la clase capaTareasP.h.
*/

#pragma once
#include <vector>
#include <sstream>
using namespace std;

#include "TareasH.h"
/*
Clase que representa una Tarea
*/

class TareaH : public TareasH
{
public:
	TareaH();//Constructor de la clase sin parametros
	TareaH(string nombre,string fechaI,string fechaF,string responsableU);//constructor con parametros
	~TareaH();//Destructor

	unsigned int gId();//Devuelve el id de la tarea
	void out_push_back(TareaH& other);//Ingrea un tarea al vctor out
	void in_push_back(TareaH& other);//Ingrea un tarea al vctor in
	TareaH* begin() override;//retorna la primera posicion
	TareaH* end() override;//retorna la ultima posicion
	TareaH* next() override;//retorna la siguinete posicion
	void connect_to(TareasH* other) override;//conecta dos clases
	void definaNombre(string);//Modifica el nombre de la tarea
	void definaColaborador(string );//Modifica el colaborador de la tarea
	void definaInicio(string );//Define fecha de inicio
	void definaFinal(string );//Define fecha final
	bool eliminarTarea(int );//Elimina tarea
	string toString() override;//Imprime los datos de las tareas
	string toString2();//Imprime los datos de las tareas
	string toString3();//Imprime los datos de las tareas
	bool modificarTarea(int);//Modifica una tarea segun el id
	TareaH* busqueTarea(int);//Busca una tarea segun el id

private:
	static unsigned int idg;

	unsigned int id;//atributo id
	TareaH* cursor;//atributo cursor
	vector<TareaH> in, out;//vectores

	string nombreTarea;//Nombre de la tarea
	string fechaInicio;//Fecha de inicio
	string fechaFinal;//Fecha final
	string responsable;//Responsable de la tarea
};

// Definición de variables static:
unsigned int TareaH::idg = 0;

// Definición de métodos:
/*
Constructor sin parametros
*/
TareaH::TareaH(){
this->id = TareaH::idg++;
	cursor = this;

	nombreTarea=" ";
	fechaInicio=" ";
	fechaFinal=" ";
	responsable=" ";

}

/*
Destructor
*/
TareaH::~TareaH()
{
}

/*
Restorna el id
*/
unsigned int TareaH::gId()
{
	return id;
}
/*
Gudarda un dato en el vector out

*/
void TareaH::out_push_back(TareaH& other)
{
	out.push_back(other);
}
/*
Guarda un dato en el vector in
*/
void TareaH::in_push_back(TareaH& other)
{
	in.push_back(other);
}
/*
Devulve la primera posicion
*/

TareaH* TareaH::begin()
{
	cursor = this;
	return cursor;
}

/*
Devuelve la ultima posicion
*/
TareaH* TareaH::end()
{
	return 0;
}

/*
Devulve la siguiente posicion 
*/
TareaH* TareaH::next()
{
	cursor = 0;
	return cursor;
}

/*
Conecta dos clases 
*/
void TareaH::connect_to(TareasH* other)
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
Define nombre de la clase
*/
void TareaH::definaNombre(string nombreU){

nombreTarea=nombreU;

}
/*
DefinaColaborardor
*/
void TareaH::definaColaborador(string colaboradorU){
	responsable=colaboradorU;


}
/*
Defina iniciode la tarea
*/
void TareaH::definaInicio(string inicioU){

	fechaInicio=inicioU;
}
/*
Defina final de la tarea
*/
void TareaH::definaFinal(string finalU){

	fechaFinal=finalU;
}

/*
Busca una tarea por el id
*/

TareaH* TareaH::busqueTarea(int val){
	TareaH* aux=NULL;
	
	if(id==val){
		aux=this;
	}else{
		if(out.size()>0){
			bool encontrado=false;
			for (std::vector<TareaH>::iterator it = out.begin() ; it != out.end() && encontrado==false; ++it){
					aux= it->busqueTarea(val);
					if(aux!=NULL){
						encontrado=true;
					}
			}
		}		
		
	}
	return aux;
}

/*
Modifica una tarea segun el id
*/
bool TareaH::modificarTarea(int val){
	bool encontrado=false;
	if(id==val){
	//for(auto n:tareas){
		string aux;
		string aux2;
		string aux3;
		string aux4;


		cout<<"Defina nombre para la tarea "<<gId()<<endl;
		cin>>aux;
		definaNombre(aux);
		cin.clear();
		fflush(stdin);

		cout<<"Defina colaborador para la tarea "<<gId()<<endl;
		cin>>aux2;
		definaColaborador(aux2);
		cin.clear();
		fflush(stdin);

		cout<<"Defina inicio de la tarea "<<gId()<<endl;
		cin>>aux3;
		definaInicio(aux3);
		cin.clear();
		fflush(stdin);

		cout<<"Defina fin de la tarea "<<gId()<<endl;
		cin>>aux4;
		definaFinal(aux4);
		cin.clear();
		fflush(stdin);
			encontrado=true;

	}else{
		if(out.size()>0){
			bool encontrado=false;
			for (std::vector<TareaH>::iterator it = out.begin(); it != out.end() && encontrado==false; ++it){
					encontrado = it->modificarTarea(val);
			}
		}			
	}
	return encontrado;
}
/*
Elimina una tarea segun el id
*/
bool TareaH::eliminarTarea(int val){
	bool encontrado=false;
		if(out.size()>0){
			for (std::vector<TareaH>::iterator it = out.begin(); it != out.end() && encontrado==false; ++it){
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
/*
Imprime datos de la clase
*/

string TareaH::toString3()
{
	ostringstream salida;
	salida<<"\t""\t" << "Tarea id: " << id << endl;
	salida<<"\t""\t" << "Nombre de la Tarea: "<<nombreTarea<<endl;
	salida<< "\t""\t"<< "Fecha Inicio de Tarea: "<<fechaInicio<<endl;
	salida<<"\t""\t"<<"Fecha Final de Tarea: "<< fechaFinal<<endl;
	salida<<"\t""\t"<<"Responsable de la tarea: "<< responsable<<endl;
	

	

	for (auto n : out){
		salida <<n.toString3() << endl;
	}

	return salida.str();
}

/*
Imprime datos de la clase
*/
string TareaH::toString2()
{
	ostringstream salida;
	salida<<"\t" << "Tarea id: " << id << endl;
	salida<<"\t"<< "Nombre de la Tarea: "<<nombreTarea<<endl;
	salida<<"\t"<< "Fecha Inicio de Tarea: "<<fechaInicio<<endl;
	salida<<"\t"<<"Fecha Final de Tarea: "<< fechaFinal<<endl;
	salida<<"\t"<<"Responsable de la tarea: "<< responsable<<endl;
	

	

	for (auto n : out){
		salida <<n.toString3() << endl;
	}

	return salida.str();
}

/*
Imprime datos de la clase
*/
string TareaH::toString()
{
	ostringstream salida;
	salida << "Tarea id: " << id << endl;
	salida<< "Nombre de la Tarea: "<<nombreTarea<<endl;
	salida<< "Fecha Inicio de Tarea: "<<fechaInicio<<endl;
	salida<<"Fecha Final de Tarea: "<< fechaFinal<<endl;
	salida<<"Responsable de la tarea: "<< responsable<<endl;
	

	

	for (auto n : out){
		salida <<n.toString2() << endl;
	}

	return salida.str();
}