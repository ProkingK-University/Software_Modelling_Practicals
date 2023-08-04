#include "ShipMemento.h"

int ShipMemento::getShipId() 
{
    return shipId;
}

int ShipMemento::getVersion() 
{
    return version;
}

int ShipMemento::getCapacity() 
{
    return capacity;
}

int ShipMemento::getCurrentLoad() 
{
    return currentLoad;
}

std::string ShipMemento::getShipName() 
{
    return shipName;
}

ShipMemento::ShipMemento(std::string shipName, int shipId, int capacity, int currentLoad, int version) 
{
    this->shipId = shipId;
    this->version = version;
    this->shipName = shipName;
    this->currentLoad = currentLoad;
}