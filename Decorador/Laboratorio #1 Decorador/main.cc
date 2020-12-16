/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
main.c
Desarrollo de la clase main, programa principal.
*/
#include "Arista.h"
#include "AristaD.h"
#include "AristaND.h"
#include "tipoAristaD.h"
#include "tipoAristaE.h"
#include "colorAristaD.h"
#include "colorAristaE.h"
#include "Nodo.h"
#include "ND_Basico.h"
#include "ND_UML.h"
#include "colorNodoD.h"
#include "colorNodoE.h"
#include "tipoNodoD.h"
#include "tipoNodoE.h"
#include "GrafoBasico.h"
#include "GrafoUML.h"
#include <iostream>

using namespace std;

int main(){
	

	//EJEMPLO CREACIÓN DINÁMICO con arista dirigida y nodo basico.
	GrafoBasico grafoB;
	GrafoUML grafoUML;

	AristaD a{"NODO1","NODO2"};
	ND_Basico nB("Mi nodo");
	cout<<"Ejemplo decorador Dinamico"<<endl;
	cout<<"\n";
	cout<<"\n";

	cout<<a.toString()<<endl;
	cout<<nB.toString()<<endl;
	cout<<grafoB.mostrarGrafoB()<<endl;
	cout<<"\n";
	cout<<"\n";
	
	tipoAristaD decorador{a, "Association"};
	cout<<decorador.toString()<<endl;	
	tipoNodoD decoradorN(nB,"raiz");
	cout<<decoradorN.toString()<<endl;
	cout<<grafoUML.mostrarGrafo()<<endl;
	cout<<"\n";
	cout<<"\n";
	
	cout<<"---------------------------------"<<endl;
	
	//EJEMPLO CREACIÓN ESTÁTICO con aristca dirigida y nodo basico.

	cout<<"Ejemplo decorador Estatico"<<endl;
	cout<<"\n";
	cout<<"\n";

	tipoAristaE< colorAristaE < AristaD > > Arista{"Association", "B", "1", "2"};
	cout<<Arista.toString()<<endl;

	tipoNodoE<colorNodoE<ND_Basico>>NodoB{"Raiz","Azul","Mi nodo"};
	cout<<NodoB.toString()<<endl;
	cout<<grafoUML.mostrarGrafo()<<endl;

	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";

	cout<<"---------------------------------"<<endl;

	//EJEMPLO CREACIÓN DINÁMICO con Arista no dirigida y nodo uml.
	AristaND aND{"NODO1","NODO2"};
	ND_UML nUML("Mi nodo UML");

	cout<<"Ejemplo decorador Dinamico"<<endl;
	cout<<"\n";
	cout<<"\n";

	cout<<aND.toString()<<endl;
	cout<<nUML.toString()<<endl;
	//grafoB.mostrarGrafoB();
	
	tipoAristaD decoradorND{aND, "Association"};
	cout<<decoradorND.toString()<<endl;	
	tipoNodoD decoradorNUML(nUML,"hoja");
	cout<<decoradorNUML.toString()<<endl;
	
	
	
	cout<<"---------------------------------"<<endl;
	
	//EJEMPLO CREACIÓN ESTÁTICO con Arista no dirigida y nodo uml.
	cout<<"Ejemplo decorador Estatico"<<endl;
	cout<<"\n";
	cout<<"\n";

	tipoAristaE< colorAristaE < AristaND > > AristaND{"Association", "B", "1", "2"};
	cout<<AristaND.toString()<<endl;

	tipoNodoE<colorNodoE<ND_UML>>NodoUML{"Raiz","Azul","Mi nodo UML"};
	cout<<NodoUML.toString()<<endl;
	cout<<grafoUML.mostrarGrafo()<<endl;



	cout<<"\n";
	cout<<"\n";

return 0;
}
