/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
tipoAristaE.h
Desarrollo de la clase tipoAristaE.
Decorador estático para asignarle el tipo a las aristas.
*/
#pragma once
#include <sstream>
#include <iostream>

using namespace std;

#include "Arista.h"

template <typename T> //Plantilla.
class tipoAristaE : public T{//Clase tipoAristaE, hereda de nodo.
	static_assert(is_base_of<Arista,T>::value, "Argumento debe ser Arista");
	
	public:
	
	template<typename ...Args>//Constructor.
	tipoAristaE(const string tipo, Args ...args): tipo{tipo}, T(std::forward<Args>(args)...){
	};
	
	~tipoAristaE(){//Destructor.
		
	}
	
	string toString() const override{//Muestra los datos de la arista.
		ostringstream oss;
		oss<< T::toString()<< " tipo: "<<tipo<<endl;
		return oss.str();
	}
	
	private:
	
	string tipo;//Atributo tipo.
};