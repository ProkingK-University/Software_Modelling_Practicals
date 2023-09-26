#ifndef TILE_H
#define TILE_H

#include <vector>

#include "Hero.h"

class Trap;
class Bank;
class Tile {
private:
    int xCoord;
    int yCoord;
    Tile* up;
    Tile* down;
    Tile* left;
    Tile* right;
public:
    Trap* trap; // This guy is the problem :(
    Bank* bank;

    Tile(int xCoord, int yCoord);
    ~Tile();
    int getXCoord();
    void setXCoord(int newXCoord);
    int getYCoord();
    void setYCoord(int newYCoord);
    Tile* getUp();
    void setUp(Tile* newUp);
    Tile* getDown();
    void setDown(Tile* newDown);
    Tile* getLeft();
    void setLeft(Tile* newLeft);
    Tile* getRight();
    void setRight(Tile* newRight);
    void setBank(Bank* bank);
    void defend(std::vector<Hero*> heroes);
};

#endif