#ifndef SMARTCONTRACT_H
#define SMARTCONTRACT_H

#include <string>
#include <vector>
#include <iostream>

#include "SmartState.h"

class SmartContract
{
private:
    std::string name;
    SmartState* smartState;
    std::vector<bool> votes;
    std::vector<std::string> conditions;

    std::string toString();
public:
    SmartContract(std::string name);
    SmartContract(std::string name, std::vector<std::string>& conditions);

    std::string getName();
    std::vector<bool> getVotes();
    void clearVotes();
    bool getAgreeingParties();
    std::vector<std::string> getConditions();

    void view();
    void accept();
    void complete();
    void vote(bool vote);
    void reject(std::string reason);
    void setState(SmartState* newState);
    void addCondition(std::string condition);
    void removeCondition(std::string condition);

    ~SmartContract();
};

#endif