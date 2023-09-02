#ifndef ACCEPTED_H
#define ACCEPTED_H

#include "SmartState.h"

class Accepted : public SmartState
{
public:
    Accepted(SmartContract& smartContract);

    std::string getName();

    void rejectContract();
    void acceptContract();
    void completeContract();
    void addCondition(std::string condition);
    void removeCondition(std::string condition);
};

#endif