#ifndef ITERATOR_H
#define ITERATOR_H

#include "Tile.h"

class Iterator
{
protected:
    Tile* root;
    Tile* current;
public:
    Iterator(Tile* root);

    virtual bool done() = 0;
    virtual Tile* next() = 0;
    virtual Tile* first() = 0;
};

#endif