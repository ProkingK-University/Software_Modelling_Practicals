#include "Accepted.h"
#include "Completed.h"
#include "Negotiation.h"
#include "Rejected.h"
#include "SmartContract.h"
#include "SmartState.h"
#include "Tentatively.h"

#include <iostream>

void testingHandlingUnexpectedStateTransitions();
void stateInitialisation();
void dynamicStateChanges();

int main()
{
    testingHandlingUnexpectedStateTransitions();
    stateInitialisation();
    dynamicStateChanges();
    return 0;
}

void testingHandlingUnexpectedStateTransitions()
{
    std::cout << "======================= Handling Unexpected State Transitions =======================" << std::endl;
    
    SmartContract* etheriumContract = new SmartContract("Etherium");
    etheriumContract->addCondition("Minimum spending amount: R200");
    etheriumContract->addCondition("Maximum spending amount: R50000");
    SmartState smartState(etheriumContract);
    etheriumContract.setState()


}

void stateInitialisation()
{

}

void dynamicStateChanges()
{

}
