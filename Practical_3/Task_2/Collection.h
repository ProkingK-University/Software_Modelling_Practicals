#ifndef COLLECTION_H
#define COLLECTION_H

#include "Iterator.h"

class Collection
{
public:
    virtual Iterator *createIterator() = 0;
};

#endif