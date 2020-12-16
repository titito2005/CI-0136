/* 
 * File:   Door.h
 * Author: calderon
 *
 * Created on 1 de junio de 2012, 06:21 PM
 */

#ifndef DOOR_H
#define	DOOR_H

#include "Room.h"

class Door : public MapSite {
public:
    Door(Room* = 0, Room* = 0);
    Door(const Door& orig);
    virtual ~Door();
    
    virtual void Enter(); 
    Room* OtherSideFrom(Room*);
private:
    Room* _room1;
    Room* _room2;
    bool _isOpen;
};

Door::Door(Room* f, Room* s) {
}

Door::Door(const Door& orig) {

}

Door::~Door() {
}

void Door::Enter() {

}

Room* Door::OtherSideFrom(Room* r) {
    return r;
}

#endif	/* DOOR_H */

