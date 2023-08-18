#include "Rejected.h"

Rejected::Rejected(SmartContract* smartContract) : SmartState(smartContract)
{
    this->name = name;
}

std::string Rejected::getName()
{
    return this->name;
}

void Rejected::acceptContract()
{

}

void Rejected::completeContract()
{

}

void Rejected::rejectContract(std::string reason)
{

}

void Rejected::addCondition(std::string condition)
{

}

void Rejected::removeCondition(std::string condition)
{

}

Rejected::~Rejected()
{
    delete smartContract;
}