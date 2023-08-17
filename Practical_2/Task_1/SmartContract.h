#ifndef SMARTCONTRACT_H
#define SMARTCONTRACT_H

#include<string>
#include <vector>
#include "SmartState.h"

class SmartContract
{
private:
    const std::string name;
    SmartState* smartState;
    std::vector<bool> votes;
    std::vector<std::string> conditions;
public:
    SmartContract(std::string name);
    SmartContract(std::string name, std::vector<std::string> conditions);

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