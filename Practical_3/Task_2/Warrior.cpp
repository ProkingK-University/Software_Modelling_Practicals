#include "Warrior.h"

Warrior::Warrior(std::string heroType, int healthPoints, int xCoord, int yCoord, int attackDamage) : Hero()
{
    this->health = health;
    this->attackDamage = attackDamage;
    isAlivey = true;
    this->heroType = heroType;
    this->healthPoints = healthPoints;
    canMove = true;
    this->xCoord = xCoord;
    this->yCoord = yCoord;
}


int Warrior::getHealthPoints()
{
    return healthPoints;
}

void Warrior::setHealthPoints(int newHealthPoints)
{
    healthPoints = newHealthPoints;
}

bool Warrior::isAlive()
{
    if (healthPoints <= 0)
    {
        return false;
    }
    return true;
}

void Warrior::slowDown()
{
    canMove = false;
}

void Warrior::stopSlowDown()
{
    canMove = true;
}

int Warrior::getXCoord()
{
    return xCoord;
}

void Warrior::setXCoord(int newXCoord)
{
    xCoord = newXCoord;
}

int Warrior::getYCoord()
{
    return yCoord;
}

void Warrior::setYCoord(int newYCoord)
{
    yCoord = newYCoord;
}

// void Warrior::queryGameComponent()
// {

// }

// void Warrior::updateGameComponent()
// {

// }


void Warrior::displayInformation()
{
    std::cout << "   HERO STATS\n";
    // std::cout << "----------------\n";
    // std::cout << "Hero Type: " << heroType << "\n";
    // std::cout << "Health Points: " << healthPoints << "\n";
}
