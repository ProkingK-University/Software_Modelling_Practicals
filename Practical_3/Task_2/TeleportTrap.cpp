#include "TeleportTrap.h"

TeleportTrap::TeleportTrap(Engine* engine, Hero* hero, GameComponent* bank, int teleportedXCoord, int teleportedYCoord, int cost, int researchTime) : Trap(engine, hero, bank, cost, researchTime)
{
    this->teleportedXCoord = teleportedXCoord;
    this->teleportedYCoord = teleportedYCoord;
    activate();
}


void TeleportTrap::trigger()
{
    if (isActive)
    {
        std::cout << "Hero has been teleported from [" << hero->getXCoord() << "," << hero->getYCoord() << "]";
        hero->setXCoord(teleportedXCoord);
        hero->setYCoord(teleportedYCoord);
        std::cout << " to [" << hero->getXCoord() << "," << hero->getYCoord() << "]";
        deactivate();
    }
}

void TeleportTrap::sendNotification()
{
    std::string message = "New teleport trap that has been added to your arsenal.\n";
    engine->notify(this, message);
}

void TeleportTrap::receiveNotification(std::string message)
{
    std::cout << message;
}

bool TeleportTrap::getStatus()
{
    if (isResearchComplete) {
        std::cout << "Teleport Trap research is complete.\n";
        return true;
    } else {
        std::cout << "Teleport Trap research is in progress.\n";
        return false;
    }
}