#include "CargoMemento.h"

CargoMemento::CargoMemento(std::string shipName, int shipId, int capacity, int currentLoad, int version, std::string* items) : ShipMemento(shipName, shipId, capacity, currentLoad, version)
{
    this->items = items;
}

std::string* CargoMemento::getItems()
{
    return items;
}