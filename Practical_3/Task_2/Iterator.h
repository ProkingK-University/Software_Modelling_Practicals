#ifndef ITERATOR_H
#define ITERATOR_H

#include "Tile.h"

class Iterator
{
public:
    virtual Tile* next() = 0;
    virtual bool hasNext() = 0;
};

#endif