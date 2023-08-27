#include <iostream>
#include <algorithm>

#include "Negotiation.h"
#include "SmartContract.h"

SmartContract::SmartContract(std::string name)
{
    this->name = name;
    smartState = new Negotiation(*this);
}

SmartContract::SmartContract(std::string name, std::vector<std::string> &conditions)
{
    this->name = name;
    smartState = new Negotiation(*this);
    this->conditions = conditions;
}

SmartContract::~SmartContract()
{
    delete smartState;
}

std::string SmartContract::getName()
{
    return name;
}

std::vector<bool> SmartContract::getVotes()
{
    return votes;
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

std::vector<std::string> SmartContract::getConditions()
{
    return conditions;
}

std::string getCondition(std::vector<std::string> conditions, int index)
{
    return conditions[index];
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
    smartState->rejectContract();
}

void SmartContract::setState(SmartState *newState)
{
    if (smartState->getName() == "Negotiation" && newState->getName() == "Completed")
    {
        smartState->completeContract();
        delete smartState;
    }
    else if (smartState->getName() == "Tentatively Accepted" && newState->getName() == "Completed")
    {
        smartState->completeContract();
        delete smartState;
    }
    else if (smartState->getName() == "Accepted" && newState->getName() == "Accepted")
    {
        smartState->acceptContract();
        delete smartState;
    }
    else if (smartState->getName() == "Accepted" && newState->getName() == "Rejected")
    {
        smartState->rejectContract();
        delete smartState;
    }
    else
    {
        std::cout << "Contract has changed from " << smartState->getName() << " to ";
        delete smartState; 
        smartState = newState;
        std::cout << smartState->getName() << std::endl;
    }
}

void SmartContract::addCondition(std::string condition)
{
    smartState->addCondition();
    conditions.push_back(condition);

    std::cout << "Added condition: " << condition << std::endl;
}

void SmartContract::removeCondition(std::string condition)
{
    auto it = std::find(conditions.begin(), conditions.end(), condition);

    conditions.erase(it);
    smartState->removeCondition();

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
            output += std::to_string(vote) + "\n";
        }
    }

    output += "Conditions:\n";

    for (const std::string &condition : conditions)
    {
        output += condition + "\n";
    }

    return output;
}