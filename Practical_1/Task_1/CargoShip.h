#ifndef CARGOSHIP_H
#define CARGOSHIP_H

#include <iostream>

#include "Ship.h"

class CargoShip : public Ship
{
public:
    int capacity;
    int currentLoad;
    std::string* items;

    //CargoShip(int id, int name, int capacity);

    int getCapacity();
    int getCurrentLoad();
    std::string* getItems();

    void setCapacity(int capacity);
    void setCurrentLoad(int currentLoad);
    void setItems(int size);

    void addItem(std::string item);
    void removeItem(std::string item);

    virtual Ship* clone();
    //CargoMemento save(int saveId);
    //void restore(CargoMemento restorePoint);

    //friend std::ostream &operator<<(std::ostream &os, const CargoShip &ship);

    //~CargoShip();
};

#endif