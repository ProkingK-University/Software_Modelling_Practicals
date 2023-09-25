#ifndef CREATE_TILE_COMMAND_H
#define CREATE_TILE_COMMAND_H

#include "Command.h"
#include "Lair.h"
#include "Tile.h"

class CreateTileCommand : public Command
{
public:
    CreateTileCommand(Lair* lair, Tile* tile);
    virtual void execute();
    virtual int getResearchCost() {return 0;}
private:
    Lair* lair;
    Tile* tile;
};

#endif