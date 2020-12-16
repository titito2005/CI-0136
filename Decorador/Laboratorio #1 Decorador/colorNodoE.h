/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
colorNodoE.h
Desarrollo de la clase colorNodoE.
Decorador estático para asignarle el color a los nodos.
*/
#pragma once
#include <sstream>
#include <iostream>
using namespace std;

#include "Nodo.h"

template < typename T >//Plantilla.
class colorNodoE : public T//Clase colorNodoE, hereda de nodo.
{
    // Impide que se use ColoredShape con un tipo T que NO herede de Shape!!!
    static_assert(is_base_of<Nodo, T>::value, "Argumneto debe ser Nodo");
    
public:
    // el uso de ...Args permite que toda una lista de parámetros sea pasada a T mediante constructores "forward".
    template < typename ...Args >    //Constructor con datos de inicialización.
     colorNodoE(string color, Args ...args) : color{color}, T(std::forward<Args>(args)...){
    };
    
    ~colorNodoE(){//Destructor.
    }

    string toString() const override {//Muestra los datos del nodo.
        ostringstream oss;
        oss << T::toString() << ",color del Nodo: " << color;
        return oss.str();
    }
    
    
    
private:
   string color;//Atributo color.
};

