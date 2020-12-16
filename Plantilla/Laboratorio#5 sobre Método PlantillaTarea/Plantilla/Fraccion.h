/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
Double.h
Desarrollo de la clase para manejar fracciones.
*/

#include <iostream>
#include <string>
#include <string.h>
#include <sstream>
#include "expresiones.h"
using namespace std;
//Clase para realizar operaciones con fracciones
#ifndef FRACCION_H
#define FRACCION_H
class Fraccion: public expresiones{
public:
	Fraccion();//Constructor de la clase
	~Fraccion();//Destructor
	
	string multiplicacion(string a, string b)override;//Metodo para realizar la multiplicacion
	string division(string a, string b)override;//Metodo para realizar la division
	string suma(string a, string b)override;//Metodo para realizar la suma
	string resta(string a, string b)override;//Metodo para realizar la resta

	struct miFraccion{
		int numerador,denominador;//struct que representa unn fraccion
	}f1,f2;
	
private:

};

/*
Constructor de la clase
*/
Fraccion::Fraccion(){		
}

/*
Destructor de la clase
*/
Fraccion::~Fraccion(){
}

/*
Metodo que reliza la multiplicaion de las fraccciones
*/

string Fraccion::multiplicacion(string a, string b){
	std::ostringstream strs;
	string resultado;
	
	int cant=0;
	int cant2=0;
	int numerador;
	int denominador;
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
		if(frase[i]=='/'){
			cant++;
		}

		if(frase[i]!='/'){
			if(cant==0){
				aux+=frase[i];
			}else if(cant==1){
				aux2+=frase[i];
			}
			
			
		}
		

	}
	

	f1.numerador=stoi(aux);
	f1.denominador=stoi(aux2);

	


	for(int i2=0;i2<n2;i2++){
		if(frase1[i2]=='/'){
			cant2++;
		}

		if(frase1[i2]!='/'){
			if(cant2==0){
				aux3+=frase1[i2];
			}else if(cant2==1){
				aux4+=frase1[i2];
			}
			
		}
		
		
	}

	

	f2.numerador=stoi(aux3);
	f2.denominador=stoi(aux4);
	
	numerador=f1.numerador*f2.numerador;
	denominador=f1.denominador*f2.denominador;
	
	resultado=to_string(numerador)+"/"+to_string(denominador);

	strs << resultado;
	return strs.str();	
}
	
/*
Metodo que reliza la division de las fraccciones
*/
string Fraccion::division(string a, string b){
	std::ostringstream strs;
	string resultado;

	
	
	int cant=0;
	int cant2=0;
	int numerador;
	int denominador;
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
		if(frase[i]=='/'){
			cant++;
		}

		if(frase[i]!='/'){
			if(cant==0){
				aux+=frase[i];
			}else if(cant==1){
				aux2+=frase[i];
			}
			
			
		}
		

	}
	

	f1.numerador=stoi(aux);
	f1.denominador=stoi(aux2);

	


	for(int i2=0;i2<n2;i2++){
		if(frase1[i2]=='/'){
			cant2++;
		}

		if(frase1[i2]!='/'){
			if(cant2==0){
				aux3+=frase1[i2];
			}else if(cant2==1){
				aux4+=frase1[i2];
			}
			
		}
		
		
	}

	

	f2.numerador=stoi(aux3);
	f2.denominador=stoi(aux4);
	
	numerador=f1.numerador*f2.denominador;
	denominador=f1.denominador*f2.numerador;
	
	resultado=to_string(numerador)+"/"+to_string(denominador);
	
	strs << resultado;
	return strs.str();
}

/*
Metodo que reliza la suma de las fraccciones
*/
string Fraccion::suma(string a, string b){
	std::ostringstream strs;
	string resultado;
	int cant=0;
	int cant2=0;
	int numerador;
	int denominador;
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
		if(frase[i]=='/'){
			cant++;
		}

		if(frase[i]!='/'){
			if(cant==0){
				aux+=frase[i];
			}else if(cant==1){
				aux2+=frase[i];
			}
			
			
		}
		

	}
	

	f1.numerador=stoi(aux);
	f1.denominador=stoi(aux2);

	


	for(int i2=0;i2<n2;i2++){
		if(frase1[i2]=='/'){
			cant2++;
		}

		if(frase1[i2]!='/'){
			if(cant2==0){
				aux3+=frase1[i2];
			}else if(cant2==1){
				aux4+=frase1[i2];
			}
			
		}
		
		
	}

	

	f2.numerador=stoi(aux3);
	f2.denominador=stoi(aux4);
	

	numerador=(f1.numerador*f2.denominador)+(f1.denominador*f2.numerador);
	denominador=f1.denominador*f2.denominador;

	resultado=to_string(numerador)+"/"+to_string(denominador);
	strs << resultado;
	return strs.str();
}

/*
Metodo que reliza la resta de las fraccciones
*/
string Fraccion::resta(string a, string b){
	std::ostringstream strs;
	string resultado;
	int cant=0;
	int cant2=0;
	int numerador;
	int denominador;
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
		if(frase[i]=='/'){
			cant++;
		}

		if(frase[i]!='/'){
			if(cant==0){
				aux+=frase[i];
			}else if(cant==1){
				aux2+=frase[i];
			}
			
			
		}
		

	}
	

	f1.numerador=stoi(aux);
	f1.denominador=stoi(aux2);

	


	for(int i2=0;i2<n2;i2++){
		if(frase1[i2]=='/'){
			cant2++;
		}

		if(frase1[i2]!='/'){
			if(cant2==0){
				aux3+=frase1[i2];
			}else if(cant2==1){
				aux4+=frase1[i2];
			}
			
		}
		
		
	}

	

	f2.numerador=stoi(aux3);
	f2.denominador=stoi(aux4);
	

	numerador=(f1.numerador*f2.denominador)-(f1.denominador*f2.numerador);
	denominador=f1.denominador*f2.denominador;

	resultado=to_string(numerador)+"/"+to_string(denominador);
	
	strs << resultado;
	return strs.str();
}
#endif