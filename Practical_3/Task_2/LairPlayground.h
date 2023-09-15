#ifndef LAIRPLAYGROUND_H
#define LAIRPLAYGROUND_H

#include <iostream>
#include <vector>

#include "Lair.h"
#include "DepthFirstIterator.h"
#include "BreadthFirstIterator.h"

class LairPlayground : public Lair
{
friend class Lair;
private:
    std::vector<std::vector<Tile*>> lairPlayground;
    Tile *root;

public:
    LairPlayground();
    ~LairPlayground();
    LairIterator *createIterator(std::string type);
    void addTile(int xCoord, int yCoord);
    void removeTile(int xCoord, int yCoord);
    Tile *getTile(int xCoord, int yCoord);
    void deleteAllTiles(Tile* root);
    void randomlyGenerateLair();
    void displayLair();
};

#endif