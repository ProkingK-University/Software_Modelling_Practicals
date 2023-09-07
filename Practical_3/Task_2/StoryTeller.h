#ifndef STORYTELLER_H
#define STORYTELLER_H

#include <string>
#include <vector>

#include "Enemy.h"

class StoryTeller
{
private:
    std::vector<Enemy *> enemies;

public:
    StoryTeller();

    void attack(std::string type);

    ~StoryTeller();
};

#endif