#include <iostream>
#include <algorithm>

#include "Negotiation.h"
#include "SmartContract.h"

SmartContract::SmartContract(std::string name)
{
    this->name = name;
    smartState = new Negotiation(this);
}

SmartContract::SmartContract(std::string name, std::vector<std::string> &conditions)
{
    this->name = name;
    this->conditions = conditions;
}

void SmartContract::clearVotes()
{
    votes.clear();

    std::cout << "Votes have been cleared" << std::endl;
}

bool SmartContract::getAgreeingParties()
{
    int agreed = 0;
    for (int i = 0; i < votes.size(); i++) 
    {
        if (votes[i] == 1)
        {
            agreed++;
        }
    }

    if (agreed == votes.size()) 
    {
        return true;
    }
    return false;
}

void SmartContract::view()
{
    std::cout << toString() << std::endl;
}

void SmartContract::accept()
{
    smartState->acceptContract();
}

void SmartContract::complete()
{
    smartState->completeContract();
}

void SmartContract::vote(bool vote)
{
    votes.push_back(vote);

    std::cout << "Voted: " << vote <<std::endl;
}

void SmartContract::reject(std::string reason)
{
    smartState->rejectContract(reason);
}

void SmartContract::setState(SmartState *newState)
{
    smartState = newState;

    std::cout << "Contract state has changed to: " << newState->getName() << std::endl;
}

void SmartContract::addCondition(std::string condition)
{
    conditions.push_back(condition);

    std::cout << "Added condition: " << condition << std::endl;
}

void SmartContract::removeCondition(std::string condition)
{
    auto it = std::find(conditions.begin(), conditions.end(), condition);

    conditions.erase(it);

    std::cout << "Removed condition: " << condition << std::endl;
}

std::string SmartContract::toString()
{
    std::string output = "";
    std::string state = smartState->getName();

    output += "Contract " + name + ":\n";
    output += "State: " + state + "\n";
    
    if (state == "Tentatively Accepted" || state == "Accepted")
    {
        output += "Votes:\n";

        for (const bool &vote : votes)
        {
            output += vote + "\n";
        }
    }

    output += "Conditions:\n";

    for (const std::string &condition : conditions)
    {
        output += condition + "\n";
    }

    return output;
}

SmartContract::~SmartContract()
{
    delete smartState;
}