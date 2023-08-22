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

        std::cout << "All parties have agreed...switching to the Accepted state" << std::endl;
    }
    else
    {
        SmartState* state = new Tentatively(smartContract); 
        smartContract->setState(state);

        std::cout << "All parties have not agreed...remaining in Tentatively state" << std::endl;
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

    std::cout << "Contract has been Rejected...switching to Rejected state" << std::endl;

}

void Tentatively::addCondition(std::string condition)
{
    smartContract->clearVotes();
    SmartState* state = new Negotiation(smartContract); 
    smartContract->setState(state);

    std::cout << "New condition has been added...switching to Negotiation state" << std::endl;
}

void Tentatively::removeCondition(std::string condition)
{

    smartContract->clearVotes();
    SmartState* state = new Negotiation(smartContract); 
    smartContract->setState(state);

    std::cout << "New condition has been removed...switching to Negotiation state" << std::endl;
}

Tentatively::~Tentatively()
{
    delete smartContract;
}