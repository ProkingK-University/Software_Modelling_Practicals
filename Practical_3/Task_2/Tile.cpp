#include "Tile.h"

Tile::Tile(int xCoord, int yCoord)
{
    trap = nullptr;
    bank = nullptr;
    this->xCoord = xCoord;
    this->yCoord = yCoord;
}

Tile::~Tile()
{
    delete trap;
    trap = nullptr;
    delete bank;
    bank = nullptr;
    delete up;
    up = nullptr;
    delete down;
    down = nullptr;
    delete left;
    left = nullptr;
    delete right;
    right = nullptr;
}

void Tile::defend(std::vector<Enemy*> enemies)
{
    if (trap != nullptr)
    {
        trap->defend(enemies);
    }
}