#ifndef TRAP_H
#define TRAP_H

#include <vector>

#include "Enemy.h"

class Trap
{
public:
    virtual void defend(std::vector<Enemy*> enemies) = 0;
};

#endif