#ifndef CARGOSHIP_H
#define CARGOSHIP_H

#include <iostream>

#include "Ship.h"
#include "CargoMemento.h"

class CargoShip : public Ship
{
public:
    int capacity;
    int currentLoad;
    std::string* items;

    CargoShip(const CargoShip& cargoShip);
    CargoShip(int id, std::string name, int capacity);

    int getCapacity();
    int getCurrentLoad();
    std::string* getItems();

    void setCapacity(int capacity);
    void setCurrentLoad(int currentLoad);
    void setItems(std::string* items, int currentSize, int size);

    void addItem(std::string item);
    void removeItem(std::string item);

    virtual Ship* clone();
    std::string toString();
    CargoMemento save(int saveId);
    void restore(CargoMemento restorePoint);

    ~CargoShip();
};

#endif