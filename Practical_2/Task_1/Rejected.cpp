#include "Rejected.h"

Rejected::Rejected(SmartContract& smartContract) : SmartState(smartContract)
{
    this->name = name;
}

std::string Rejected::getName()
{
    return this->name;
}