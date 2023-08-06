#ifndef MILITARYSHIP_H
#define MILITARYSHIP_H

#include <iostream>

#include "Ship.h"
#include "MilitaryMemento.h"

class MilitaryShip : public Ship
{
public:
    int capacity;
    int currentLoad;
    std::string* weapons;

    MilitaryShip(const MilitaryShip& MilitaryShip);
    MilitaryShip(int id, std::string name, int capacity);

    int getCapacity();
    int getCurrentLoad();
    std::string* getWeapons();

    void setCapacity(int capacity);
    void setCurrentLoad(int currentLoad);
    void setWeapons(std::string* weapons, int currentSize, int size);

    void addWeapon(std::string weapon);
    void removeWeapon(std::string weapon);

    virtual Ship* clone();
    std::string toString();
    MilitaryMemento save(int saveId);
    void restore(MilitaryMemento restorePoint);

    virtual ~MilitaryShip();
};

#endif