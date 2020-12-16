/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
Double.h
Desarrollo de la clase para manejar numeros reales.
*/
#include <iostream>
#include <string>
#include <string.h>
#include <sstream>
#include "expresiones.h"

using namespace std;
//Clase para realizar operaciones con numeros reales
#ifndef DOUBLE_H
#define DOUBLE_H
class Double: public expresiones{
public:
	Double();//Constructor de la clase
	~Double();//Destructor
	
	string multiplicacion(string a, string b)override;//Metodo para realizar la multiplicacion
	string division(string a, string b)override;//Metodo para realizar la division
	string suma(string a, string b)override;//Metodo para realizar la suma
	string resta(string a, string b)override;//Metodo para realizar la resta
	
private:

};

/*
Constructor de la clase
*/
Double::Double(){		
}

/*
Destructor de la clase
*/
Double::~Double(){
}

/*
Metodo que reliza la multiplicaion de los numeros reales
*/
string Double::multiplicacion(string a, string b){
	std::ostringstream strs;
	double resultado=0;
	double oper1 = atof(a.c_str());
	double oper2 = atof(b.c_str());
	resultado= oper1 * oper2;
	
	strs << resultado;
	return strs.str();	
}

/*
Metodo que reliza la division de los numeros reales
*/
string Double::division(string a, string b){
	std::ostringstream strs;
	double resultado=0;
	double oper1 = atof(a.c_str());
	double oper2 = atof(b.c_str());
	resultado= oper1 / oper2;
	
	strs << resultado;
	return strs.str();
}

/*
Metodo que reliza la suma de los numeros reales
*/
	
string Double::suma(string a, string b){
	std::ostringstream strs;
	double resultado=0;
	double oper1 = atof(a.c_str());
	double oper2 = atof(b.c_str());
	resultado= oper1 + oper2;
	
	strs << resultado;
	return strs.str();
}

/*
Metodo que reliza la resta de los numeros reales
*/
	
string Double::resta(string a, string b){
	std::ostringstream strs;
	double resultado=0;
	double oper1 = atof(a.c_str());
	double oper2 = atof(b.c_str());
	resultado= oper1 - oper2;
	
	strs << resultado;
	return strs.str();
}
#endif