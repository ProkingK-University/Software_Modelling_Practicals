#ifndef SMARTCONTRACT_H
#define SMARTCONTRACT_H

#include <string>
#include <vector>
#include <iostream>

#include "Contract.h"

class SmartState;

class SmartContract : public Contract
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
    void notify();
    void accept();
    void complete();
    void clearVotes();
    void vote(bool vote);
    bool getAgreeingParties();
    void attach(Observer* observer) override;
    void detach(Observer* observer);
    void reject(std::string reason);
    void add(std::string condition);
    void remove(std::string condition);
    SmartState* getState();
    void setState(SmartState* newState);
    void addCondition(std::string condition);
    void removeCondition(std::string condition);

    virtual ~SmartContract();
};

#endif