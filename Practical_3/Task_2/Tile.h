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

    Tile();

    void defend();

    ~Tile();
};

#endif