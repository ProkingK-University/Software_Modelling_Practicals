#ifndef TELEPORT_TRAP_H
#define TELEPORT_TRAP_H

#include "Trap.h"

class TeleportTrap : public Trap
{
public:
    TeleportTrap(Engine* engine, Hero* hero, GameComponent* bank, int teleportedXCoord, int teleportedYCoord, int cost, int researchTime);
    virtual void trigger();
    virtual bool getStatus();
    virtual void sendNotification();
    virtual void receiveNotification(std::string message);
private:
    int teleportedXCoord;
    int teleportedYCoord;
};

#endif