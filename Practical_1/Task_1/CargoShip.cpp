#include "CargoShip.h"

CargoShip::CargoShip(int id, std::string name, int capacity) : Ship(id, name)
{
    currentLoad = 0;
    this->capacity = capacity;
    items = new std::string[capacity];
}

CargoShip::CargoShip(const CargoShip &cargoShip) : Ship(shipId, shipName)
{
    capacity = cargoShip.capacity;
    currentLoad = cargoShip.currentLoad;
    setItems(cargoShip.items, cargoShip.currentLoad, cargoShip.capacity);
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
    std::string* temp = new std::string[currentLoad];

    for (int i = 0; i < currentLoad; i++)
    {
        temp[i] = items[i];
    }
    
    items = new std::string[capacity];

    for (int i = 0; i < currentLoad; i++)
    {
        items[i] = temp[i];
    }

    delete[] temp;
    
    this->capacity = capacity;
}

void CargoShip::setCurrentLoad(int currentLoad)
{
    this->currentLoad = currentLoad;
}

void CargoShip::setItems(std::string *items, int currentSize, int capacity)
{
    this->capacity = capacity;
    this->currentLoad = currentSize;
    this->items = new std::string[capacity];

    for (int i = 0; i < currentSize; i++)
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

            return;
        }
    }

    std::cout << "Item not found: " << item << std::endl;
}

std::string CargoShip::toString()
{
    std::string output;

    output += "Ship " + std::to_string(shipId) + ": " + shipName + '\n';
    output += "load: " + std::to_string(currentLoad) + "/" + std::to_string(capacity) + '\n';
    output += "Items:\n";

    for (int i = 0; i < currentLoad; i++)
    {
        output += "item " + std::to_string(i + 1) + ": " + items[i] + '\n';
    }

    return output;
}

Ship *CargoShip::clone()
{
    return new CargoShip(*this);
}

CargoMemento CargoShip::save(int saveId)
{
    return CargoMemento(shipName, shipId, capacity, currentLoad, saveId, items);
}

void CargoShip::restore(CargoMemento restorePoint)
{
    shipId = restorePoint.getShipId();
    shipName = restorePoint.getShipName();
    capacity = restorePoint.getCapacity();
    currentLoad = restorePoint.getCurrentLoad();
    setItems(restorePoint.getItems(), currentLoad, capacity);
}

CargoShip::~CargoShip()
{
    delete[] items;
}