/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
tipoNodoE.h
Desarrollo de la clase tipoNodoE.
Decorador estático para asignarle el tipo a los nodos.
*/
#pragma once
#include <sstream>
#include <iostream>
using namespace std;

#include "Nodo.h"

template < typename T >//Plantilla.
class tipoNodoE : public T//Clase tipoNodoE, hereda de Nodo.
{
    // Impide que se use ColoredShape con un tipo T que NO herede de Shape!!!
    static_assert(is_base_of<Nodo, T>::value, "Argumneto debe ser Nodo");
    
public:
    // el uso de ...Args permite que toda una lista de parámetros sea pasada a T mediante constructores "forward".
    template < typename ...Args > //Constructor. 
     tipoNodoE(string tipo, Args ...args) : tipoD{tipo}, T(std::forward<Args>(args)...){
    };
    
    ~tipoNodoE(){//Destructor.
    }

    string toString() const override {//Muestra los datos del nodo.
        ostringstream oss;
        oss << T::toString() << " ,tipo: " << tipoD;
        return oss.str();
    }
    
    
    
private:
   string tipoD;//Atributo tipo.
};

