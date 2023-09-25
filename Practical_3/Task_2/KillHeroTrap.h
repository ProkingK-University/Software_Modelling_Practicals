#ifndef KILL_HERO_TRAP_H
#define KILL_HERO_TRAP_H

#include "Trap.h"

class KillHeroTrap : public Trap
{
public:
    KillHeroTrap(Engine* engine, Hero* hero, GameComponent* bank, int damage, int cost, int researchTime);
    virtual void trigger();
    virtual bool getStatus();
    virtual void sendNotification();
    virtual void receiveNotification(std::string message);
private:
    int damage;
};

#endif