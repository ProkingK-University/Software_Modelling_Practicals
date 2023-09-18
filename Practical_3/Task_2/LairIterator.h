#ifndef LAIRITERATOR_H
#define LAIRITERATOR_H

#include "Tile.h"
#include "Trap.h"
#include "Enemy.h"

class LairIterator
{
public:
    LairIterator();
    virtual ~LairIterator();
    virtual bool hasNext() = 0;
    virtual Tile *next() = 0;
    // virtual Tile* getCurrentTile() = 0;
    // virtual Enemy* getOccupyingEnemy() = 0;
    // virtual Trap* getOccupyingTrap() = 0;
};

#endif