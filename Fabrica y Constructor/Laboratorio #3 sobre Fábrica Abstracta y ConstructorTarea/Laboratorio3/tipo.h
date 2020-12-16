/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
tipo.h
Desarrollo de la clase tipo.h
*/
#pragma once
#include "Tareas.h"
#include "Tarea.h"
#include "capaTareas.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

#ifndef TIPO_H
#define TIPO_H
/*
Clase que representa un tipo de proyecto
*/
class tipo{
	public:
		tipo();//constructor de la clase
		~tipo();//destructor de la clase
		tipo(vector<string>);
		void muestre();//muestra el tipo
		vector<string> getVector();//retorna el vector de datos
		int getCant();//retorna el atributo cant
		string getValores(int);// retorna un string con valores
		
	private:
		vector <string> nombres;//vector de datos
		int cant;//atributo cantidad
};
/*
Constructor de la clase
*/
tipo::tipo(){
	cout<<"Generando un nuevo tipo de proyecto"<<endl;
	cant=0;
	cout<<endl;
	
	cout<<"Ingrese la cantidad de niveles deseados"<<endl;
	cin>>cant;
	
	cout<<"Se definieron "<<cant<<" niveles"<<endl;
	for(int i=0; i<cant; i++){
		cout<<endl;
		string nombre= "";
		int nivel= i + 1;
		cout<<"Ingrese el nombre del nivel "<< nivel <<endl;
		cin>>nombre;
		cout<<"Nombre asiganado: "<<nombre<<endl;
		nombres.push_back(nombre);
	}
	cout<<endl;
}

tipo::tipo(vector<string> datosUsuario){
	nombres.resize(datosUsuario.size());
  
	
	for(int indice=0;indice<datosUsuario.size();indice++){
		nombres[indice]=datosUsuario[indice];
	}
	cant=datosUsuario.size();

}

/*
Destructor de la calse
*/
tipo::~tipo(){
	
}
/*
Metodo que muestra el tipo de proyecto
*/
void tipo::muestre(){
	cout<<"Mostrando tipo de proyecto"<<endl;
	for (auto n : nombres){
			cout<<n<<" - ";
		}
	cout<<endl;
	cout<<endl;
}

/*
Metodo que retorna el vector de nombres
*/
vector<string> tipo::getVector(){
	return nombres;
}

/*
Retorna el atributo cant
*/
int tipo::getCant(){
	return cant;
}
/*
Retorna una posicion del vector
*/
string tipo::getValores(int i){
	return nombres[i];
}

#endif