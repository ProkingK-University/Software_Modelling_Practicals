#include "Enemy.h"

Enemy::Enemy()
{
    health = 100;
}

void Enemy::attack(Bank* bank)
{
    if (health > 0)
    {
        bank->emptyBank();
    }
}

void Enemy::takeDamage(int damage)
{
    health -= damage;
}