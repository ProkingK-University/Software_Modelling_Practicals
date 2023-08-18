#ifndef ACCEPTED_H
#define ACCEPTED_H

#include "SmartState.h"

class Accepted : public SmartState
{
public:
    Accepted(SmartContract* smartContract);

    std::string getName();
    void acceptContract();
    void completeContract();
    void rejectContract(std::string reason);
    void addCondition(std::string condition);
    void removeCondition(std::string condition);

    ~Accepted();
};

#endif