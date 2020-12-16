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
//Clase para realizar operaciones con polinomios
#ifndef POLINOMIO_H
#define POLINOMIO_H
class Polinomio: public expresiones{
public:
	Polinomio();//Constructor de la clase
	~Polinomio();//Destructor
	
	string multiplicacion(string a, string b)override;//Metodo para realizar la multiplicacion
	string division(string a, string b)override;//Metodo para realizar la division
	string suma(string a, string b)override;//Metodo para realizar la suma
	string resta(string a, string b)override;//Metodo para realizar la resta
	
private:

};

/*
Constructor de la clase
*/
	
Polinomio::Polinomio(){		
}


/*
Destructor de la clase
*/
Polinomio::~Polinomio(){
}

/*
Metodo que reliza la multiplicaion de los polinomios
*/
string Polinomio::multiplicacion(string a, string b){
	std::ostringstream strs;

	//PRIMERA EXPRESION:
	string s = a; 
    int n = s.length(); 
    char frase[n + 1]; 
    strcpy(frase, s.c_str()); 
	
	string expresion1="";
	string expresion2="";
	string valor1="";
	string valor2="";
	string exponente1="";
	string exponente2="";
	
	char *token = strtok(frase,"+");
    expresion1=token;
	token = strtok(NULL,"+");
	expresion2=token;
	
	n=sizeof(expresion1) / sizeof(char); 
	char frase2[n + 1]; 
    strcpy(frase2, expresion1.c_str()); 
	
	token = strtok(frase2,"x");
    valor1=token;
	
    token = strtok(NULL,"^");
	if(token!=NULL){
		exponente1=token;
	}else{
		exponente1="1";
	}
	
	n=sizeof(expresion2) / sizeof(char); 
	char frase3[n + 1]; 
    strcpy(frase3, expresion2.c_str()); 
	
	token = strtok(frase3,"x");
    valor2=token;
	
    token = strtok(NULL,"^");
	if(token!=NULL){
		exponente2=token;
	}else{
		exponente2="1";
	}
	
	//SEGUNDA EXPRESION:
	string s2 = b; 
    int n2 = s2.length(); 
    char frase4[n2 + 1]; 
    strcpy(frase4, s2.c_str()); 
	string expresion3="";
	string expresion4="";
	string valor3="";
	string valor4="";
	string exponente3="";
	string exponente4="";
	
	char *token2 = strtok(frase4,"+");
    expresion3=token2;
	token2 = strtok(NULL,"+");
	expresion4=token2;
	
	n2=sizeof(expresion3) / sizeof(char); 
	char frase5[n2 + 1]; 
    strcpy(frase5, expresion3.c_str()); 
	
	token2 = strtok(frase5,"x");
    valor3=token2;
	
    token2 = strtok(NULL,"^");
	if(token2!=NULL){
		exponente3=token2;
	}else{
		exponente3="1";
	}
	
	n2=sizeof(expresion4) / sizeof(char); 
	char frase6[n2 + 1]; 
    strcpy(frase6, expresion4.c_str()); 
	
	token2 = strtok(frase6,"x");
    valor4=token2;
	
    token2 = strtok(NULL,"^");
	if(token2!=NULL){
		exponente4=token2;
	}else{
		exponente4="1";
	}
	
	double val1= stoi(valor1);
	double val2= stoi(valor2);
	double val3= stoi(valor3);
	double val4= stoi(valor4);
	double expo1= stoi(exponente1);
	double expo2= stoi(exponente2);
	double expo3= stoi(exponente3);
	double expo4= stoi(exponente4);
	
	double resultado1=0;
	double resultado2=0;
	double resultado3=0;
	double resultado4=0;
	
	resultado1 = val1 * val3;
	resultado2 = val1 * val4;
	resultado3 = expo1 + expo3;
	resultado4 = expo1 + expo4;
	
	strs<< resultado1<<"x"<<"^"<<resultado3<<"+";
	strs<< resultado2<<"x"<<"^"<<resultado4<<"+";
	
	resultado1 = val2 * val3;
	resultado2 = val2 * val4;
	resultado3 = expo2 + expo3;
	resultado4 = expo2 + expo4;
	
	strs<< resultado1<<"x"<<"^"<<resultado3<<"+";
	strs<< resultado2<<"x"<<"^"<<resultado4<<"+";
	
	return strs.str();		
}

