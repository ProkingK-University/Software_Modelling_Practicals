#include "Accepted.h"
#include "Rejected.h"
#include "Negotiation.h"
#include "Tentatively.h"

Tentatively::Tentatively(SmartContract& smartContract) : SmartState(smartContract)
{
    this->name = "Tentatively Accepted";
}

std::string Tentatively::getName()
{
    return this->name;
}

void Tentatively::acceptContract()
{
    bool acceptance = smartContract.getAgreeingParties();

    if (acceptance == true) 
    {
        smartContract.setState(new Accepted(smartContract));

        std::cout << "All parties have agreed...switching to the Accepted state" << std::endl;
    }
    else
    {
        smartContract.setState(new Tentatively(smartContract));

        std::cout << "All parties have not agreed...remaining in Tentatively state" << std::endl;
    }
}

void Tentatively::completeContract()
{
    std::cout << "Error: Unable to complete contact as contract is currently in tentatively accepted stage" << std::endl;
}

void Tentatively::rejectContract()
{
    smartContract.setState(new Rejected(smartContract));

    std::cout << "Contract has been Rejected...switching to Rejected state" << std::endl;
}

void Tentatively::addCondition()
{
    smartContract.clearVotes();
    smartContract.setState(new Negotiation(smartContract));

    std::cout << "New condition has been added...switching to Negotiation state" << std::endl;
}

void Tentatively::removeCondition()
{
    smartContract.clearVotes();
    smartContract.setState(new Negotiation(smartContract));

    std::cout << "New condition has been removed...switching to Negotiation state" << std::endl;
}