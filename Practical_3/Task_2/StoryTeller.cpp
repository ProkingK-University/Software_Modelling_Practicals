#include "StoryTeller.h"

StoryTeller::StoryTeller(Lair* lairPlayground)
{
    this->lairPlayground = lairPlayground;
}

StoryTeller::~StoryTeller() {}

void StoryTeller::traversal(LairIterator *iterator)
{
    while (iterator->hasNext()) {
        Tile* tile = iterator->next();
        std::cout << "Tile (" << tile->getXCoord() << ", " << tile->getYCoord() << ")" << std::endl;
    }
}