/*
Metodo que reliza la division de los polinomios
*/
	
string Polinomio::division(string a, string b){
	std::ostringstream strs;

	//PRIMERA EXPRESION:
	string s = a; 
    int n = s.length(); 
    char frase[n + 1]; 
    strcpy(frase, s.c_str()); 
	
	string expresion1="";
	string expresion2="";
	string valor1="";
	string valor2="";
	string exponente1="";
	string exponente2="";
	
	char *token = strtok(frase,"+");
    expresion1=token;
	token = strtok(NULL,"+");
	expresion2=token;
	
	n=sizeof(expresion1) / sizeof(char); 
	char frase2[n + 1]; 
    strcpy(frase2, expresion1.c_str()); 
	
	token = strtok(frase2,"x");
    valor1=token;
	
    token = strtok(NULL,"^");
	if(token!=NULL){
		exponente1=token;
	}else{
		exponente1="1";
	}
	
	n=sizeof(expresion2) / sizeof(char); 
	char frase3[n + 1]; 
    strcpy(frase3, expresion2.c_str()); 
	
	token = strtok(frase3,"x");
    valor2=token;
	
    token = strtok(NULL,"^");
	if(token!=NULL){
		exponente2=token;
	}else{
		exponente2="1";
	}
	
	//SEGUNDA EXPRESION:
	string s2 = b; 
    int n2 = s2.length(); 
    char frase4[n2 + 1]; 
    strcpy(frase4, s2.c_str()); 
	string expresion3="";
	string expresion4="";
	string valor3="";
	string valor4="";
	string exponente3="";
	string exponente4="";
	
	char *token2 = strtok(frase4,"+");
    expresion3=token2;
	token2 = strtok(NULL,"+");
	expresion4=token2;
	
	n2=sizeof(expresion3) / sizeof(char); 
	char frase5[n2 + 1]; 
    strcpy(frase5, expresion3.c_str()); 
	
	token2 = strtok(frase5,"x");
    valor3=token2;
	
    token2 = strtok(NULL,"^");
	if(token2!=NULL){
		exponente3=token2;
	}else{
		exponente3="1";
	}
	
	n2=sizeof(expresion4) / sizeof(char); 
	char frase6[n2 + 1]; 
    strcpy(frase6, expresion4.c_str()); 
	
	token2 = strtok(frase6,"x");
    valor4=token2;
	
    token2 = strtok(NULL,"^");
	if(token2!=NULL){
		exponente4=token2;
	}else{
		exponente4="1";
	}
	
	double val1= stoi(valor1);
	double val2= stoi(valor2);
	double val3= stoi(valor3);
	double val4= stoi(valor4);
	double expo1= stoi(exponente1);
	double expo2= stoi(exponente2);
	double expo3= stoi(exponente3);
	double expo4= stoi(exponente4);
	
	double resultado1=0;
	double resultado2=0;
	double resultado3=0;
	double resultado4=0;
	
	expo1--;
	expo2--;
	expo3--;
	expo4--;
	
	strs<< val1<<"x"<<"^"<<expo1<<"+";
	strs<< val2<<"x"<<"^"<<expo2<<"/";
	strs<< val3<<"x"<<"^"<<expo3<<"+";
	strs<< val4<<"x"<<"^"<<expo4<<endl;
	
	return strs.str();
}

