#ifndef REMOVE_TILE_COMMAND_H
#define REMOVE_TILE_COMMAND_H

#include "Command.h"
#include "Lair.h"
#include "Tile.h"

class RemoveTileCommand : public Command
{
public:
    RemoveTileCommand(Lair* lair, Tile* tile);
    virtual void execute();
    virtual int getResearchCost() {return 0;}
private:
    Lair* lair;
    Tile* tile;
};

#endif