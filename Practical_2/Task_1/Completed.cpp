#include "Completed.h"

Completed::Completed(SmartContract& smartContract) : SmartState(smartContract)
{
    this->name = "Completed";
}

std::string Completed::getName()
{
    return this->name;
}