#ifndef MAGE_H
#define MAGE_H

#include "Enemy.h"

class Mage: public Enemy
{
private:
    int health;
    int attackDamage;
    bool isAlive;
public:
    Mage(int health, int attackDamage);
    ~Mage() {};
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