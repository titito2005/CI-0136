/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
TareasP.h
Desarrollo de la clase TareasP.h.
*/
#pragma once
#include <sstream>

using namespace std;

class TareaP;

template <typename Self>//Plantilla.
class TareasP{
	public:
	TareasP();//Constructor.
	~TareasP();//Destructor.
	
	template <typename T> //Planntilla connect para conectar tareas con capas o viceversa.
	void connect_to(T& other){
		for(TareaP& from: *static_cast<Self*>(this)){
					for(TareaP& to: other){
						from.out_push_back(to);
						to.in_push_back(from);
					}
				
		}
	}
};

template <typename Self> //Constructor vacío.
TareasP<Self>::TareasP(){	
}

template< typename Self>//Destructor vacío.
TareasP<Self>::~TareasP(){
}