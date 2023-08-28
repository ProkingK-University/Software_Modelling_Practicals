#include "Accepted.h"
#include "Completed.h"
#include "Negotiation.h"
#include "Rejected.h"
#include "SmartContract.h"
#include "SmartState.h"
#include "Tentatively.h"

#include <iostream>

void testingExceptions();
void testingTransitionFromNegationToCompleted();
void testingTransitionFromTentativelyAcceptedToCompleted();
void testingTransitionFromAcceptedToAccepted();
void testingTransitionFromAcceptedToRejected();
void testingAddingAndRemovingConditionsInAcceptedState();
void dynamicStateChanges();

int main()
{
    //testingExceptions();
    dynamicStateChanges();
    return 0;
}

void testingExceptions()
{
    testingTransitionFromNegationToCompleted();
    testingTransitionFromTentativelyAcceptedToCompleted();
    testingTransitionFromAcceptedToAccepted();
    testingTransitionFromAcceptedToRejected();
    testingAddingAndRemovingConditionsInAcceptedState();
}

void testingTransitionFromNegationToCompleted()
{
    std::cout << "======================= TESTING NEGATION TO COMPLETED TRANSITION (EXCEPTION) =======================" << std::endl;

    std::cout << "Creating Smart Contract" << std::endl;
    SmartContract* contractA = new SmartContract("Contract-A");
    std::cout << "Loading..." << std::endl;
    std::cout << "Done!" << std::endl << std::endl;

    std::cout << "Creating Necessary States For Testing" << std::endl;
    SmartState* negotiationState = new Negotiation(*contractA);
    SmartState* completedState = new Completed(*contractA);
    std::cout << "Loading..." << std::endl;
    std::cout << "Done!" << std::endl << std::endl;

    std::cout << "Testing Transition From Negation to Completed (EXCEPTION)" << std::endl;
    contractA->setState(completedState);
    std::cout << std::endl << std::endl;

    delete completedState;
}

void testingTransitionFromTentativelyAcceptedToCompleted()
{
    std::cout << "======================= TESTING TENTATIVELY ACCEPTED TO COMPLETED TRANSITION (EXCEPTION) =======================" << std::endl;

    std::cout << "Creating Smart Contract" << std::endl;
    SmartContract* contractB = new SmartContract("Contract-B");
    std::cout << "Loading..." << std::endl;
    std::cout << "Done!" << std::endl << std::endl;

    std::cout << "Creating Necessary States For Testing" << std::endl;
    SmartState* negotiationState = new Negotiation(*contractB);
    SmartState* tentativelyAcceptedState = new Tentatively(*contractB);
    SmartState* completedState = new Completed(*contractB);
    std::cout << "Loading..." << std::endl;
    std::cout << "Done!" << std::endl << std::endl;

    std::cout << "Testing Transition From Tentatively Accepted to Completed (EXCEPTION)" << std::endl;
    contractB->setState(tentativelyAcceptedState);
    contractB->setState(completedState);
    std::cout << std::endl << std::endl;

    delete completedState;
}

void testingTransitionFromAcceptedToAccepted()
{
    std::cout << "======================= TESTING ACCEPTED TO ACCEPTED TRANSITION (EXCEPTION) =======================" << std::endl;

    std::cout << "Creating Smart Contract" << std::endl;
    SmartContract* contractC = new SmartContract("Contract-C");
    std::cout << "Loading..." << std::endl;
    std::cout << "Done!" << std::endl << std::endl;

    std::cout << "Adding Votes" << std::endl;
    contractC->vote(true);
    std::cout << std::endl << std::endl;

    std::cout << "Creating Necessary States For Testing" << std::endl;
    SmartState* negotiationState = new Negotiation(*contractC);
    SmartState* tentativelyAcceptedState = new Negotiation(*contractC);
    SmartState* acceptedState = new Accepted(*contractC);
    std::cout << "Loading..." << std::endl;
    std::cout << "Done!" << std::endl << std::endl;

    std::cout << "Testing Transition From Accepted to Accepted (EXCEPTION)" << std::endl;
    contractC->setState(tentativelyAcceptedState);
    contractC->setState(acceptedState);
    contractC->setState(acceptedState);
    std::cout << std::endl << std::endl;
}

void testingTransitionFromAcceptedToRejected()
{
    std::cout << "======================= TESTING ACCEPTED TO REJECTED TRANSITION (EXCEPTION) =======================" << std::endl;

    std::cout << "Creating Smart Contract" << std::endl;
    SmartContract* contractD = new SmartContract("Contract-D");
    std::cout << "\tLoading..." << std::endl;
    std::cout << "\tDone!" << std::endl << std::endl;

    std::cout << "Adding Votes" << std::endl;
    contractD->vote(true);
    std::cout << std::endl << std::endl;

    std::cout << "Creating Necessary States For Testing" << std::endl;
    SmartState* negotiationState = new Negotiation(*contractD);
    SmartState* tentativelyAcceptedState = new Tentatively(*contractD);
    SmartState* acceptedState = new Accepted(*contractD);
    SmartState* rejectedState = new Rejected(*contractD);
    std::cout << "Loading..." << std::endl;
    std::cout << "Done!" << std::endl << std::endl;

    std::cout << "Testing Transition From Accepted to Rejected (EXCEPTION)" << std::endl;
    contractD->setState(tentativelyAcceptedState);
    contractD->setState(acceptedState);
    contractD->setState(rejectedState);
    std::cout << std::endl << std::endl;

    delete negotiationState;
    delete rejectedState;
}

void testingAddingAndRemovingConditionsInAcceptedState()
{
    std::cout << "====== TESTING ADDING AND REMOVING CONDITIONS IN ACCEPTED STATE(EXCEPTION) =====" << std::endl;

    std::cout << "Creating Smart Contract" << std::endl;
    SmartContract* contractE = new SmartContract("Contract-E");
    std::cout << "\tLoading..." << std::endl;
    std::cout << "\tDone!" << std::endl << std::endl;

    std::cout << "Adding Conditions to Existing Smart Contract" << std::endl;
    contractE->addCondition("Minimum amount to purchase Etherium is R200");

    std::cout << "Adding Votes" << std::endl;
    contractE->vote(true);
    std::cout << std::endl << std::endl;

    std::cout << "Current Information About Smart Contract" << std::endl;
    contractE->view();
    std::cout << std::endl << std::endl;

    std::cout << "Creating Necessary States For Testing" << std::endl;
    SmartState* negotiationState = new Negotiation(*contractE);
    SmartState* tentativelyAcceptedState = new Tentatively(*contractE);
    SmartState* acceptedState = new Accepted(*contractE);
    std::cout << "Loading..." << std::endl;
    std::cout << "Done!" << std::endl << std::endl;

    std::cout << "Testing Transition From Accepted to Rejected (EXCEPTION)" << std::endl;
    contractE->setState(tentativelyAcceptedState);
    contractE->setState(acceptedState);
    contractE->addCondition("Maxiumum amount to purchase Etherium is R50000");
    // TODO: HAVING AN ISSUE 
    contractE->removeCondition("Minimum amount to purchase Etherium is R200");
    
    std::cout << std::endl << std::endl;

    delete acceptedState;
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
    
    smartContract->view();

    smartContract->accept();
    smartContract->complete();
    smartContract->accept();
    smartContract->complete();
}