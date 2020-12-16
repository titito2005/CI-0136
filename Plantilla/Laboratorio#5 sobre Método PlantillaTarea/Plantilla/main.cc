#include <iostream>
#include <string>
#include <stdio.h>
#include "expresiones.h"
#include "Double.h"
#include "Complejos.h"
#include "Fraccion.h"
#include "Monomio.h"
#include "Polinomio.h"
#include "Matriz.h"

using namespace std;
/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
main.cc
Main que ejecuta el codigo 
*/
int main(){
	
	expresiones *posfijas= new Double();
	string resultado;
	resultado=posfijas->run(" 3.5 2.8 * 9.5 -");
	cout<<"Resultado: "<<resultado<<endl;
	
	return 0;
}