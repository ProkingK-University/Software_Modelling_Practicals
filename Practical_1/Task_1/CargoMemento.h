#ifndef CARGOMEMENTO_H
#define CARGOMEMENTO_H

#include <string>

#include "CargoShip.h";


class CargoMemento {
public:
    int shipId;
    int version;

    int getShipId();
    int getVersion();
    std::string* getItems();
    std::string getShipName();
    void getCurrentLoad(int currentLoad);
    
    CargoMemento(std::string shipName, int shipId, int capacity, int currentLoad, std::string* items);
    
private:
    int capacity;
    int currentLoad;
    
    std::string* items;
    std::string shipName;
};

#endif