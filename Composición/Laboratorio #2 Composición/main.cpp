#include <iostream>
using namespace std;

#include "TareaH.h"
#include "CapasDeTareasH.h"
#include "TareaP.h"
#include "capaTareasP.h"

int main() {
	int opcion;
cout<<"Escoja la forma de composicion que quiere usar\n 1. Por Herencia \n 2. Por plantillas";

cin>>opcion;
if(opcion==1){
	

	int cant=0;
	cout<<"Defina la cantidad de tareas de la primera capa"<<endl;//DEFINIMOS PRIMERA CAPA
	cin>>cant;
	
	CapasDeTareasH *principal=new CapasDeTareasH(cant);
	
	do{
		cout<<principal->toString()<<endl;
		cout<<"1. Agregar Capas\n 2.Modificar tarea \n 3. Eliminar Tarea \n 4.Salir" ;
		cin>>cant;
		
		switch(cant){
			case 1:{
				cout<<"Seleccione el ID de Tarea para asignar capa"<<endl;
				int resp=0;
				cin>>resp;
				TareaH* aux= principal->busqueTarea(resp);
					if(aux!=NULL){
						CapasDeTareasH *nuevaCapa;
						cout<<"Defina la cantidad de tareas para la nueva capa"<<endl;//DEFINIMOS PRIMERA CAPA
						cin>>resp;
						nuevaCapa = new CapasDeTareasH(resp);			    
						aux->connect_to(nuevaCapa);
						cout<<principal->toString()<<endl;	
					}else{
						cout<<"ID de tarea no encontrado"<<endl;
					}
			}break;
		
			case 2:{
				cout<<"Seleccione el ID de Tarea para modificar"<<endl;
				int resp2=0;
				cin>>resp2;
				if(!principal->modificarTarea(resp2)){
					cout<<"Tarea no encontrada"<<endl;
				}			
			}break;
		
			case 3:{
				cout<<"Seleccione el ID de Tarea para borrar"<<endl;
				int resp2=0;
				cin>>resp2;
				if(!principal->eliminarTarea(resp2)){
					cout<<"Tarea no encontrada"<<endl;
				}
				

			}break;

			case 4:{
				cout<<"Saliendo"<<endl;
				exit(0);

			}break;
		
			default:
				cout<<"Ingrese un valor valido"<<endl;
		}
		
		
		
	}while(cant!=4);


	}else if(opcion==2){
cout<<"Entre aqui"<<endl;
 

int cant=0;
	cout<<"Defina la cantidad de tareas de la primera capa"<<endl;//DEFINIMOS PRIMERA CAPA
	cin>>cant;
	capaTareasP *principal= new capaTareasP(cant);
	
	do{
		cout<<principal->toString()<<endl;
		cout<<"1. Agregar Capas\n 2.Modificar tarea \n 3. Eliminar Tarea \n 4.Salir";
		cin>>cant;
		
		switch(cant){
			case 1:{
				cout<<"Seleccione el ID de Tarea para asignar capa"<<endl;
				int resp=0;
				cin>>resp;
				TareaP* aux= principal->busqueTarea(resp);
					if(aux!=NULL){
						capaTareasP *nuevaCapa;
						cout<<"Defina la cantidad de tareas para la nueva capa"<<endl;//DEFINIMOS PRIMERA CAPA
						cin>>resp;
						nuevaCapa = new capaTareasP(resp);			    
						aux->connect_to<capaTareasP>(*nuevaCapa);
						cout<<principal->toString()<<endl;	
					}else{
						cout<<"ID de tarea no encontrado"<<endl;
					}
			}break;
		
			case 2:{
				cout<<"Seleccione el ID de Tarea para modificar"<<endl;
				int resp2=0;
				cin>>resp2;
				if(!principal->modificarTarea(resp2)){
					cout<<"Tarea no encontrada"<<endl;
				}			
			}break;
			
			case 3:{
				cout<<"Seleccione el ID de Tarea para borrar"<<endl;
				int resp2=0;
				cin>>resp2;
				if(!principal->eliminarTarea(resp2)){
					cout<<"Tarea no encontrada"<<endl;
				}
			}break;	
			
			case 4:{
				cout<<"Saliendo"<<endl;
				exit(0);
			}break;
		
			default:
				cout<<"Ingrese un valor valido"<<endl;
		}
		
		
		
	}while(cant!=4);




	}else{
		cout<<"Ingrese un numero entre las opcion"<<endl;
	}
	cin.ignore();
}