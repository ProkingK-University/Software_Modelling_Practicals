#ifndef BFSITERATOR_H
#define BFSITERATOR_H

#include <queue>

#include "Tile.h"
#include "Iterator.h"

class BFSIterator : public Iterator
{
private:
    std::queue<Tile *> queue;

public:
    BFSIterator(Tile *root);

    Tile *next();
    bool hasNext();
};

#endif