#ifndef WARRIOR_H
#define WARRIOR_H

#include "Enemy.h"

class Warrior: public Enemy
{
private:
    int health;
    int attackDamage;
    bool isAlive;
public:
    Warrior(int health, int attackDamage);
    ~Warrior() {};
    void queryGameComponent();
    void updateGameComponent();
    bool storyTellerDecision(bool DepthOrBreadthFirstDecision);
    int getHealth();
    void setHealth(int newHealth);
    int getAttackDamage();
    void setAttackDamage(Bank* bank);
    bool getIsAlive();
    void setIsAliveToDead();
};

#endif