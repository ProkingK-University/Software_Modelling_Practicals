#ifndef MILITARYMEMENTO_H
#define MILITARYMEMENTO_H

#include "ShipMemento.h"

class MilitaryMemento : public ShipMemento
{
private:
    std::string* weapons;

    friend class MilitaryShip;

public:
    std::string* getWeapons();

    MilitaryMemento(std::string shipName, int shipId, int capacity, int currentLoad, int version, std::string* weapons);
};

#endif