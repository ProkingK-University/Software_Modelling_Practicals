#include "DepthFirstIterator.h"
#include "Lair.h"

DepthFirstIterator::DepthFirstIterator(Lair* lair, Tile* startingTile) : LairIterator()
{
    if (lair->doesTileExist(startingTile)) {
        this->lair = lair;
        stack.push(startingTile);
        visited.insert(startingTile);
    }
}

Tile* DepthFirstIterator::next()
{
    if (hasNext()) {
        Tile* next = stack.top();
        stack.pop();
        for (auto neighbour : lair->getNeighbours(next)) {
            if (visited.count(neighbour) == 0) {
                stack.push(neighbour);
                visited.insert(neighbour);
            }
        }
        return next;
    }
    return nullptr;
}

bool DepthFirstIterator::hasNext() const
{
    return !stack.empty();
}