#ifndef ACCEPTED_H
#define ACCEPTED_H

#include "SmartState.h"

class Completed : public SmartState
{
public:
    Completed(SmartContract* smartContract);

    virtual void acceptContract();
    virtual void completeContract();
    virtual void rejectContract(std::string reason);
    virtual void addCondition(std::string condition);
    virtual void removeCondition(std::string condition);

    ~Completed();
};

#endif