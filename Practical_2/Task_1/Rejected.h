#ifndef REJECTED_H
#define REJECTED_H

#include "SmartState.h"

class Rejected : public SmartState
{
public:
    Rejected(SmartContract* smartContract);

    std::string getName();
    void acceptContract();
    void completeContract();
    void rejectContract(std::string reason);
    void addCondition(std::string condition);
    void removeCondition(std::string condition);

    ~Rejected();
};

#endif