/* 
 * File:   Maze.h
 * Author: calderon
 *
 * Created on 1 de junio de 2012, 06:26 PM
 */

#ifndef MAZE_H
#define	MAZE_H

#include <vector>
using namespace std;

#include "Room.h"
#include "Door.h"
#include "Wall.h"

class Maze {
public:
    Maze();
    Maze(const Maze& orig);
    virtual ~Maze();
    
    void AddRoom(Room*);
    Room* RoomNo(int) const;
private:
    vector< Room* > rooms;
};

Maze::Maze() {
}

Maze::Maze(const Maze& orig) {
}

Maze::~Maze() {
}

void Maze::AddRoom(Room* nr) {

}

Room* Maze::RoomNo(int rn) const {
    return rooms[rn];
}

#endif	/* MAZE_H */

