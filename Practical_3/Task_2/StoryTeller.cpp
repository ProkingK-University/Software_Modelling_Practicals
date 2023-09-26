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
        tile->defend(heroes);

        if (tile->trap != nullptr)
        {
            std::cout << "Trap (" << tile->getXCoord() << ", " << tile->getYCoord() << ")" << std::endl;
        }
        else if (tile->bank != nullptr)
        {
            std::cout << "Bank (" << tile->getXCoord() << ", " << tile->getYCoord() << ")" << std::endl;
        }
        else
        {
            std::cout << "Tile (" << tile->getXCoord() << ", " << tile->getYCoord() << ")" << std::endl;
        }
    }
}
