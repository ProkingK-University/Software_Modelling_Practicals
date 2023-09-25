#ifndef ADD_TRAP_COMMAND_H
#define ADD_TRAP_COMMAND_H

#include "Command.h"
#include "Tile.h"
#include "Trap.h"

class AddTrapCommand : public Command
{
public:
    AddTrapCommand(Lair* lair, Tile* tile, Trap* trap);
    virtual void execute(); 
    virtual int getResearchCost() {return 0;}
private:
    Lair* lair;
    Tile* tile;
    Trap* trap;
};

#endif