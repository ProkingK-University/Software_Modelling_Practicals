#include "StoryTeller.h"
#include "BFSIterator.h"
#include "DFSIterator.h"

void StoryTeller::addEnemy(Enemy *enemy)
{
    enemies.push_back(enemy);
}

void StoryTeller::attack(Lair *lair, std::string type)
{
    Iterator *it = lair->createIterator(type);

    while (it->hasNext())
    {
        for (int i = 0; i < enemies.size(); i++)
        {
            Tile* currentTile = it->next();
            currentTile->defend(enemies);
            enemies[i]->attack(currentTile->bank);
        }
    }
}

StoryTeller::~StoryTeller()
{
    for(Enemy* enemy : enemies)
    {
        delete enemy;
    }

    enemies.clear();
}