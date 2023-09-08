#ifndef DFSITERATOR_H
#define DFSITERATOR_H

#include "Tile.h"
#include "Iterator.h"

class DFSIterator : public Iterator
{
public:
    DFSIterator(Tile* root);

    bool done();
    Tile* next();
    Tile* first();
};

#endif