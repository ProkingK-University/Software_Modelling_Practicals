#include "Warrior.h"

Warrior::Warrior(int health, int attackDamage)
{
    this->health = health;
    this->attackDamage = attackDamage;
    isAlive = true;
}

void Warrior::queryGameComponent()
{

}

void Warrior::updateGameComponent()
{

}

bool Warrior::storyTellerDecision(bool DepthOrBreadthFirstDecision)
{
    return false;
}

int Warrior::getHealth()
{
    return health;
}

void Warrior::setHealth(int newHealth)
{
    health = newHealth;
}

int Warrior::getAttackDamage()
{
    return attackDamage;
}

void Warrior::setAttackDamage(Bank *bank)
{
    if (this->getHealth() > 0 && bank != nullptr)
    {
        bank->emptyBank();
    }
}


bool Warrior::getIsAlive()
{
    return isAlive;
}

void Warrior::setIsAliveToDead()
{
    isAlive = false;
}
