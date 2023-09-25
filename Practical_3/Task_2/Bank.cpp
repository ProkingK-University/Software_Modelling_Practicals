#include "Bank.h"

Bank::Bank(Engine* engine, int initialAmount) : GameComponent(engine)
{
    currentAmount = initialAmount;
}

void Bank::emptyBank()
{
    currentAmount = 0;
}

void Bank::GameOver()
{
    std::cout << "Game Over: Insufficient funds" << std::endl;
    exit(1);
}

int Bank::getCurrentAmount()
{
    return currentAmount;
}

void Bank::setCurrentAmount(int newAmount)
{
    currentAmount = newAmount;
}

void Bank::fundResearch(int cost)
{
    if (currentAmount >= cost)
    {
        currentAmount -= cost;
    }
    else
    {
        GameOver();
    }
}

void Bank::sendNotification()
{
}

void Bank::receiveNotification(std::string message)
{
    std::cout << message; 
}
