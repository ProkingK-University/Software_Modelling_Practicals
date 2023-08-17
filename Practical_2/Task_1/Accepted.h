#ifndef ACCEPTED_H
#define ACCEPTED_H

#include "SmartState.h"

class Accepted : public SmartState
{
public:
    Accepted(SmartContract* smartContract);

    virtual void acceptContract();
    virtual void completeContract();
    virtual void rejectContract(std::string reason);
    virtual void addCondition(std::string condition);
    virtual void removeCondition(std::string condition);

    ~Accepted();
};

#endif