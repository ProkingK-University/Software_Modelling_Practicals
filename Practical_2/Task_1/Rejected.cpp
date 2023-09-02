#include "Rejected.h"

Rejected::Rejected(SmartContract& smartContract) : SmartState(smartContract)
{
    this->name = "Rejected";
}

std::string Rejected::getName()
{
    return this->name;
}