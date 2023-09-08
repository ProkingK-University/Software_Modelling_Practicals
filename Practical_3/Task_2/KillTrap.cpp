#include "KillTrap.h"

void KillTrap::defend(std::vector<Enemy*> enemies)
{
    for (int i = 0; i < enemies.size(); i++)
    {
        enemies[i]->takeDamage(100);
    }
}