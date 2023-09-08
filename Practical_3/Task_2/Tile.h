#ifndef TILE_H
#define TILE_H

#include "Trap.h"
#include "Bank.h"

class Tile {
public:
    Tile* up;
    Tile* down;
    Tile* left;
    Tile* right;
    
    Trap* trap;
    Bank* bank;

    int xCoord;
    int yCoord;

    Tile(int xCoord, int yCoord);

    void defend(std::vector<Enemy*> enemies);
};

#endif