#ifndef TENTATIVELY_H
#define TENTATIVELY_H

#include "SmartState.h"
#include "Negotiation.h"
#include "Accepted.h"
#include "Rejected.h"

class Tentatively : public SmartState
{
public:
    Tentatively(SmartContract* smartContract);
    std::string getName();
    void acceptContract();
    void completeContract();
    void rejectContract(std::string reason);
    void addCondition(std::string condition);
    void removeCondition(std::string condition);

    ~Tentatively();
};

#endif