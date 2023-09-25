#include "BreadthFirstIterator.h"
#include "Lair.h"

BreadthFirstIterator::BreadthFirstIterator(Lair* lair, Tile* startingTile) : LairIterator()
{
    if (lair->doesTileExist(startingTile)) {
        this->lair = lair;
        queue.push(startingTile);
        visited.insert(startingTile);
    }
}

Tile* BreadthFirstIterator::next() {
    if (hasNext()) {
        Tile* next = queue.front();
        queue.pop();
        for (auto neighbour : lair->getNeighbours(next)) {
            if (visited.count(neighbour) == 0) {
                queue.push(neighbour);
                visited.insert(neighbour);
            }
        }
        return next;
    }
    return nullptr;
}

bool BreadthFirstIterator::hasNext() const {
    return !queue.empty();
}
