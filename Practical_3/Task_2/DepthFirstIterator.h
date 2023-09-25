#ifndef DEPTH_FIRST_ITERATOR_H
#define DEPTH_FIRST_ITERATOR_H

#include <set>
#include <stack>

#include "LairIterator.h"

class DepthFirstIterator : public LairIterator
{
public:
    DepthFirstIterator(Lair* lair, Tile* startingTile);
    ~DepthFirstIterator() {}
    virtual Tile* next();
    virtual bool hasNext() const;
private:
    std::set<Tile*> visited;
    std::stack<Tile*> stack;
    Lair* lair;
};

#endif