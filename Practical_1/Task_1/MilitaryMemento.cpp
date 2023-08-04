#include "MilitaryMemento.h"

MilitaryMemento::MilitaryMemento(std::string shipName, int shipId, int capacity, int currentLoad, int version, std::string* weapons) : ShipMemento(shipName, shipId, capacity, currentLoad, version)
{
    this->weapons = weapons;
}

std::string* MilitaryMemento::getWeapons()
{
    return weapons;
}