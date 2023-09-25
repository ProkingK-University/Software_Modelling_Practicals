#ifndef VIEW_CURRENT_WEALTH_COMMAND_H
#define VIEW_CURRENT_WEALTH_COMMAND_H

#include "Bank.h"
#include "Command.h"

class ViewCurrentWealthCommand : public Command
{
public:
    ViewCurrentWealthCommand(Bank* bank);
    virtual void execute();
    virtual int getResearchCost() {return 0;}
private:
    Bank* bank;
};

#endif