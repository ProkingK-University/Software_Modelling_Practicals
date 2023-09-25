#ifndef STORYTELLER_H
#define STORYTELLER_H

#include <string>
#include <vector>

#include "Lair.h"
#include "LairIterator.h"

class StoryTeller
{
public:
    StoryTeller(Lair* lairPlayground);
    ~StoryTeller();
    void traversal(LairIterator* iterator);
private:
    Lair* lairPlayground;
};

#endif