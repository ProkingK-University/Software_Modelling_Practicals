#ifndef CARGOMEMENTO_H
#define CARGOMEMENTO_H

#include "ShipMemento.h"

class CargoMemento : public ShipMemento
{
private:
    std::string* items;

    friend class CargoShip;

public:
    std::string* getItems();
};

#endif