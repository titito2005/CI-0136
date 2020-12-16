/* 
 * File:   MazeGame.h
 * Author: calderon
 *
 * Created on 1 de junio de 2012, 06:29 PM
 */

#ifndef MAZEGAME_H
#define	MAZEGAME_H

#include "Maze.h"
#include "MazeFactory.h"
#include "EnchantedMazeFactory.h"

class MazeGame {
public:
    MazeGame();
    MazeGame(const MazeGame& orig);
    virtual ~MazeGame();
    
    Maze* CreateMaze(MazeFactory*);
    
private:
    MapSite::Direction d;
    Maze* l;
};


MazeGame::MazeGame() {
}

MazeGame::MazeGame(const MazeGame& orig) {
}

MazeGame::~MazeGame() {
}

Maze* MazeGame::CreateMaze(MazeFactory* f) {
    Maze* aMaze = f->createMaze();

    Room* r1 = f->createRoom(); //new Room(1);
    Room* r2 = f->createRoom(); //new Room(2);
    Door* theDoor = f->createDoor(); //new Door(r1,r2);

    aMaze->AddRoom(r1);
    aMaze->AddRoom(r2);


    //r1->SetSide(MapSite::North, new Wall());
    r1->SetSide(MapSite::North, f->createWall());

    r1->SetSide(MapSite::East, theDoor);

    //r1->SetSide(MapSite::South, new Wall());
    r1->SetSide(MapSite::South, f->createWall());

    //r1->SetSide(MapSite::West, new Wall());
    r1->SetSide(MapSite::West, f->createWall());

    r2->SetSide(MapSite::North, f->createWall());
    r2->SetSide(MapSite::East, f->createWall());
    r2->SetSide(MapSite::South, f->createWall());
    r2->SetSide(MapSite::West, theDoor);

    delete r1;
    delete r2;
    delete theDoor;
    return aMaze;
}

#endif	/* MAZEGAME_H */

