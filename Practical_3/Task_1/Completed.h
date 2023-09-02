#ifndef COMPLETED_H
#define COMPLETED_H

#include "SmartState.h"

class Completed : public SmartState
{
public:
    Completed(SmartContract& smartContract);

    std::string getName();
};

#endif