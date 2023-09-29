#include "Trap.h"

Trap::Trap(Engine* engine, Hero* hero, GameComponent* bank, int cost, int researchTime) : GameComponent(engine)
{
    this->hero = hero;
    this->bank = bank;
    this->cost = cost;
    this->researchTime = researchTime;
}

void Trap::activate()
{
    isActive = true;
}

void Trap::deactivate()
{
    isActive = false;
}

void Trap::placeTrap(int xCoord, int yCoord)
{
    this->xCoord = xCoord;
    this->yCoord = yCoord;
}

int Trap::getResearchCost()
{
    return cost;
}

int Trap::getResearchTime()
{
    return researchTime;
}

void Trap::initiateResearch(int researchTime)
{
    std::this_thread::sleep_for(std::chrono::seconds(researchTime));
    isResearchComplete = true;
}

void Trap::setHero(Hero* hero)
{
    this->hero = hero;
}
