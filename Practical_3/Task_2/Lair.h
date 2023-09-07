#ifndef LAIR_H
#define LAIR_H

class Tile;
class Iterator;

#include "Tile.h"
#include "Iterator.h"

class Lair {
private:
    Tile* root;
public:
    Lair();

    void addTile();
    void removeTile();
    Iterator* createIterator();

    ~Lair();
};

#endif