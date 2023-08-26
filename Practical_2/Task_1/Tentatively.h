#ifndef TENTATIVELY_H
#define TENTATIVELY_H

#include "SmartState.h"

class Tentatively : public SmartState
{
public:
    Tentatively(SmartContract& smartContract);

    std::string getName();

    void addCondition();
    void rejectContract();
    void acceptContract();
    void removeCondition();
    void completeContract();
};

#endif