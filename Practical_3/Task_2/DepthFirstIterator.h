#ifndef DEPTHFIRSTITERATOR_H
#define DEPTHFIRSTITERATOR_H

#include <stack>

#include "LairIterator.h"

class DepthFirstIterator : public LairIterator
{
private:
    std::stack<Tile*> stack;
    Tile* currentTile;

public:
    DepthFirstIterator(Tile* root);
    ~DepthFirstIterator();
    bool hasNext();
    Tile *next();
    // Tile* getCurrentTile();
    // Enemy* getOccupyingEnemy();
    // Trap* getOccupyingTrap();
};
#endif