#ifndef MAGE_H
#define MAGE_H

#include "Hero.h"

class Mage: public Hero
{
private:
    int health;
    int attackDamage;
    bool isAlive;
public:
    Mage(int health, int attackDamage);
    ~Mage() {};
    // void queryGameComponent();
    // void updateGameComponent();
    bool storyTellerDecision(bool DepthOrBreadthFirstDecision);
    int getHealth();
    void setHealth(int newHealth);
    int getAttackDamage();
    void setAttackDamage(Bank* bank);
    bool getIsAlive();
    void setIsAliveToDead();    
};

#endif