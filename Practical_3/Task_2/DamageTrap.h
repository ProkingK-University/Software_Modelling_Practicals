#ifndef DAMAGETRAP_H
#define DAMAGETRAP_H

#include "Trap.h"
#include "Enemy.h"

class DamageTrap : public Trap
{
private:
    int damageAmount;

public:
    DamageTrap(int damage);

    void defend(Enemy enemies[]);

    ~DamageTrap();
};

#endif