#ifndef CARGOMEMENTO_H
#define CARGOMEMENTO_H

#include "ShipMemento.h"

class CargoMemento : public ShipMemento
{
private:
    std::string* items;

    friend class CargoShip;

public:
    CargoMemento::CargoMemento(std::string shipName, int shipId, int capacity, int currentLoad, int version, std::string* items);
    
    std::string* getItems();
};

#endif