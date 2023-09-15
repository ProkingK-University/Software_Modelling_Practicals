#ifndef TILE_H
#define TILE_H

#include "Trap.h"
#include "Bank.h"

class Tile {
public:
    int xCoord;
    int yCoord;
    Trap* trap;
    Bank* bank;
    Tile* up;
    Tile* down;
    Tile* left;
    Tile* right;
    Tile(int xCoord, int yCoord);
    ~Tile();
    void defend(std::vector<Enemy*> enemies);
};

#endif