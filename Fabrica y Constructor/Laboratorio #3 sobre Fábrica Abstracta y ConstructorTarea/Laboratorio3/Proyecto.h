/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
Proyecto.h
Desarrollo de la clase proyecto.h
*/

#include "Tareas.h"
#include "Tarea.h"
#include "capaTareas.h"
#include "tipo.h"
#include "FabricaProyectoSimple.h"
#include "FabricaProyectoCompuesto.h"
#include "Fabrica.h"

#ifndef PROYECTO_H
#define PROYECTO_H
/*
Clase que elavora un proyecto segun el tipo del usuario
*/
class Proyecto  {

public:
	Proyecto();//Constructor de la clase 
	~Proyecto();//Destrcutor de la clase	
	Tareas* crearProyecto(tipo); 

private:
	Fabrica *f1=new FabricaProyectoSimple();
	Fabrica	*f2=new FabricaProyectoCompuesto();
	//FabricaProyectoSimple* f1= new FabricaProyectoSimple();//Instancia de fabrica simple
	//FabricaProyectoCompuesto* f2= new FabricaProyectoCompuesto();//Instancia de fabrica compuesta
};

/*
Constructor de la clase
*/
Proyecto::Proyecto(){
}

/*
Destructor de la clase
*/

Proyecto::~Proyecto(){
	
}
/*
Metodo que crea un proyecto segun lo especifico el usuario
*/
Tareas* Proyecto:: crearProyecto(tipo t1){
	int dato=0;
	int menu=0;
	int cant=t1.getCant();
	capaTareas *base= new capaTareas();
	base->agregarNombre(t1.getValores(0));
	cout<<"Agregue datos de la primer tarea"<<endl;
	base->agregarDatos();
	Tareas *aux;
	
	for(int i=1; i<cant-1; i++){
		do{
			cout<<endl;
			cout<<base->toString(0)<<endl;
			cout<<endl;
			cout<<"A continuacion:"<<endl;
			cout<<"Nivel: "<<i+1<<" con nombre: "<<t1.getValores(i)<<endl;
			cout<<"Que desea realizar: \n 1-) Agregar tareas \n 2-) Modificar datos \n 3-) Continuar con el siguiente nivel"<<endl;
			cin>>menu;
			
			switch ( menu ){
				case 1:
						cout<<"Ingrese el id para agregar mas tareas"<<endl;
						cin>>dato;
						aux=base->busqueID(dato);	
						if(aux!=NULL){
							if(aux->getNombre()==t1.getValores(i-1) && aux->getAgregado()==false){
								cout<<"Defina la cantidad de tareas siguiente"<<endl;
								cin>>dato;
								

								for(int j=0;j<dato;j++){
									Tareas* t2=f2->crearTareas();
									t2->agregarNombre(t1.getValores(i));
									aux->agregarTareas(t2);
								}

								aux->agregarAgregado(true);
							}else{
								cout<<"LAS TAREAS YA FUERON AGREGADAS O EN ESTE MOMENTO SOLO SE PUEDEN AGREGAR TAREAS DE NIVEL: "<<t1.getValores(i)<<endl;
							}
						}else{
							cout<<"LA TAREA NO FUE ENCONTRADA"<<endl;
							cout<<"SELECCIONE UNA TAREA DIFERENTE"<<endl;
						}							
					
				break;
				
				case 2:
						cout<<"Ingrese el id para modificar datos"<<endl;
						cin>>dato;
						aux=(capaTareas*)base->busqueID(dato);
						if(aux!=NULL){
							aux->agregarDatos();
						}else{
							cout<<"ID NO ENCONTRADO"<<endl;
						}		
            
				break;
				
				case 3:
					cout<<"CONTINUANDO AL SIGUIENTE NIVEL :"<<t1.getValores(i+1)<<endl;
				break;
         
				default:
					cout<<"DIGITO INGRESADO NO SE RECONOCE"<<endl;
			}
		}while(menu!=3);
	}
		

		do{
		cout<<endl;
		cout<<base->toString(0)<<endl;
		cout<<endl;
		cout<<"Ingresando al ultimo nivel"<<endl;
		cout<<"A continuacion:"<<endl;
		cout<<"Nivel: "<<cant<<" con nombre: "<<t1.getValores(cant-1)<<endl;
		cout<<"Que desea realizar: \n 1-) Agregar tareas \n 2-) Modificar datos \n 3-) Finalizar"<<endl;
		cin>>menu;
	
			switch ( menu ){
				case 1:
						cout<<"Ingrese el id para agregar mas tareas"<<endl;
						cin>>dato;
						aux=(capaTareas*)base->busqueID(dato);
						if(aux!=NULL){
							if(aux->getNombre()==t1.getValores(cant-2) && aux->getAgregado()==false){
								cout<<"Defina la cantidad de tareas siguiente"<<endl;
								cin>>dato;
								
									for(int j=0;j<dato;j++){
									Tareas* t2=f1->crearTareas();
									t2->agregarNombre(t1.getValores(cant-1));
									aux->agregarTareas(t2);
								}

								aux->agregarAgregado(true);
							}else{
								cout<<"LAS TAREAS YA FUERON AGREGADAS O EN ESTE MOMENTO SOLO SE PUEDEN AGREGAR TAREAS DE NIVEL: "<<t1.getValores(cant-1)<<endl;
							}
						}else{
							cout<<"LA TAREA NO FUE ENCONTRADA"<<endl;
							cout<<"SELECCIONE UNA TAREA DIFERENTE"<<endl;
						}			
					
				break;
				
				case 2:
						cout<<"Ingrese el id para modificar datos"<<endl;
						cin>>dato;
						aux=(capaTareas*)base->busqueID(dato);
						if(aux!=NULL){
							aux->agregarDatos();
						}else{
							cout<<"ID NO ENCONTRADO"<<endl;
						}			
            
				break;
				
				case 3:
					cout<<"Finalizando"<<endl;
				break;
         
				default:
					cout<<"DIGITO INGRESADO NO SE RECONOCE"<<endl;
			}				
		}while(menu!=3);
		
		
	
	

return base;

}


#endif