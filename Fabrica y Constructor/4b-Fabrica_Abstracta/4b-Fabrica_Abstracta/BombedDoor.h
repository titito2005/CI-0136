#if !defined(_BOMBEDDOOR_H)
#define _BOMBEDDOOR_H

#include "Door.h"

class BombedDoor : public Door {
public:
	BombedDoor();
	BombedDoor(int nr1, int nr2);
	~BombedDoor();

	int getId();
	int getIdRoom1();
	int getIdRoom2();

	void setIdRoom1(int nr1);
	void setIdRoom2(int nr2);

private:
	static int idg;
	int id;
	int id_r1;
	int id_r2;
};

int BombedDoor::idg = 0;

BombedDoor::BombedDoor() : id(idg), id_r1(0), id_r2(0)
{
	idg++;
}

BombedDoor::BombedDoor(int nr1, int nr2) : id(idg), id_r1(nr1), id_r2(nr2)
{
	idg++;
}

BombedDoor::~BombedDoor()
{
}

int BombedDoor::getId()
{
	return id;
}

int BombedDoor::getIdRoom1()
{
	return id_r1;
}

int BombedDoor::getIdRoom2()
{
	return id_r2;
}

void BombedDoor::setIdRoom1(int nr1)
{
	id_r1 = nr1;
}

void BombedDoor::setIdRoom2(int nr2)
{
	id_r2 = nr2;
}

#endif  //_BOMBEDDOOR_H
