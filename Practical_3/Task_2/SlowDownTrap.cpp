#include "SlowDownTrap.h"

SlowDownTrap::SlowDownTrap(Engine* engine, Hero* hero, GameComponent* bank, int slowDuration, int cost, int researchTime) : Trap(engine, hero, bank, cost, researchTime)
{
    this->slowDuration = slowDuration;
    activate();
}

void SlowDownTrap::trigger()
{
    if (isActive)
    {
        for (int i = slowDuration; i >= 0; i++)
        {
            hero->slowDown();
        }
        deactivate();
    }   
}

bool SlowDownTrap::getStatus()
{
    if (isResearchComplete) {
        std::cout << "Slow Down Trap research is complete.\n";
        sendNotification();
        return true;
    } else {
        std::cout << "Slow Down Trap research is in progress.\n";
        return false;
    }
}

void SlowDownTrap::sendNotification()
{
    std::string message = "New slow down trap has been added to your arsenal.\n";
    engine->notify(this, message);
}

void SlowDownTrap::receiveNotification(std::string message)
{
}
