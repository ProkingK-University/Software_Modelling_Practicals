#include "Bank.h"

Bank::Bank(int initialAmount)
{
    currentAmount = initialAmount;
}

void Bank::emptyBank()
{
    currentAmount = 0;
}

int Bank::getCurrentAmount()
{
    return currentAmount;
}

void Bank::fundResearch()
{
}

void Bank::queryGameComponent()
{
}

void Bank::updateGameComponent()
{
}
