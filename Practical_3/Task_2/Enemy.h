#ifndef ENEMY_H
#define ENEMY_H

#include "Bank.h"

class Enemy
{
private:
    int health;
public:
    Enemy();

    virtual void attack(Bank* bank);
    virtual void takeDamage(int damage);
};

#endif