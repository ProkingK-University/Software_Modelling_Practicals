#include "RemoveTileCommand.h"

RemoveTileCommand::RemoveTileCommand(Lair* lair, Tile* tile) : Command()
{
    this->lair = lair;
    this->tile = tile;
}

void RemoveTileCommand::execute()
{
    lair->removeTile(tile);
}
