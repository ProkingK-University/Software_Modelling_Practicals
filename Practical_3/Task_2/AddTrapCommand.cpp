#include "AddTrapCommand.h"

AddTrapCommand::AddTrapCommand(Lair* lair, Tile* tile, Trap* trap) : Command()
{
    this->lair = lair;
    this->tile = tile;
    this->trap = trap;
}

void AddTrapCommand::execute()
{
    if (trap->getStatus())
    {
        lair->placeTrapInTile(tile, trap);
    }
}
