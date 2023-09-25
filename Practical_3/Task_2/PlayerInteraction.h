#ifndef PLAYER_INTERACTION_H
#define PLAYER_INTERACTION_H

#include <queue>
#include "Command.h"
#include "Trap.h"
#include "KillHeroTrap.h"
#include "SlowDownTrap.h"
#include "TeleportTrap.h"
#include "GameComponent.h"
#include "Bank.h"

class PlayerInteraction : public GameComponent
{
public:
    PlayerInteraction(Engine* engine);
    ~PlayerInteraction();
    void assignCommandToButton(Command* command);
    void removeCommandFromButton(int index);
    void addTrapButtonPushed();
    void createTileButtonPushed();
    void removeTileButtonPushed();
    void viewCurrentWealthButtonPushed();
    void researchTrapButtonPushed();
    void enqueueResearch(Command* researchCommand);
    void executeNextResearch();
    virtual void sendNotification();
    virtual void receiveNotification(std::string message);
private:
    Command* button[2];
    int buttonIndex;
    std::queue<Command*> researchQueue;
};

#endif