#ifndef HERO_H
#define HERO_H

#include "Bank.h"
#include "GameComponent.h"

class Hero
{
public:
    Hero() {}
    virtual ~Hero() {}
    virtual int getHealthPoints() = 0;
    virtual void setHealthPoints(int newHealthPoints) = 0;
    virtual bool isAlive() = 0;
    virtual void slowDown() = 0;
    virtual void stopSlowDown() = 0;
    virtual int getXCoord() = 0;
    virtual void setXCoord(int newXCoord) = 0;
    virtual int getYCoord() = 0;
    virtual void setYCoord(int newYCoord) = 0;
private:
    
};

#endif