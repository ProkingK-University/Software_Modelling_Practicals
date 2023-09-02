#ifndef TENTATIVELY_H
#define TENTATIVELY_H

#include "SmartState.h"

class Tentatively : public SmartState
{
public:
    Tentatively(SmartContract& smartContract);

    std::string getName();

    void rejectContract();
    void acceptContract();
    void completeContract();
    void addCondition(std::string condition);
    void removeCondition(std::string condition);
};

#endif