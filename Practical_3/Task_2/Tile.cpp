#include "Tile.h"

Tile::Tile(int xCoord, int yCoord)
{
    trap = nullptr;
    bank = nullptr;
    this->xCoord = xCoord;
    this->yCoord = yCoord;
}

void Tile::defend(std::vector<Enemy*> enemies)
{
    if (trap != nullptr)
    {
        trap->defend(enemies);
    }
}