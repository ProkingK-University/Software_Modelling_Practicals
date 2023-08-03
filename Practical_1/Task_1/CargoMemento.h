#ifndef CARGOMEMENTO_H
#define CARGOMEMENTO_H

#include <string>

#include "CargoShip.h";

class CargoMemento 
{
public:
    int shipId;
    int version;

    int getShipId();
    int getVersion();
    int getCapacity();
    std::string* getItems();
    std::string getShipName();
    int getCurrentLoad();
    
    CargoMemento(std::string shipName, int shipId, int capacity, int currentLoad, std::string* items, int version);
    
private:
    friend class cargoShip;

    int capacity;
    int currentLoad;
    
    std::string* items;
    std::string shipName;
};

#endif