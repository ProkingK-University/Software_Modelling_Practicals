#ifndef LAIR_H
#define LAIR_H

#include <string>
#include <cstdlib>
#include <ctime> 

#include "LairIterator.h"
#include "Tile.h"

class Lair
{
friend class LairIterator;
public:
    Lair();
    virtual ~Lair();
    virtual LairIterator *createIterator(std::string type) = 0;
    virtual void addTile(int xCoord, int yCoord) = 0;
    virtual void removeTile(int xCoord, int yCoord) = 0;
    virtual Tile* getTile(int xCoord, int yCoord) = 0;
    virtual void deleteAllTiles(Tile* root) = 0;
    virtual void randomlyGenerateLair() = 0;
    virtual void displayLair() = 0;
};

#endif