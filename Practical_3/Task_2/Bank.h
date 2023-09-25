#ifndef BANK_H
#define BANK_H

#include <iostream>

#include "GameComponent.h"

class Bank : public GameComponent
{
public:
    Bank(Engine* engine, int initialAmount);
    ~Bank(){}
    void emptyBank();
    void GameOver();
    int getCurrentAmount();
    void setCurrentAmount(int newAmount);
    void fundResearch(int cost);
    virtual void sendNotification();
    virtual void receiveNotification(std::string message); 
private:
    int currentAmount;
};
#endif