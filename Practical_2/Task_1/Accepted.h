#ifndef ACCEPTED_H
#define ACCEPTED_H

#include "SmartState.h"

class Accepted : public SmartState
{
public:
    Accepted(SmartContract& smartContract);

    std::string getName();

    void addCondition();
    void rejectContract();
    void acceptContract();
    void removeCondition();
    void completeContract();
};

#endif