/*
Metodo que reliza la suma de los polinomios
*/
string Polinomio::suma(string a, string b){
std::ostringstream strs;

	//PRIMERA EXPRESION:
	string s = a; 
    int n = s.length(); 
    char frase[n + 1]; 
    strcpy(frase, s.c_str()); 
	
	string expresion1="";
	string expresion2="";
	string valor1="";
	string valor2="";
	string exponente1="";
	string exponente2="";
	
	char *token = strtok(frase,"+");
    expresion1=token;
	token = strtok(NULL,"+");
	expresion2=token;
	
	n=sizeof(expresion1) / sizeof(char); 
	char frase2[n + 1]; 
    strcpy(frase2, expresion1.c_str()); 
	
	token = strtok(frase2,"x");
    valor1=token;
	
    token = strtok(NULL,"^");
	if(token!=NULL){
		exponente1=token;
	}else{
		exponente1="1";
	}
	
	n=sizeof(expresion2) / sizeof(char); 
	char frase3[n + 1]; 
    strcpy(frase3, expresion2.c_str()); 
	
	token = strtok(frase3,"x");
    valor2=token;
	
    token = strtok(NULL,"^");
	if(token!=NULL){
		exponente2=token;
	}else{
		exponente2="1";
	}
	
	//SEGUNDA EXPRESION:
	string s2 = b; 
    int n2 = s2.length(); 
    char frase4[n2 + 1]; 
    strcpy(frase4, s2.c_str()); 
	string expresion3="";
	string expresion4="";
	string valor3="";
	string valor4="";
	string exponente3="";
	string exponente4="";
	
	char *token2 = strtok(frase4,"+");
    expresion3=token2;
	token2 = strtok(NULL,"+");
	expresion4=token2;
	
	n2=sizeof(expresion3) / sizeof(char); 
	char frase5[n2 + 1]; 
    strcpy(frase5, expresion3.c_str()); 
	
	token2 = strtok(frase5,"x");
    valor3=token2;
	
    token2 = strtok(NULL,"^");
	if(token2!=NULL){
		exponente3=token2;
	}else{
		exponente3="1";
	}
	
	n2=sizeof(expresion4) / sizeof(char); 
	char frase6[n2 + 1]; 
    strcpy(frase6, expresion4.c_str()); 
	
	token2 = strtok(frase6,"x");
    valor4=token2;
	
    token2 = strtok(NULL,"^");
	if(token2!=NULL){
		exponente4=token2;
	}else{
		exponente4="1";
	}
	
	double val1= stoi(valor1);
	double val2= stoi(valor2);
	double val3= stoi(valor3);
	double val4= stoi(valor4);
	double expo1= stoi(exponente1);
	double expo2= stoi(exponente2);
	double expo3= stoi(exponente3);
	double expo4= stoi(exponente4);
	
	double resultado1=0;
	double resultado2=0;
	double resultado3=0;
	double resultado4=0;
	
	bool ex3=false;
	bool ex4=false;
	
	if(expo1==expo3){
		 resultado1=val1+val3;
		 strs<< resultado1<<"x"<<"^"<<expo1<<"+";
		 ex3=true;
	}else{
		if(expo1==expo4){
			resultado2=val1+val4;
			strs<< resultado2<<"x"<<"^"<<expo1<<"+";
			ex4=true;
		}else{
			strs<<val1<<"x"<<"^"<<expo1<<"+";
		}
	}
	
	if(expo2==expo3){
		 resultado3=val2+val3;
		 strs<< resultado3<<"x"<<"^"<<expo2<<"+";
		 ex3=true;
	}else{
		if(expo2==expo4){
			resultado4=val2+val4;
			strs<< resultado4<<"x"<<"^"<<expo2<<"+";
			ex4=true;
		}else{
			strs<<val2<<"x"<<"^"<<expo2<<"+";
		}
	}
	
	if(ex3==false){
		strs<< val3<<"x"<<"^"<<expo3<<"+";
	}
	
	if(ex4==false){
		strs<< val4<<"x"<<"^"<<expo4<<"+";
	}
	
	
	return strs.str();	
}

/*
Metodo que reliza la resta de los polinomios
*/
	
