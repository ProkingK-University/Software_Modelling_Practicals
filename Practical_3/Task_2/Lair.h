#ifndef LAIR_H
#define LAIR_H

#include <iostream>

#include "Tile.h"
#include "Collection.h"

class Lair : public Collection
{
private:
    Tile *root;

    void deleteTiles(Tile *tile);

public:
    Lair();

    void addTile(int xCoord, int yCoord);
    Tile *getTile(int xCoord, int yCoord);
    void removeTile(int xCoord, int yCoord);
    Iterator *createIterator(std::string type);

    ~Lair();
};

#endif