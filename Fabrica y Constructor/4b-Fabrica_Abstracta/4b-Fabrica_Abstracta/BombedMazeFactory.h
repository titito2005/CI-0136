#if !defined(_BOMBEDMAZEFACTORY_H)
#define _BOMBEDMAZEFACTORY_H

#include "MazeFactory.h"
#include "BombedWall.h"
#include "BombedRoom.h"
#include "BombedDoor.h"

class BombedMazeFactory : public MazeFactory {
public:
	Maze* createMaze();
	Wall* createWall();
	Door* createDoor();
	Room* createRoom();
};

Maze* BombedMazeFactory::createMaze() {
	Maze* m = new Maze();
	return m;
}

Wall* BombedMazeFactory::createWall() {
	return new BombedWall();
}

Door* BombedMazeFactory::createDoor() {
	return new BombedDoor();
}

Room* BombedMazeFactory::createRoom() {
	return new BombedRoom();
}
#endif  //_BOMBEDMAZEFACTORY_H
