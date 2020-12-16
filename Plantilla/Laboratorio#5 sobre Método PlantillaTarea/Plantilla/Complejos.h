/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
Complejos.h
Desarrollo de la clase para manejar numeros complejos.
*/
#include <iostream>
#include <string>
#include <string.h>
#include <sstream>
#include "expresiones.h"
using namespace std;

//Clase para realizar operaciones con numeros complejos
#ifndef COMPLEJOS_H
#define COMPLEJOS_H
class Complejos: public expresiones{
public:
	Complejos();//Constructor de la clase
	~Complejos();//Destructor
	
	string multiplicacion(string a, string b)override;//Metodo para realizar la multiplicacion
	string division(string a, string b)override;//Metodo para realizar la division
	string suma(string a, string b)override;//Metodo para realizar la suma
	string resta(string a, string b)override;//Metodo para realizar la resta

	struct Complejo{
		int real,imaginario;//struct que representa un numero imaginario
	}z1,z2;
	
private:

};

/*
Constructor de la clase
*/
Complejos::Complejos(){		
}

/*
Destructor de la clase
*/
Complejos::~Complejos(){
}

/*
Metodo que reliza la multiplicaion de los numeros complejos
*/
string Complejos::multiplicacion(string a, string b){
	std::ostringstream strs;
	
	int cant=0;
	int cant2=0;
	int real;
	int imaginario;
	int real2;
	int imaginario2;
	string s = a; 
	string s1 = b;
	string aux;
	string aux2;
	string aux3;
	string aux4;

    int n = s.length(); 
    int n2 =s1.length();
    char frase[n + 1]; 
    char frase1[n2 + 1];
    strcpy(frase, s.c_str()); 
	strcpy(frase1, s1.c_str()); 

	for(int i=0;i<n;i++){
		if(frase[i]==','){
			cant++;
		}

		if(frase[i]!='<'&&frase[i]!='i'&&frase[i]!='>'&&frase[i]!=','){
			if(cant==0){
				aux+=frase[i];
			}else if(cant==1){
				aux2+=frase[i];
			}
			
			
		}


	}

	z1.imaginario=stoi(aux);
	z1.real=stoi(aux2);
	

	for(int i2=0;i2<n2;i2++){
		if(frase1[i2]==','){
			cant2++;
		}

		if(frase1[i2]!='<'&&frase1[i2]!='i'&&frase1[i2]!='>'&&frase1[i2]!=','){
			if(cant2==0){
				aux3+=frase1[i2];
			}else if(cant2==1){
				aux4+=frase1[i2];
			}
			
		}
		
		
	}

	z2.imaginario=stoi(aux3);
	z2.real=stoi(aux4);
	

	real=z1.real*z2.real;
	imaginario=z1.imaginario*z2.imaginario;
	real2=z1.real*z2.imaginario;
	imaginario2=z1.imaginario*z2.real;
	real=real-imaginario;
	imaginario=real2+imaginario2;
	 
	
	string resultado= to_string(imaginario)+"i"+","+to_string(real);
	strs << resultado;
	return strs.str();	
}


/*
Metodo que reliza la division de los numeros complejos
*/
string Complejos::division(string a, string b){
	std::ostringstream strs;
	
	int cant=0;
	int cant2=0;
	int real;
	int imaginario;
	string s = a; 
	string s1 = b;
	string aux;
	string aux2;
	string aux3;
	string aux4;

    int n = s.length(); 
    int n2 =s1.length();
    char frase[n + 1]; 
    char frase1[n2 + 1];
    strcpy(frase, s.c_str()); 
	strcpy(frase1, s1.c_str()); 

	for(int i=0;i<n;i++){
		if(frase[i]==','){
			cant++;
		}

		if(frase[i]!='<'&&frase[i]!='i'&&frase[i]!='>'&&frase[i]!=','){
			if(cant==0){
				aux+=frase[i];
			}else if(cant==1){
				aux2+=frase[i];
			}
			
			
		}
		

	}

	z1.imaginario=stoi(aux);
	z1.real=stoi(aux2);
	

	for(int i2=0;i2<n2;i2++){
		if(frase1[i2]==','){
			cant2++;
		}

		if(frase1[i2]!='<'&&frase1[i2]!='i'&&frase1[i2]!='>'&&frase1[i2]!=','){
			if(cant2==0){
				aux3+=frase1[i2];
			}else if(cant2==1){
				aux4+=frase1[i2];
			}
			
		}
		
		
	}

	z2.imaginario=stoi(aux3);
	z2.real=stoi(aux4);
	

	real=z1.real/z2.real;
	imaginario=z1.imaginario/z2.imaginario;

	
	string resultado= to_string(imaginario)+"i"+","+to_string(real);
	strs << resultado;
	return strs.str();	
}

