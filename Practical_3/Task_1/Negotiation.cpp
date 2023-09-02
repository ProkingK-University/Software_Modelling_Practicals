#include "Rejected.h"
#include "Negotiation.h"
#include "Tentatively.h"

Negotiation::Negotiation(SmartContract& smartContract) : SmartState(smartContract)
{
    this->name = "Negotiation";
}

std::string Negotiation::getName()
{
    return this->name;
}

void Negotiation::acceptContract()
{
    smartContract.setState(new Tentatively(smartContract));

    std::cout << "Contract has been Tentatively Accepted...switching to Tentatively Accepted state" << std::endl;
}

void Negotiation::completeContract()
{
    std::cout << "Error: Unable to complete contact as contract is currently in negotiation stage" << std::endl;
}

void Negotiation::rejectContract()
{
    smartContract.setState(new Rejected(smartContract));

    std::cout << "Contract has been Rejected...switching to Rejected state" << std::endl;
}

void Negotiation::addCondition(std::string condition)
{
    smartContract.add(condition);

    std::cout << "Added condition: " << condition << std::endl;
}

void Negotiation::removeCondition(std::string condition)
{
    smartContract.remove(condition);
    
    std::cout << "Removed condition: " << condition << std::endl;
}