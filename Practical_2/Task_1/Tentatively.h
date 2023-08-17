#ifndef TENTATIVELY_H
#define TENTATIVELY_H

#include "SmartState.h"

class Tentatively : public SmartState
{
public:
    Tentatively(SmartContract* smartContract);

    virtual void acceptContract();
    virtual void completeContract();
    virtual void rejectContract(std::string reason);
    virtual void addCondition(std::string condition);
    virtual void removeCondition(std::string condition);

    ~Tentatively();
};

#endif