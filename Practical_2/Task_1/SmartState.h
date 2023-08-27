#ifndef SMARTSTATE_H
#define SMARTSTATE_H

#include "SmartContract.h"

class SmartState
{   
protected:
    std::string name;
    SmartContract& smartContract;
public:
    SmartState(SmartContract& smartContract);
    virtual ~SmartState();
    
    virtual void addCondition();
    virtual void rejectContract();
    virtual void acceptContract();
    virtual void removeCondition();
    virtual void completeContract();
    
    virtual std::string getName() = 0;
};

#endif