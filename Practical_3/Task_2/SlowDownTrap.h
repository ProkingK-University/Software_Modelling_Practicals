#ifndef SLOW_DOWN_TRAP_H
#define SLOW_DOWN_TRAP_H

#include "Trap.h"

class SlowDownTrap : public Trap
{
public:
    SlowDownTrap(Engine* engine, Hero* hero, GameComponent* bank, int slowDuration, int cost, int researchTime);
    virtual void trigger();
    virtual bool getStatus();
    virtual void sendNotification();
    virtual void receiveNotification(std::string message);
private:
    int slowDuration;
    bool isResearchComplete;
};

#endif