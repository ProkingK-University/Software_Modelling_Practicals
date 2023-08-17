#ifndef REJECTED_H
#define REJECTED_H

#include "SmartState.h"

class Rejected : public SmartState
{
public:
    Rejected(SmartContract* smartContract);

    virtual std::string getName();
    virtual void acceptContract();
    virtual void completeContract();
    virtual void rejectContract(std::string reason);
    virtual void addCondition(std::string condition);
    virtual void removeCondition(std::string condition);

    ~Rejected();
};

#endif