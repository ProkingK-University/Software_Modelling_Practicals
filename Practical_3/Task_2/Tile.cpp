#include "Tile.h"

Tile::Tile(int xCoord, int yCoord)
{
    this->xCoord = xCoord;
    this->yCoord = yCoord;
    up = down = left = right = nullptr;
}

Tile::~Tile()
{
    delete up;
    up = nullptr;
    delete down;
    down = nullptr;
    delete left;
    left = nullptr;
    delete right;
    right = nullptr;
}

int Tile::getXCoord()
{
    return xCoord;
}

void Tile::setXCoord(int newXCoord)
{
    xCoord = newXCoord;
}

int Tile::getYCoord()
{
    return yCoord;
}

void Tile::setYCoord(int newYCoord)
{
    yCoord = newYCoord;
}

Tile* Tile::getUp()
{
    return up;
}

void Tile::setUp(Tile* newUp)
{
    up = newUp;
}

Tile* Tile::getDown()
{
    return down;
}

void Tile::setDown(Tile* newDown)
{
    down = newDown;
}

Tile* Tile::getLeft()
{
    return left;
}

void Tile::setLeft(Tile* newLeft)
{
    left = newLeft;
}

Tile* Tile::getRight()
{
    return right;
}

void Tile::setRight(Tile* newRight)
{
    right = newRight;
}

void Tile::setBank(Bank* bank)
{
    this->bank = bank;
}

void Tile::defend(std::vector<Hero*> heroes)
{
    if (trap != nullptr)
    {
        for (int i = 0; i < heroes.size(); i++)
        {
            trap->setHero(heroes[i]);
            trap->trigger();
        }
    }

    if (bank != nullptr)
    {
        bank->emptyBank();
        bank->GameOver();
    }
}
