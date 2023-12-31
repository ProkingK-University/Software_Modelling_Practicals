#ifndef NEGOTIATION_H
#define NEGOTIATION_H

#include "SmartState.h"

class Negotiation : public SmartState
{
public:
    Negotiation(SmartContract& smartContract);

    std::string getName();

    void rejectContract();
    void acceptContract();
    void completeContract();
    void addCondition(std::string condition);
    void removeCondition(std::string condition);
};

#endif