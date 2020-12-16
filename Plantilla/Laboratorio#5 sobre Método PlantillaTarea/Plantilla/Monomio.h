/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
Monomio.h
Desarrollo de la clase para manejar monomios.
*/
#include <iostream>
#include <string>
#include <string.h>
#include <sstream>
#include "expresiones.h"

using namespace std;
//Clase para realizar operaciones con monomios
#ifndef MONOMIO_H
#define MONOMIO_H
class Monomio: public expresiones{
public:
	Monomio();//Constructor de la clase
	~Monomio();//Destructor
	
	string multiplicacion(string a, string b)override;//Metodo para realizar la multiplicacion
	string division(string a, string b)override;//Metodo para realizar la division
	string suma(string a, string b)override;//Metodo para realizar la suma
	string resta(string a, string b)override;//Metodo para realizar la resta
	
private:

};

/*
Constructor de la clase
*/
Monomio::Monomio(){		
}

/*
Destructor de la clase
*/
Monomio::~Monomio(){
}

/*
Metodo que reliza la multiplicaion de los monomios
*/
string Monomio::multiplicacion(string a, string b){
	std::ostringstream strs;
	double resultadoValor=0;
	double resultadoExponente=0;
	
	string s = a; 
    int n = s.length(); 
    char frase[n + 1]; 
    strcpy(frase, s.c_str()); 
	
	string valor1="";
	string exponente1="";
	
	char *token = strtok(frase,"x");
    valor1=token;
	
    token = strtok(NULL,"^");
	if(token!=NULL){
		exponente1=token;
	}else{
		exponente1="1";
	}
        	
	string s2 = b; 
    int n2 = s2.length(); 
    char frase2[n + 1]; 
    strcpy(frase2, s2.c_str()); 
	
	string valor2="";
	string exponente2="";
	
	char *token2 = strtok(frase2,"x");
	valor2=token2;
	
	token2 = strtok(NULL,"^");
    if(token2!=NULL){
		exponente2=token2;
	}else{
		exponente2="1";
	}
	
	double val1= stoi(valor1);
	double val2= stoi(valor2) ;
	double expo1= stoi(exponente1);
	double expo2= stoi(exponente2);
	
	resultadoValor= val1*val2;
	resultadoExponente=expo1+expo2;
	
	strs << resultadoValor<<"x"<<"^"<<resultadoExponente;
	return strs.str();	
}
/*
Metodo que reliza la division de los monomios
*/
string Monomio::division(string a, string b){
	std::ostringstream strs;
	double resultadoValor=0;
	double resultadoExponente=0;
	
	string s = a; 
    int n = s.length(); 
    char frase[n + 1]; 
    strcpy(frase, s.c_str()); 
	
	string valor1="";
	string exponente1="";
	
	char *token = strtok(frase,"x");
    valor1=token;
	
    token = strtok(NULL,"^");
	if(token!=NULL){
		exponente1=token;
	}else{
		exponente1="1";
	}
        	
	string s2 = b; 
    int n2 = s2.length(); 
    char frase2[n + 1]; 
    strcpy(frase2, s2.c_str()); 
	
	string valor2="";
	string exponente2="";
	
	char *token2 = strtok(frase2,"x");
	valor2=token2;
	
	token2 = strtok(NULL,"^");
    if(token2!=NULL){
		exponente2=token2;
	}else{
		exponente2="1";
	}
	
	double val1= stoi(valor1);
	double val2= stoi(valor2) ;
	double expo1= stoi(exponente1);
	double expo2= stoi(exponente2);
	
	resultadoValor= val1/val2;
	resultadoExponente=expo1-expo2;
	
	strs << resultadoValor<<"x"<<"^"<<resultadoExponente;
	return strs.str();	
}
/*
Metodo que reliza la suma de los monomios
*/
string Monomio::suma(string a, string b){
	std::ostringstream strs;
	double resultadoValor=0;
	double resultadoExponente=0;
	
	string s = a; 
    int n = s.length(); 
    char frase[n + 1]; 
    strcpy(frase, s.c_str()); 
	
	string valor1="";
	string exponente1="";
	
	char *token = strtok(frase,"x");
    valor1=token;
	
    token = strtok(NULL,"^");
	if(token!=NULL){
		exponente1=token;
	}else{
		exponente1="1";
	}
        	
	string s2 = b; 
    int n2 = s2.length(); 
    char frase2[n + 1]; 
    strcpy(frase2, s2.c_str()); 
	
	string valor2="";
	string exponente2="";
	
	char *token2 = strtok(frase2,"x");
	valor2=token2;
	
	token2 = strtok(NULL,"^");
    if(token2!=NULL){
		exponente2=token2;
	}else{
		exponente2="1";
	}
	
	double val1= stoi(valor1);
	double val2= stoi(valor2) ;
	double expo1= stoi(exponente1);
	double expo2= stoi(exponente2);
	
	if(expo1==expo2){
		resultadoValor= val1+val2;
		resultadoExponente= expo1;
		
		strs << resultadoValor<<"x"<<"^"<<resultadoExponente;		
	}else{
		strs << val1<<"x"<<"^"<<expo1<<" + "<<val2<<"x"<<"^"<<expo2;	
	}
	return strs.str();	
}
/*
Metodo que reliza la resta de los monomios
*/
string Monomio::resta(string a, string b){
	std::ostringstream strs;
	double resultadoValor=0;
	double resultadoExponente=0;
	
	string s = a; 
    int n = s.length(); 
    char frase[n + 1]; 
    strcpy(frase, s.c_str()); 
	
	string valor1="";
	string exponente1="";
	
	char *token = strtok(frase,"x");
    valor1=token;
	
    token = strtok(NULL,"^");
	if(token!=NULL){
		exponente1=token;
	}else{
		exponente1="1";
	}
        	
	string s2 = b; 
    int n2 = s2.length(); 
    char frase2[n + 1]; 
    strcpy(frase2, s2.c_str()); 
	
	string valor2="";
	string exponente2="";
	
	char *token2 = strtok(frase2,"x");
	valor2=token2;
	
	token2 = strtok(NULL,"^");
    if(token2!=NULL){
		exponente2=token2;
	}else{
		exponente2="1";
	}
	
	double val1= stoi(valor1);
	double val2= stoi(valor2) ;
	double expo1= stoi(exponente1);
	double expo2= stoi(exponente2);
	
	if(expo1==expo2){
		resultadoValor= val1-val2;
		resultadoExponente= expo1;
		
		strs << resultadoValor<<"x"<<"^"<<resultadoExponente;		
	}else{
		strs << val1<<"x"<<"^"<<expo1<<" - "<<val2<<"x"<<"^"<<expo2;	
	}
	return strs.str();	
}
#endif