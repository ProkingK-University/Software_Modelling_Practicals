#ifndef CARGOSHIP_H
#define CARGOSHIP_H

#include "Ship.h"
#include "CargoMemento.h"

class CargoShip
{
public:
    int capacity;
    int currentLoad;
    std::string* items;

    CargoShip(int capacity);

    int getCapacity();
    int getCurrentLoad();
    std::string* getItems();

    void setCapacity(int capacity);
    void setCurrentLoad(int currentLoad);
    void setItems(std::string* items, int size);

    std::string toString();

    Ship* clone();
    CargoMemento save(int saveId);
    void restore(CargoMemento restorePoint);

    ~CargoShip();
};

#endif