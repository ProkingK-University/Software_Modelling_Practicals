#include "Iterator.h"

Iterator::Iterator(Tile* root)
{
    current = root;
    this->root = root;
}