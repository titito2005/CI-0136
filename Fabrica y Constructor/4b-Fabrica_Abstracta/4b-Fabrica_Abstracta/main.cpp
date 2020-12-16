/* 
 * File:   main.cpp
 * Author: calderon
 *
 * Created on 1 de junio de 2012, 06:01 PM
 */

#include <cstdlib>
#include "EnchantedMazeFactory.h"
#include "BombedMazeFactory.h"
#include "MazeGame.h"
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    EnchantedMazeFactory emf;
    BombedMazeFactory bf;
    MazeGame mg;

    /* pedir al usuario el tipo de laberinto */

    // si el usuario escoge laberinto encantado
    mg.CreateMaze(&emf);

    return 0;
}

