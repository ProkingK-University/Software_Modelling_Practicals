#ifndef ENEMY_H
#define ENEMY_H

#include "Bank.h"

class Enemy
{
public:
    Enemy();
    virtual ~Enemy();
    virtual void queryGameComponent() = 0;
    virtual void updateGameComponent() = 0;
    virtual bool storyTellerDecision(bool DepthOrBreadthFirstDecision) = 0;
    virtual int getHealth() = 0;
    virtual void setHealth(int newHealth) = 0;
    virtual int getAttackDamage() = 0;
    virtual void setAttackDamage(Bank* bank) = 0;
    virtual bool getIsAlive() = 0;
    virtual void setIsAliveToDead() = 0;
};

#endif