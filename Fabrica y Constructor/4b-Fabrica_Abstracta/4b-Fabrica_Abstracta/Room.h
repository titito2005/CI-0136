/* 
 * File:   Room.h
 * Author: calderon
 *
 * Created on 1 de junio de 2012, 06:04 PM
 */

#ifndef ROOM_H
#define	ROOM_H

#include "MapSite.h"

class Room : public MapSite {
public:
    Room();
    Room(int roomNo);
    Room(const Room& orig);
    virtual ~Room();
    
    MapSite* GetSide(Direction) const;
    void SetSide(Direction, MapSite*);
    virtual void Enter();

private:
    MapSite* _sides[4];
    int _roomNumber;
};

Room::Room() : _roomNumber(0) {
    cout << "Entra al constructor de cuartos" << endl;
}

Room::Room(int roomNo) : _roomNumber(roomNo) {
}

Room::Room(const Room& orig) {
}

Room::~Room() {
    cout << "Entra al destructor de cuartos" << endl;
}

void Room::Enter() {

}

MapSite* Room::GetSide(Direction d) const {
    return _sides[d];
}

void Room::SetSide(Direction, MapSite*) {

}

#endif	/* ROOM_H */

