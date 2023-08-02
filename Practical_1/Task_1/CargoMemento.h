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
    std::string getShipName();
    std::string* getItems();
    void getCurrentLoad(int currentLoad);
    CargoMemento(std::string shipName, int shipId, int capacity, int currentLoad, std::string* items);
private:
    std::string shipName;
    std::string* items;
    int currentLoad;
    int capacity;
};

#endif