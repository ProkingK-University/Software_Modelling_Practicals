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

    std::cout << "Contract has been Accepted...switching to Accepted state" << std::endl;
}

void Negotiation::completeContract()
{
    std::cout << "Error: Unbale to complete contact as contract is currently in negotiation stage" << std::endl;
}

void Negotiation::rejectContract(std::string reason)
{
    SmartState* state = new Tentatively(smartContract);
    smartContract->setState(state);

    std::cout << "Contract has been Rejected...switching to Rejected state" << std::endl;
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