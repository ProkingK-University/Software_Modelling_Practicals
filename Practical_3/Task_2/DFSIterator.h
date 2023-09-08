#ifndef DFSITERATOR_H
#define DFSITERATOR_H

#include <stack>

#include "Tile.h"
#include "Iterator.h"

class DFSIterator : public Iterator
{
private:
    std::stack<Tile *> stack;

public:
    DFSIterator(Tile *root);

    Tile *next();
    bool hasNext();
};

#endif