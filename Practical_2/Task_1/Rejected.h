#ifndef REJECTED_H
#define REJECTED_H

#include "SmartState.h"

class Rejected : public SmartState
{
public:
    Rejected(SmartContract& smartContract);

    std::string getName();
};

#endif