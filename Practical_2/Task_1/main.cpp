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

}

void stateInitialisation()
{

}

void dynamicStateChanges()
{
    SmartContract* smartContract = new SmartContract("Contract-A");

    smartContract->addCondition("When ETH < 10000 Buy");
    smartContract->addCondition("When ETH > 20000 Sell");
    smartContract->addCondition("When Balance < 1000 Sell");

    smartContract->vote(true);
    smartContract->vote(true);
    smartContract->vote(true);

    smartContract->view();

    smartContract->accept();

    smartContract->view();

    smartContract->removeCondition("When Balance < 1000 Sell");

    smartContract->view();

    smartContract->accept();
    smartContract->accept();
    smartContract->complete();
}