/*
Metodo que reliza la suma de los numeros complejos
*/
	
string Complejos::suma(string a, string b){
	
	std::ostringstream strs;
	string s = a; 
	string s1 = b;
	int cant=0;
	int cant2=0;
	int real;
	int imaginario;
	string aux;
	string aux2;
	string aux3;
	string aux4;
    int n = s.length(); 
    int n2 =s1.length();
    char frase[n + 1]; 
    char frase1[n2 + 1];
    strcpy(frase, s.c_str()); 
	strcpy(frase1, s1.c_str()); 

	for(int i=0;i<n;i++){
		if(frase[i]==','){
			cant++;
		}

		if(frase[i]!='<'&&frase[i]!='i'&&frase[i]!='>'&&frase[i]!=','){
			if(cant==0){
				aux+=frase[i];
			}else if(cant==1){
				aux2+=frase[i];
			}
			
			
		}
		

	}

	z1.imaginario=stoi(aux);
	z1.real=stoi(aux2);
	

	for(int i2=0;i2<n2;i2++){
		if(frase1[i2]==','){
			cant2++;
		}

		if(frase1[i2]!='<'&&frase1[i2]!='i'&&frase1[i2]!='>'&&frase1[i2]!=','){
			if(cant2==0){
				aux3+=frase1[i2];
			}else if(cant2==1){
				aux4+=frase1[i2];
			}
			
		}
		
		
	}

	z2.imaginario=stoi(aux3);
	z2.real=stoi(aux4);
	

	real=z1.real+z2.real;
	imaginario=z1.imaginario+z2.imaginario;

	
	string resultado= to_string(imaginario)+"i"+","+to_string(real);
	strs << resultado;

	
	return strs.str();
}

/*
Metodo que reliza la resta de los numeros complejos
*/
string Complejos::resta(string a, string b){
	std::ostringstream strs;
	
	int cant=0;
	int cant2=0;
	int real;
	int imaginario;
	string s = a; 
	string s1 = b;
	string aux;
	string aux2;
	string aux3;
	string aux4;

    int n = s.length(); 
    int n2 =s1.length();
    char frase[n + 1]; 
    char frase1[n2 + 1];
    strcpy(frase, s.c_str()); 
	strcpy(frase1, s1.c_str()); 

	for(int i=0;i<n;i++){
		if(frase[i]==','){
			cant++;
		}

		if(frase[i]!='<'&&frase[i]!='i'&&frase[i]!='>'&&frase[i]!=','){
			if(cant==0){
				aux+=frase[i];
			}else if(cant==1){
				aux2+=frase[i];
			}
			
			
		}
		

	}

	z1.imaginario=stoi(aux);
	z1.real=stoi(aux2);
	

	for(int i2=0;i2<n2;i2++){
		if(frase1[i2]==','){
			cant2++;
		}

		if(frase1[i2]!='<'&&frase1[i2]!='i'&&frase1[i2]!='>'&&frase1[i2]!=','){
			if(cant2==0){
				aux3+=frase1[i2];
			}else if(cant2==1){
				aux4+=frase1[i2];
			}
			
		}
		
		
	}

	z2.imaginario=stoi(aux3);
	z2.real=stoi(aux4);
	

	real=z1.real-z2.real;
	imaginario=z1.imaginario-z2.imaginario;

	
	string resultado= to_string(imaginario)+"i"+","+to_string(real);
	strs << resultado;
	return strs.str();	
}
#endif