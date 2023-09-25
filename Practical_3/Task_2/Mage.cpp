#include "Mage.h"

Mage::Mage(int health, int attackDamage) : Hero()
{
    this->health = health;
    this->attackDamage = attackDamage;
    isAlive = true;
}

// void Mage::queryGameComponent()
// {

// }

// void Mage::updateGameComponent()
// {

// }

bool Mage::storyTellerDecision(bool DepthOrBreadthFirstDecision)
{
    return false;
}

int Mage::getHealth()
{
    return health;
}

void Mage::setHealth(int newHealth)
{
    health = newHealth;
}

int Mage::getAttackDamage()
{
    return attackDamage;
}

void Mage::setAttackDamage(Bank *bank)
{
    if (this->getHealth() > 0 && bank != nullptr)
    {
        bank->emptyBank();
    }
}


bool Mage::getIsAlive()
{
    return isAlive;
}

void Mage::setIsAliveToDead()
{
    isAlive = false;
}
