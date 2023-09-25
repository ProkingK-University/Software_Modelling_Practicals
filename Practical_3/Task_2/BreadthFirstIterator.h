#ifndef BREADTH_FIRST_ITERATOR_H
#define BREADTH_FIRST_ITERATOR_H

#include <set>
#include <queue>

#include "LairIterator.h"

class BreadthFirstIterator : public LairIterator
{
public:
    BreadthFirstIterator(Lair* lair, Tile* startingVertex);
    ~BreadthFirstIterator() {}
    virtual Tile* next();
    virtual bool hasNext() const;
private:
    std::set<Tile*> visited;
    std::queue<Tile*> queue;
    Lair* lair;
};

#endif