#ifndef COMPLETED_H
#define COMPLETED_H

#include "SmartState.h"

class Completed : public SmartState
{
public:
    Completed(SmartContract* smartContract);

    std::string getName();
    void acceptContract();
    void completeContract();
    void rejectContract(std::string reason);
    void addCondition(std::string condition);
    void removeCondition(std::string condition);

    ~Completed();
};

#endif