#include "ViewCurrentWealthCommand.h"

ViewCurrentWealthCommand::ViewCurrentWealthCommand(Bank* bank) : Command()
{
    this->bank = bank;
}

void ViewCurrentWealthCommand::execute()
{
    int amount = bank->getCurrentAmount();
    std::cout << "Current Amount Available In The Bank: " << amount << std::endl;
}
