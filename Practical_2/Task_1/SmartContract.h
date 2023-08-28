#ifndef SMARTCONTRACT_H
#define SMARTCONTRACT_H

#include <string>
#include <vector>
#include <iostream>

class SmartState;

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
    std::vector<std::string> getConditions();

    void view();
    void accept();
    void complete();
    void clearVotes();
    void vote(bool vote);
    bool getAgreeingParties();
    void reject(std::string reason);
    void add(std::string condition);
    void remove(std::string condition);
    void setState(SmartState* newState);
    void addCondition(std::string condition);
    void removeCondition(std::string condition);

    virtual ~SmartContract();
};

#endif