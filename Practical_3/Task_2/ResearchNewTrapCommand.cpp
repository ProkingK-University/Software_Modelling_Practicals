#include "ResearchNewTrapCommand.h"

ResearchNewTrapCommand::ResearchNewTrapCommand(Trap *trap, Bank* bank, int researchCost, int researchTime) : Command()
{
    this->trap = trap;
    this->bank = bank;
    this->researchCost = researchCost;
    this->researchTime = researchTime;
}

void ResearchNewTrapCommand::execute()
{
    int researchCost = trap->getResearchCost();
    if (bank->getCurrentAmount() >= researchCost) {
        bank->fundResearch(researchCost);
        trap->initiateResearch(researchTime);
    }
}

int ResearchNewTrapCommand::getResearchCost()
{
    return researchCost;
}
