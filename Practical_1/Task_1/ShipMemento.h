#ifndef SHIPMEMENTO_H
#define SHIPMEMENTO_H

#include <string>

class ShipMemento
{
private:
    int capacity;
    int currentLoad;
    std::string shipName;

    friend class Ship;

public:
    int shipId;
    int version;

    int getShipId();
    int getVersion();
    int getCapacity();
    int getCurrentLoad();

    std::string getShipName();

    ShipMemento(std::string shipName, int shipId, int capacity, int currentLoad, int version);
};

#endif