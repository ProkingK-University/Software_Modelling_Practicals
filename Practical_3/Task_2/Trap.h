#ifndef TRAP_H
#define TRAP_H

#include <chrono>
#include <thread> 

#include "Hero.h"
#include "Lair.h"
#include "Bank.h"
#include "GameComponent.h"

class Trap : public GameComponent
{
public:
    Trap(Engine* engine, Hero* hero, GameComponent* bank, int cost, int researchTime);
    virtual ~Trap() {}
    void activate();
    void deactivate();
    virtual void trigger() = 0;
    virtual bool getStatus() = 0;
    virtual void sendNotification() = 0;
    virtual void receiveNotification(std::string message) = 0;
    void placeTrap(int xCoord, int yCoord);
    int getResearchCost();
    int getResearchTime();
    void initiateResearch(int researchTime);
    void setHero(Hero* hero);
protected:
    int xCoord;
    int yCoord;
    int cost;
    int researchTime;
    bool isResearchComplete;
    bool isActive;
    Hero* hero;
    GameComponent* bank;
};

#endif