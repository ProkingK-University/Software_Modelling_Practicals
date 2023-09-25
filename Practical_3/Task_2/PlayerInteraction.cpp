#include "PlayerInteraction.h"

PlayerInteraction::PlayerInteraction(Engine* engine) : GameComponent(engine)
{
    buttonIndex = 0;
    for (int i = 0; i < 2; i++)
    {
        button[i] = nullptr;
    }
}

PlayerInteraction::~PlayerInteraction()
{
    for (int i = 0; i < 2; i++)
    {
        delete button[i];
    }
}

void PlayerInteraction::assignCommandToButton(Command* command)
{
    if (buttonIndex <= 2) 
    {
        button[buttonIndex] = command;
        buttonIndex++;
    }
}

void PlayerInteraction::removeCommandFromButton(int index)
{
    if (button[index] != nullptr)
    {
        button[index] = nullptr;
        buttonIndex--;
    }
}

void PlayerInteraction::addTrapButtonPushed()
{
    button[1]->execute();
}

void PlayerInteraction::createTileButtonPushed()
{
    button[1]->execute();
}

void PlayerInteraction::removeTileButtonPushed()
{
    button[1]->execute();
}

void PlayerInteraction::viewCurrentWealthButtonPushed()
{
    button[0]->execute();
}

void PlayerInteraction::researchTrapButtonPushed()
{
    enqueueResearch(button[1]);
    executeNextResearch();
}

void PlayerInteraction::enqueueResearch(Command *researchCommand)
{
    researchQueue.push(researchCommand);
    sendNotification();
}

void PlayerInteraction::executeNextResearch()
{
    if (!researchQueue.empty()) {
        Command* researchCommand = researchQueue.front();
        researchQueue.pop();
        researchCommand->execute();
    }
}

void PlayerInteraction::sendNotification()
{
    int gold = researchQueue.front()->getResearchCost();
    std::string amount = std::to_string(gold);
    std::string message = amount + " gold has been used to fund research\n";
    engine->notify(this, message);
}


void PlayerInteraction::receiveNotification(std::string message)
{
    std::cout << message;
}