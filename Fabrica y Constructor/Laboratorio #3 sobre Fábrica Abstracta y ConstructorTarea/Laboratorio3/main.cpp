/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
main.cpp
Desarrollo de la clase main.cpp
*/
#include <iostream>
using namespace std;

#include "Tareas.h"
#include "capaTareas.h"
#include "Tarea.h"
#include "tipo.h"
#include "Proyecto.h"
#include "ConstructorSerializadorAbstracto.h"
#include "ConstructorSerializadorJSON.h"
#include "ConstructorSerializadorXML.h"
#include <vector>
/*
Clase main que ejecuta el programa
*/
int main(){		
	vector<string> datos;
	datos.push_back("Proyecto");
	datos.push_back("Fase");
	datos.push_back("Tarea");
	tipo proyectoGrande(datos);
	
	Proyecto p1;//Instancia de clase proyecto
	Tareas* c1;// instancia de clase tareas
	int menu=0;
	proyectoGrande.muestre();//muestra el tipo de proyecto
c1=p1.crearProyecto(proyectoGrande);//crear el proyecto

cout<<"\n";
cout<<"\n";
cout<<"\n";
cout<<"------------------------ Proyecto Final------------"<<endl;

cout<<c1->toString(0)<<endl;

ConstructorSerializadorAbstracto *serializador;
		do{
		cout<<"Defina el serializador a utilizar: \n 1-) Serializador XML \n 2-) Serializador JSON \n 3-) Salir"<<endl;
		cin>>menu;
			switch ( menu ){
				case 1:
					serializador = new ConstructorSerializadorXML();
					serializador->serializar(c1, 0);
					cout<<serializador->obtSerializacion()<<endl;
					menu=3;
				break;
				
				case 2:
					serializador = new ConstructorSerializadorJSON();
					serializador->serializar(c1, 0);
					cout<<serializador->obtSerializacion()<<endl;
					menu=3;
				break;
				
				case 3:
					cout<<"Saliendo"<<endl;
				 break;
				
				default:
					cout<<"EL VALOR INGRESADO ES INVÁLIDO"<<endl;
			}
		}while(menu!=3);

	
	return 0;
}