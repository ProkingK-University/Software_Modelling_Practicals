#include "KillHeroTrap.h"

KillHeroTrap::KillHeroTrap(Engine* engine, Hero* hero, GameComponent* bank, int damage, int cost, int researchTime) : Trap(engine, hero, bank, cost, researchTime)
{
    this->damage = damage;
    activate();
}

void KillHeroTrap::trigger()
{
    if (isActive)
    {
        hero->setHealthPoints(0);
        deactivate();
    }
}

bool KillHeroTrap::getStatus()
{
    if (isResearchComplete) {
        std::cout << "Kill Hero Trap research is complete.\n";
        return true;
    } else {
        std::cout << "Kill Hero Trap research is in progress.\n";
        return false;
    }
}

void KillHeroTrap::sendNotification()
{
    std::string message = "New kill hero trap has been added to your arsenal,\n";
    engine->notify(this, message);
}

void KillHeroTrap::receiveNotification(std::string message)
{
    std::cout << message;
}
