/* 
 * File:   Wall.h
 * Author: calderon
 *
 * Created on 1 de junio de 2012, 06:17 PM
 */

#ifndef WALL_H
#define	WALL_H

#include "MapSite.h"

class Wall : public MapSite {
public:
    Wall();
    Wall(const Wall& orig);
    virtual ~Wall();
    
    virtual void Enter();
private:

};

Wall::Wall() {
}

Wall::Wall(const Wall& orig) {
}

Wall::~Wall() {
}

void Wall::Enter() {

}

#endif	/* WALL_H */

