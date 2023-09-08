#ifndef BFSITERATOR_H
#define BFSITERATOR_H

#include "Tile.h"
#include "Iterator.h"

class BFSIterator : public Iterator
{
public:
    BFSIterator(Tile* root);

    bool done();
    Tile* next();
    Tile* first();
};

#endif