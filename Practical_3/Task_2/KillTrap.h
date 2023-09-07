#ifndef KILLTRAP_H
#define KILLTRAP_H

#include "Trap.h"
#include "Enemy.h"

class KillTrap : public Trap
{
public:
    KillTrap();

    void defend(Enemy enemies[]);

    ~KillTrap();
};

#endif