#ifndef RESEARCH_NEW_TRAP_COMMAND_H
#define RESEARCH_NEW_TRAP_COMMAND_H

#include "Command.h"
#include "Trap.h"

class ResearchNewTrapCommand : public Command
{
public:
    ResearchNewTrapCommand(Trap* trap, Bank* bank, int researchCost, int researchTime);
    virtual void execute();
    virtual int getResearchCost();
private:
    Trap* trap;
    Bank* bank;
    int researchCost;
    int researchTime;
};

#endif