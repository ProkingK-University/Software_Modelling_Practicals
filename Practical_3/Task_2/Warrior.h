#ifndef WARRIOR_H
#define WARRIOR_H

#include "Hero.h"

class Warrior: public Hero
{
private:
    int health;
    int attackDamage;
    bool isAlivey;
    std::string heroType;
    int healthPoints;
    bool canMove;
    int xCoord;
    int yCoord;
public:
    Warrior(std::string heroType, int healthPoints, int xCoord, int yCoord, int attackDamage);
    ~Warrior() {};
    virtual void displayInformation();
    virtual int getHealthPoints();
    virtual void setHealthPoints(int newHealthPoints);
    virtual bool isAlive();
    virtual void slowDown();
    virtual void stopSlowDown();
    virtual int getXCoord();
    virtual void setXCoord(int newXCoord);
    virtual int getYCoord();
    virtual void setYCoord(int newYCoord);
};

#endif