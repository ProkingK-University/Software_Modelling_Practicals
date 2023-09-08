#ifndef KILLTRAP_H
#define KILLTRAP_H

#include "Trap.h"
#include "Enemy.h"

class KillTrap : public Trap
{
public:
    void defend(std::vector<Enemy*> enemies);
};

#endif