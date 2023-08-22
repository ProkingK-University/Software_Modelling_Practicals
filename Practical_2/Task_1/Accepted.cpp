#include "Accepted.h"

Accepted::Accepted(SmartContract* smartContract) : SmartState(smartContract)
{
    this->name = "Accepted";
}

std::string Accepted::getName()
{
    return this->name;
}

void Accepted::acceptContract()
{
    //TODO: Need to confirm wether we need to throw exceptions or use strings
}

void Accepted::completeContract()
{
    //TODO: Need to confirm wether we need to throw exceptions or use strings
    std::cout << "Contract has been Completed...switching to Completed state" << std::endl;
}

void Accepted::rejectContract(std::string reason)
{
    //TODO: Need to confirm wether we need to throw exceptions or use strings
}

void Accepted::addCondition(std::string condition)
{
    //TODO: Need to confirm wether we need to throw exceptions or use strings
}

void Accepted::removeCondition(std::string condition)
{
    //TODO: Need to confirm wether we need to throw exceptions or use strings
}

Accepted::~Accepted()
{
    delete smartContract;
}