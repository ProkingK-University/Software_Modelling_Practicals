#include "LairPlayground.h"

LairPlayground::LairPlayground() : Lair() {}

LairPlayground::~LairPlayground() {}

LairIterator* LairPlayground::createIterator(bool type, Tile* startingTile)
{
    if (type)
    {
        return new BreadthFirstIterator(this, startingTile);
    }
    else
    {
        return new DepthFirstIterator(this, startingTile);
    }
}

Lair& LairPlayground::addEdge(Tile* source, Tile* destination)
{
    if (source != nullptr) {
        if (source != destination || (source->getXCoord() != destination->getXCoord() && source->getYCoord() != destination->getYCoord())) {
            std::set<Tile*> destinations = map[source];
            if (destinations.empty()) {
                destinations = std::set<Tile*>();
            }
            if (destination != NULL) {
                destinations.insert(destination);
                std::set<Tile*> destinationsOfDestination = map[destination];
                if (destinationsOfDestination.empty()) {
                    map[destination] = std::set<Tile*>();
                }
            }
            map[source] = destinations;
        }
    }
    return *this;
}

std::set<Tile*> LairPlayground::getNeighbours(Tile* tile)
{
    std::set<Tile*> neighbours = this->map[tile];
    if (neighbours.empty()) {
        return std::set<Tile*>();
    } else {
        return neighbours;
    }
}

bool LairPlayground::doesTileExist(Tile* tile)
{
    return map.count(tile) > 0;
}

Lair& LairPlayground::addTile(Tile* tile)
{
    if (tile != nullptr && !doesTileExist(tile)) {
        map[tile] = std::set<Tile*>();
    }
    return *this;
}

Tile* LairPlayground::getTile(int xCoord, int yCoord)
{
    for (auto& entry : map)
    {
        Tile* tile = entry.first;
        if (tile->getXCoord() == xCoord && tile->getYCoord() == yCoord)
        {
            return tile;
        }
    }
    return nullptr;
}

Lair& LairPlayground::removeTile(Tile* tile)
{
    if (tile != nullptr) {
        map.erase(tile);

        for (auto& entry : map) {
            entry.second.erase(tile);
        }
    }
    return *this;
}

void LairPlayground::placeTrapInTile(Tile* tile, Trap* trap)
{
    if (doesTileExist(tile))
    {
        trap->placeTrap(tile->getXCoord(), tile->getYCoord());
    }
}
