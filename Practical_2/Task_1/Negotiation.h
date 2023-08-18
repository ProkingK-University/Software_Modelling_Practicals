#ifndef NEGOTIATION_H
#define NEGOTIATION_H

#include "SmartState.h"
#include "Tentatively.h"
#include "Rejected.h"

class Negotiation : public SmartState
{
public:
    Negotiation(SmartContract* smartContract);

    std::string getName();
    void acceptContract();
    void completeContract();
    void rejectContract(std::string reason);
    void addCondition(std::string condition);
    void removeCondition(std::string condition);

    ~Negotiation();
};

#endif