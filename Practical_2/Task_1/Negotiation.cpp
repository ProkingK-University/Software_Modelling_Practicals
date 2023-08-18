#include "Negotiation.h"

Negotiation::Negotiation(SmartContract* smartContract) : SmartState(smartContract)
{
    this->name = "Negotiation";
}

std::string Negotiation::getName()
{
    return this->name;
}

void Negotiation::acceptContract()
{
    SmartState* state = new Tentatively(smartContract); 
    smartContract->setState(state);
}

void Negotiation::completeContract()
{
    //TODO: Need to confirm wether we need to throw exceptions or use strings
}

void Negotiation::rejectContract(std::string reason)
{
    SmartState* state = new Tentatively(smartContract);
    smartContract->setState(state);
}

void Negotiation::addCondition(std::string condition)
{
    
}

void Negotiation::removeCondition(std::string condition)
{

}

Negotiation::~Negotiation()
{
    delete smartContract;
}