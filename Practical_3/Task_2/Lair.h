#ifndef LAIR_H
#define LAIR_H

#include <iostream>
#include <map>
#include <set>
#include <string>

#include "Tile.h"
#include "Trap.h"

class LairIterator;
class Trap;

class Lair
{
public:
    virtual ~Lair() {}
    virtual LairIterator* createIterator(bool type, Tile* startingTile) = 0;
    virtual Lair& addEdge(Tile* source, Tile* destination) = 0;
    virtual std::set<Tile*> getNeighbours(Tile* tile) = 0;
    virtual bool doesTileExist(Tile* tile) = 0;
    virtual Lair& addTile(Tile* tile) = 0;
    virtual Tile* getTile(int xCoord, int yCoord) = 0;
    virtual Lair& removeTile(Tile* tile) = 0;
    virtual void placeTrapInTile(Tile* tile, Trap* trap) = 0;
protected:
    Lair() {}
};

#endif