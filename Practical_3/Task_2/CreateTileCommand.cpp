#include "CreateTileCommand.h"

CreateTileCommand::CreateTileCommand(Lair* lair, Tile* tile) : Command()
{
    this->lair = lair;
    this->tile = tile;
}

void CreateTileCommand::execute()
{
    lair->addTile(tile);
}
