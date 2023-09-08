#ifndef STORYTELLER_H
#define STORYTELLER_H

#include <string>
#include <vector>

#include "Lair.h"
#include "Enemy.h"

class StoryTeller
{
private:
    std::vector<Enemy *> enemies;

public:
    void addEnemy(Enemy *enemy);
    void attack(Lair *lair, std::string type);

    ~StoryTeller();
};

#endif