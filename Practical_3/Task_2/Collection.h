#ifndef COLLECTION_H
#define COLLECTION_H

#include <string>

#include "Iterator.h"

class Collection
{
public:
    virtual Iterator *createIterator(std::string type) = 0;
};

#endif