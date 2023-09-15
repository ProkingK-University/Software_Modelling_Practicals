#ifndef BREADTHFIRSTITERATOR_H
#define BREADTHFIRSTITERATOR_H

#include <queue>

#include "LairIterator.h"

class BreadthFirstIterator : public LairIterator
{
private:
    std::queue<Tile*> queue;
    Tile* currentTile;

public:
    BreadthFirstIterator(Tile* root);
    ~BreadthFirstIterator();
    bool hasNext();
    Tile *next();
    Tile* getCurrentTile();
    Enemy* getOccupyingEnemy();
    Trap* getOccupyingTrap();
};
#endif