string Polinomio::resta(string a, string b){
	std::ostringstream strs;

	//PRIMERA EXPRESION:
	string s = a; 
    int n = s.length(); 
    char frase[n + 1]; 
    strcpy(frase, s.c_str()); 
	
	string expresion1="";
	string expresion2="";
	string valor1="";
	string valor2="";
	string exponente1="";
	string exponente2="";
	
	char *token = strtok(frase,"+");
    expresion1=token;
	token = strtok(NULL,"+");
	expresion2=token;
	
	n=sizeof(expresion1) / sizeof(char); 
	char frase2[n + 1]; 
    strcpy(frase2, expresion1.c_str()); 
	
	token = strtok(frase2,"x");
    valor1=token;
	
    token = strtok(NULL,"^");
	if(token!=NULL){
		exponente1=token;
	}else{
		exponente1="1";
	}
	
	n=sizeof(expresion2) / sizeof(char); 
	char frase3[n + 1]; 
    strcpy(frase3, expresion2.c_str()); 
	
	token = strtok(frase3,"x");
    valor2=token;
	
    token = strtok(NULL,"^");
	if(token!=NULL){
		exponente2=token;
	}else{
		exponente2="1";
	}
	
	//SEGUNDA EXPRESION:
	string s2 = b; 
    int n2 = s2.length(); 
    char frase4[n2 + 1]; 
    strcpy(frase4, s2.c_str()); 
	string expresion3="";
	string expresion4="";
	string valor3="";
	string valor4="";
	string exponente3="";
	string exponente4="";
	
	char *token2 = strtok(frase4,"+");
    expresion3=token2;
	token2 = strtok(NULL,"+");
	expresion4=token2;
	
	n2=sizeof(expresion3) / sizeof(char); 
	char frase5[n2 + 1]; 
    strcpy(frase5, expresion3.c_str()); 
	
	token2 = strtok(frase5,"x");
    valor3=token2;
	
    token2 = strtok(NULL,"^");
	if(token2!=NULL){
		exponente3=token2;
	}else{
		exponente3="1";
	}
	
	n2=sizeof(expresion4) / sizeof(char); 
	char frase6[n2 + 1]; 
    strcpy(frase6, expresion4.c_str()); 
	
	token2 = strtok(frase6,"x");
    valor4=token2;
	
    token2 = strtok(NULL,"^");
	if(token2!=NULL){
		exponente4=token2;
	}else{
		exponente4="1";
	}
	
	double val1= stoi(valor1);
	double val2= stoi(valor2);
	double val3= stoi(valor3);
	double val4= stoi(valor4);
	double expo1= stoi(exponente1);
	double expo2= stoi(exponente2);
	double expo3= stoi(exponente3);
	double expo4= stoi(exponente4);
	
	double resultado1=0;
	double resultado2=0;
	double resultado3=0;
	double resultado4=0;
	
	bool ex3=false;
	bool ex4=false;
	
	if(expo1==expo3){
		 resultado1=val1-val3;
		 strs<< resultado1<<"x"<<"^"<<expo1<<"+";
		 ex3=true;
	}else{
		if(expo1==expo4){
			resultado2=val1-val4;
			strs<< resultado2<<"x"<<"^"<<"+"<<expo1;
			ex4=true;
		}else{
			strs<<val1<<"x"<<"^"<<expo1<<"+"<<endl;
		}
	}
	
	if(expo2==expo3){
		 resultado3=val2-val3;
		 strs<< resultado3<<"x"<<"^"<<expo2<<"+";
		 ex3=true;
	}else{
		if(expo2==expo4){
			resultado4=val2-val4;
			strs<< resultado4<<"x"<<"^"<<expo2<<"+";
			ex4=true;
		}else{
			strs<<val2<<"x"<<"^"<<expo2<<"+";
		}
	}
	
	if(ex3==false){
		strs<< val3<<"x"<<"^"<<expo3<<"+";
	}
	
	if(ex4==false){
		strs<< val4<<"x"<<"^"<<expo4<<"+";
	}
	
	
	return strs.str();	
}
#endif