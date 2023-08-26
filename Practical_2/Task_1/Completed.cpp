#include "Completed.h"

Completed::Completed(SmartContract* smartContract) : SmartState(smartContract)
{
    this->name = "Completed";
}

std::string Completed::getName()
{
    return this->name;
}

Completed::~Completed()
{
    delete smartContract;
}

void Completed::acceptContract() {}
void Completed::completeContract() {}
void Completed::rejectContract(std::string reason) {}
void Completed::addCondition(std::string condition) {}
void Completed::removeCondition(std::string condition) {}