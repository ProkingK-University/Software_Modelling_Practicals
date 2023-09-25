#ifndef LAIR_ITERATOR_H
#define LAIR_ITERATOR_H

#include "Tile.h"

class Lair;

class LairIterator
{
public:
    virtual Tile* next() = 0;
    virtual bool hasNext() const = 0;
protected:
    LairIterator() {}
    virtual ~LairIterator() {}
};

#endif