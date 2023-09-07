#ifndef DEFENDER_H
#define DEFENDER_H

#include "Lair.h"

class Defender
{
private:
    Lair lair;

public:
    Defender();

    void addTiles();
    void createTrap();
    void destroyTrap();
    void removeTiles();

    ~Defender();
};

#endif