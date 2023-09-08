#ifndef TRAP_H
#define TRAP_H

#include "Enemy.h"

class Trap
{
public:
    virtual void defend(Enemy enemies[]) = 0;
};

#endif