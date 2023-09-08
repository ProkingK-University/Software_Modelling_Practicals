#ifndef LAIR_H
#define LAIR_H

#include "Tile.h"
#include "Collection.h"

class Lair : public Collection
{
private:
    Tile *root;

public:
    Lair();

    Iterator *createIterator();
    void addTile(int xCoord, int yCoord);
    Tile* getTile(int xCoord, int yCoord);
    void removeTile(int xCoord, int yCoord);

    ~Lair();
};

#endif