#include "CargoShip.h"

CargoShip::CargoShip(int capacity)
{
    currentLoad = 0;
    this->capacity = capacity;
    items = new std::string[capacity];
}

int CargoShip::getCapacity()
{
    return capacity;
}

int CargoShip::getCurrentLoad()
{
    return currentLoad;
}

std::string* CargoShip::getItems()
{
    return items;
}

void CargoShip::setCapacity(int capacity)
{
    this->capacity = capacity;
}

void CargoShip::setCurrentLoad(int currentLoad)
{
    this->currentLoad = currentLoad;
}

void CargoShip::setItems(std::string* items, int size)
{
    this->items = new std::string[size];
    
    for (int i = 0; i < size; i++)
    {
        this->items[i] = items[i];
    }
}

std::string CargoShip::toString()
{

}

Ship* CargoShip::clone()
{

}

CargoMemento CargoShip::save(int saveId)
{

}

void CargoShip::restore(CargoMemento restorePoint)
{

}

CargoShip::~CargoShip()
{
    delete[] items;
}