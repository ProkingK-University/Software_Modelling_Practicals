#include "Accepted.h"
#include "Completed.h"
#include "Negotiation.h"
#include "Rejected.h"
#include "SmartContract.h"
#include "SmartState.h"
#include "Tentatively.h"

#include <iostream>

void testingExceptions();
void dynamicStateChanges();

int main()
{
    testingExceptions();
    dynamicStateChanges();
    return 0;
}

void testingExceptions()
{
    std::cout << "======================= Handling Exceptions =======================" << std::endl;
    
    std::cout << "======================= Creating Smart Contract =======================" << std::endl;
    SmartContract* etheriumContract = new SmartContract("Etherium");
    std::cout << "Loading..." << std::endl;
    std::cout << "Done!" << std::endl << std::endl;

    std::cout << "======================= Adding Conditions To Existing Smart Contract =======================" << std::endl;
    etheriumContract->addCondition("Minimum spending amount: R200");
    etheriumContract->addCondition("Maximum spending amount: R50000");
    std::cout << "Loading..." << std::endl;
    std::cout << "Done!" << std::endl << std::endl;

    std::cout << "======================= Current Info About Etherium Contract =======================" << std::endl;
    std::cout << "Smart Contract Name: " << etheriumContract->getName() << std::endl;
    /*
    std::vector<bool> currentVotes = etheriumContract->getVotes();
    std::string votesString = "";
    for (int i = 0; i < currentVotes.size(); i++)
    {
        votesString += "Vote " + i + std::to_string(currentVotes[i]) + "/n";
    }
    std::cout << "Votes: " << votesString;
    std::vector<bool> currentConditions = etheriumContract->getVotes();
    std::string conditionsString = "";
    for (int i = 0; i < currentConditions.size(); i++)
    {
        conditionsString += "Condition " + i + std::to_string(currentConditions[i]) + "/n";
    }
    std::cout << "Conditions: " << conditionsString;

    std::cout << "======================= Creating Smart States =======================" << std::endl;
    SmartState* negotiationState = new Negotiation(etheriumContract);
    SmartState* tentativelyAcceptedState = new Tentatively(etheriumContract);
    SmartState* acceptedState = new Accepted(etheriumContract);
    SmartState* rejectedState = new Rejected(etheriumContract);
    SmartState* completedState = new Completed(etheriumContract);
    std::cout << "Loading..." << std::endl;
    std::cout << "Done!" << std::endl << std::endl;

    std::cout << "======================= Current Info About Each Smart State =======================" << std::endl;
    
    std::cout << "======================= Testing Transition From Negotiation to Completed (EXCEPTION) =======================" << std::endl;
    etheriumContract->setState(completedState);
    std::cout << std::endl << std::endl;

    std::cout << "======================= Testing Transition From Tentatively Accepted to Completed (EXCEPTION) =======================" << std::endl;
    etheriumContract->setState(completedState);
    std::cout << std::endl << std::endl;

    std::cout << "======================= Adding Condition When Contract Is Already Completed (EXCEPTION) =======================" << std::endl;
    etheriumContract->addCondition("Currency needs to be in Rands");
    std::cout << std::endl << std::endl;

    std::cout << "======================= Adding Condition When Contract Is Already Completed (EXCEPTION) =======================" << std::endl;
    etheriumContract->removeCondition("Maximum spending amount: R50000");
    std::cout << std::endl << std::endl;

    std::cout << "======================= Testing Transition From Accepted to Accepted (EXCEPTION) =======================" << std::endl;
    etheriumContract->setState(acceptedState);
    std::cout << std::endl << std::endl;

    std::cout << "======================= Testing Transition From Accepted to Rejected (EXCEPTION) =======================" << std::endl;
    etheriumContract->setState(rejectedState);
    std::cout << std::endl << std::endl;
    */
}


void dynamicStateChanges()
{

}
