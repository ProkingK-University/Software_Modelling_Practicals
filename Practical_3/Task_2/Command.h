#ifndef COMMAND_H
#define COMMAND_H

#include "Trap.h"
#include "Bank.h"

class Command
{
public:
    virtual ~Command() {}
    virtual void execute() = 0;
    virtual int getResearchCost() = 0;
protected:
    Command() {}
};

#endif