/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
colorAristaE.h
Desarrollo de la clase colorAristaE.
Decorador estático para asignarle el color a las aristas.
*/
#pragma once
#include <sstream>
#include <iostream>

using namespace std;

#include "Arista.h"

template <typename T> //Plantilla
class colorAristaE : public T{//Clase colorAristaE, hereda de Arista.
	static_assert(is_base_of<Arista,T>::value, "Argumento debe ser Arista");
	
	public:
	
	template<typename ...Args>//Constructor con los datos de inicialización.
	colorAristaE(const string color, Args ...args): color{color}, T(std::forward<Args>(args)...){
	};
	
	~colorAristaE(){//Destructor.
		
	}
	
	string toString() const override{//Muestra los datos de la Arista.
		ostringstream oss;
		oss<< T::toString()<< " color "<<color<<endl;
		return oss.str();
	}
	
	private:
	
	string color;//Atributo color.
};