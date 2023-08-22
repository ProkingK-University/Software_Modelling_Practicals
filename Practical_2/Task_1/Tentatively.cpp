#include "Tentatively.h"

Tentatively::Tentatively(SmartContract* smartContract) : SmartState(smartContract)
{
    this->name = "Tentatively Accepted";
}

std::string Tentatively::getName()
{
    this->name;
}

void Tentatively::acceptContract()
{
    bool acceptance = smartContract->getAgreeingParties();
    if (acceptance == true) 
    {
        SmartState* state = new Accepted(smartContract); 
        smartContract->setState(state);
    }
    else 
    {
        SmartState* state = new Tentatively(smartContract); 
        smartContract->setState(state);
    }
}

void Tentatively::completeContract()
{
    std::cout << "Error: Unbale to complete contact as contract is currently in tentatively accepted stage" << std::endl;
}

void Tentatively::rejectContract(std::string reason)
{
    SmartState* state = new Rejected(smartContract); 
    smartContract->setState(state);
}

void Tentatively::addCondition(std::string condition)
{
    smartContract->clearVotes();
    SmartState* state = new Negotiation(smartContract); 
    smartContract->setState(state);
}

void Tentatively::removeCondition(std::string condition)
{

    smartContract->clearVotes();
    SmartState* state = new Negotiation(smartContract); 
    smartContract->setState(state);
}

Tentatively::~Tentatively()
{
    delete smartContract;
}