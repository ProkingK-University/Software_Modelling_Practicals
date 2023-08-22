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
    std::cout << "Error: Contract is already accepted" << std::endl;
}

void Accepted::completeContract()
{
    bool acceptance = smartContract->getAgreeingParties();
    if (acceptance == true) 
    {
        SmartState* state = new Completed(smartContract); 
        smartContract->setState(state);

        std::cout << "All parties have agreed...switching to Completed state" << std::endl;
    }
    else 
    {
        SmartState* state = new Accepted(smartContract);
        smartContract->setState(state);

        std::cout << "All parties have not agreed...switching to Accepted state" << std::endl;
    }
}

void Accepted::rejectContract(std::string reason)
{
    std::cout << "Error: Contract is already accepted" << std::endl;
}

void Accepted::addCondition(std::string condition)
{
    std::cout << "Error: Contract is already accepted" << std::endl;
}

void Accepted::removeCondition(std::string condition)
{
    std::cout << "Error: Contract is already accepted" << std::endl;
}

Accepted::~Accepted()
{
    delete smartContract;
}