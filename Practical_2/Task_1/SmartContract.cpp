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
}

void SmartContract::reject(std::string reason)
{
    smartState->rejectContract(reason);
}

void SmartContract::setState(SmartState *newState)
{
    smartState = newState;
}

void SmartContract::addCondition(std::string condition)
{
    conditions.push_back(condition);
}

void SmartContract::removeCondition(std::string condition)
{
    auto it = std::find(conditions.begin(), conditions.end(), condition);

    conditions.erase(it);
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