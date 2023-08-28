#ifndef SMARTSTATE_H
#define SMARTSTATE_H

#include <algorithm>
#include "SmartContract.h"

class SmartState
{   
protected:
    std::string name;
    SmartContract& smartContract;
public:
    SmartState(SmartContract& smartContract);
    virtual ~SmartState();
    
    virtual void rejectContract();
    virtual void acceptContract();
    virtual void completeContract();
    virtual void addCondition(std::string condition);
    virtual void removeCondition(std::string condition);
    
    virtual std::string getName() = 0;
};

#endif