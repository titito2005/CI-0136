
/*
Diego Barquero Quesada B80961
Luis Rojas Carrillo B86875
capaTareasP.h
Desarrollo de la clase capaTareasP.h.
*/
#pragma once
#include <string>
using namespace std;

class TareaH;

class TareasH
{
public:
	TareasH();
	~TareasH();

	virtual TareaH* begin() = 0;
	virtual TareaH* end() = 0;
	virtual TareaH* next() = 0;
	virtual void connect_to(TareasH* other) = 0;
	virtual string toString() = 0;
};

TareasH::TareasH()
{
}

TareasH::~TareasH()
{
}