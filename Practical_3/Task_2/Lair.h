#ifndef LAIR_H
#define LAIR_H

class Tile;
class Iterator;

#include "Tile.h"
#include "Collection.h"

class Lair : public Collection
{
private:
    Tile *root;

public:
    Lair();

    void addTile();
    void removeTile();
    Iterator *createIterator();

    ~Lair();
};

#endif