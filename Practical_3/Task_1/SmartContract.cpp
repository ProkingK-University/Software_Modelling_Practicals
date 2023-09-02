#include <iostream>

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
    smartState = newState;
}

void SmartContract::add(std::string condition)
{
    conditions.push_back(condition);
}

void SmartContract::remove(std::string condition)
{
    auto it = std::find(conditions.begin(), conditions.end(), condition);

    conditions.erase(it);
}

void SmartContract::addCondition(std::string condition)
{
    smartState->addCondition(condition);
}

void SmartContract::removeCondition(std::string condition)
{
    smartState->removeCondition(condition);
}

void SmartContract::notify()
{
    for(Observer* observer : observerList)
    {
        observer->update();
    }
}

void SmartContract::attach(Observer* observer)
{
    observerList.push_back(observer);
}

void SmartContract::detach(Observer* observer)
{
    auto it = std::find(observerList.begin(), observerList.end(), observer);

    observerList.erase(it);
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

SmartContract::~SmartContract()
{
    delete smartState;
}