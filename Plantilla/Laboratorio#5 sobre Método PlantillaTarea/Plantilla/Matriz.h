#include <iostream>
#include <string>
#include <string.h>
#include <sstream>
#include "expresiones.h"

using namespace std;

#ifndef MATRIZ_H
#define MATRIZ_H
class Matriz: public expresiones{
public:
	Matriz();
	~Matriz();
	
	string multiplicacion(string a, string b)override;
	string division(string a, string b)override;
	string suma(string a, string b)override;
	string resta(string a, string b)override;
	
private:

};
	
Matriz::Matriz(){		
}
	
Matriz::~Matriz(){
}

string Matriz::multiplicacion(string a, string b){
	std::ostringstream strs;
	string resultado;
	//cout<<a<<endl;
	//cout<<b<<endl;
	resultado="("+a+"*"+b+")";

	//cout<< resultado<<endl;
	strs << resultado;
	return strs.str();	
}
	
string Matriz::division(string a, string b){
	std::ostringstream strs;
	string resultado=" ";
	
	strs << resultado;
	return strs.str();
}
	
string Matriz::suma(string a, string b){
	std::ostringstream strs;
	string resultado;
	resultado="("+a+"+"+b+")";
	strs << resultado;
	return strs.str();
}
	
string Matriz::resta(string a, string b){
	std::ostringstream strs;
	string resultado;
	cout<<"Resta a:"<<a<<endl;
	cout<<"Resta b:"<<b<<endl;

	resultado="("+a+"-"+b+")";
	strs << resultado;
	return strs.str();
}
#endif