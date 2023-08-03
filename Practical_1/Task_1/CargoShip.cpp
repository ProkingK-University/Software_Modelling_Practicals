#include "CargoShip.h"

CargoShip::CargoShip(int id, int name, int capacity)
{
    shipId = id;
    shipName = name;
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

std::string *CargoShip::getItems()
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

void CargoShip::setItems(std::string *items, int size)
{
    this->items = new std::string[size];

    for (int i = 0; i < size; i++)
    {
        this->items[i] = items[i];
    }
}

void CargoShip::addItem(const std::string item)
{
    if (currentLoad < capacity)
    {
        items[currentLoad] = item;
        currentLoad++;

        std::cout << "Item added: " << item << std::endl;
    }
    else
    {
        std::cout << "Cannot add item. CargoShip is full." << std::endl;
    }
}

void CargoShip::removeItem(const std::string item)
{
    for (int i = 0; i < currentLoad; i++)
    {
        if (items[i] == item)
        {
            for (int j = i; j < currentLoad - 1; j++)
            {
                items[j] = items[j + 1];
            }

            currentLoad--;

            std::cout << "Item removed: " << item << std::endl;
        }
    }

    std::cout << "Item not found: " << item << std::endl;
}

std::ostream &operator<<(std::ostream &os, const CargoShip &ship)
{
    os << "Ship " << ship.shipId << ": " << ship.shipName << '\n';
    os << "load: " << ship.currentLoad << "/" << ship.capacity << '\n';
    os << "Items:\n";

    for (int i = 0; i < ship.currentLoad; i++)
    {
        os << "item " << i + 1 << ": " << ship.items[i] << '\n';
    }

    return os;
}

Ship *CargoShip::clone()
{
}

CargoMemento CargoShip::save(int saveId)
{
    return CargoMemento(shipName, shipId, capacity, currentLoad, items, saveId);
}

void CargoShip::restore(CargoMemento restorePoint)
{
    setShipId(restorePoint.getShipId());
    setShipName(restorePoint.getShipName());
    setCapacity(restorePoint.getCapacity());
    setCurrentLoad(restorePoint.getCurrentLoad());
    setItems(restorePoint.getItems(), restorePoint.getCurrentLoad());
}

CargoShip::~CargoShip()
{
    delete[] items;
}