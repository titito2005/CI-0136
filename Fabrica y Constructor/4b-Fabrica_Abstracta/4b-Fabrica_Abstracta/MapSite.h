/* 
 * File:   MapSite.h
 * Author: calderon
 *
 * Created on 1 de junio de 2012, 06:03 PM
 */

#ifndef MAPSITE_H
#define	MAPSITE_H
#include <iostream>
using std::cout;
using std::endl;

class MapSite {
public:
    enum Direction {North, South, East, West};
    MapSite();
    MapSite(const MapSite& orig);
    virtual void Enter() = 0;
    virtual ~MapSite();
private:

};

MapSite::MapSite() {

}

MapSite::MapSite(const MapSite& orig) {
}

MapSite::~MapSite() {
}

#endif	/* MAPSITE_H */

