#ifndef NEGOTIATION_H
#define NEGOTIATION_H

#include "SmartState.h"

class Negotiation : public SmartState
{
public:
    Negotiation(SmartContract* smartContract);

    virtual void acceptContract();
    virtual void completeContract();
    virtual void rejectContract(std::string reason);
    virtual void addCondition(std::string condition);
    virtual void removeCondition(std::string condition);

    ~Negotiation();
};

#endif