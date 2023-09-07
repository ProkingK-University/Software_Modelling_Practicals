#ifndef TILE_H
#define TILE_H

#include "Trap.h"

class Tile {
public:
    Tile* up;
    Tile* down;
    Tile* left;
    Tile* right;

    Trap* trap;

    int xCoordinate;
    int yCoordinate;

    Tile(int xCoord, int yCoord);

    void defend();

    ~Tile();
};

#endif