#ifndef SMARTSTATE_H
#define SMARTSTATE_H

#include "SmartContract.h"

class SmartState
{
private:
    std::string name;
protected:
    SmartContract* smartContract;
public:
    SmartState(SmartContract* smartContract);
    
    virtual std::string getName() = 0;
    virtual void acceptContract() = 0;
    virtual void completeContract() = 0;
    virtual void rejectContract(std::string reason) = 0;
    virtual void addCondition(std::string condition) = 0;
    virtual void removeCondition(std::string condition) = 0;

   virtual ~SmartState();
};

#endif