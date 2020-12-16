/* 
 * File:   Room.cpp
 * Author: calderon
 * 
 * Created on 1 de junio de 2012, 06:04 PM
 */

#include "Room.h"
Room::Room() : _roomNumber(0){
    cout << "Entra al constructor de cuartos" << endl;
}

Room::Room(int roomNo) : _roomNumber(roomNo){
}

Room::Room(const Room& orig) {
}

Room::~Room() {
    cout << "Entra al destructor de cuartos" << endl;
}

void Room::Enter(){
    
}

MapSite* Room::GetSide(Direction) const{
    
}

void Room::SetSide(Direction, MapSite*){
    
}
