#ifndef LAIR_PLAYGROUND_H
#define LAIR_PLAYGROUND_H

#include "Lair.h"
#include "BreadthFirstIterator.h"
#include "DepthFirstIterator.h"

class LairPlayground : public Lair
{
public:
    LairPlayground();
    ~LairPlayground();
    virtual LairIterator* createIterator(bool type, Tile* startingTile);
    virtual Lair& addEdge(Tile* source, Tile* destination);
    virtual std::set<Tile*> getNeighbours(Tile* tile);
    virtual bool doesTileExist(Tile* tile);
    virtual Lair& addTile(Tile* tile); //TODO: Need to use addEdge function when adding a new Tile
    virtual Tile* getTile(int xCoord, int yCoord);
    virtual Lair& removeTile(Tile* tile);
    virtual void placeTrapInTile(Tile* tile, Trap* trap);
private:
    std::map<Tile*, std::set<Tile*>> map;
};

#endif
