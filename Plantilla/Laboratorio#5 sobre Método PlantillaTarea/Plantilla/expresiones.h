/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
expresiones.h
Librearia de operaciones para evaluar expresiones posfijas
*/
#include <iostream>
#include <string>
#include <string.h>
#include <stack>
#include <vector>

using namespace std;
//Clase que permite evaluar operaciones posfijas de distintos tipos
#ifndef EXPRESIONES_H
#define EXPRESIONES_H
class expresiones{
public:

		expresiones();//Constructor de la clase
		~expresiones();//Destructor
		
		virtual string multiplicacion(string,string)=0;//Metodo para realizar la multiplicacion
		virtual string division(string,string)=0;//Metodo para realizar la division
		virtual string suma(string,string)=0;//Metodo para realizar la suma
		virtual string resta(string,string)=0;	//Metodo para realizar la resta	
		string run(string expresion);//Metodo para evaluar la expresion
		
private:
		stack<string> pila;// pila que permite evaluar la expresion posfija
		vector<string> cola;// cola que permite manejar los datos de la expresion

};
/*
Constructor de la clase
*/
expresiones::expresiones(){
	
}
/*
Destructor de la clase 
*/
		
expresiones::~expresiones(){
	
}
/*
Metodo que evalua una expresion posfija
*/
string expresiones::run(string expresion){
	string s = expresion; 
    int n = s.length(); 
    char frase[n + 1]; 
    strcpy(frase, s.c_str()); 
	
	char *token = strtok(frase," ");
    if(token != NULL){
        while(token != NULL){
			cola.push_back(token);
            token = strtok(NULL," ");
        }
    }
    

	

	for (std::vector<string>::iterator it = cola.end()-1 ; it != cola.begin()-1; --it){
		 pila.push(*it);
	}


	
	while(pila.size()!=1){
		string resultado="";
		string variable1="";
		string variable2="";
		string operando="";
		variable1=pila.top();
		pila.pop();
		variable2=pila.top();
		pila.pop();
		
		operando= pila.top();
		pila.pop();
		
		if(operando=="*"){
			resultado=multiplicacion(variable1,variable2);
		}	
		if(operando=="/"){
			resultado=division(variable1,variable2);
		}	
		if(operando=="+"){
			resultado=suma(variable1,variable2);
		}	
		if(operando=="-"){
			resultado=resta(variable1,variable2);
		}

		
		 pila.push(resultado);
	}
	
	return pila.top();	
}
#endif