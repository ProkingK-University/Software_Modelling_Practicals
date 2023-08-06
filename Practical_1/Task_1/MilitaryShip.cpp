#include "MilitaryShip.h"

MilitaryShip::MilitaryShip(int id, std::string name, int capacity) : Ship(id, name)
{
    currentLoad = 0;
    this->capacity = capacity;
    weapons = new std::string[capacity];
}

MilitaryShip::MilitaryShip(const MilitaryShip &militaryShip) : Ship(shipId, shipName)
{
    capacity = militaryShip.capacity;
    currentLoad = militaryShip.currentLoad;
    setWeapons(militaryShip.weapons, militaryShip.currentLoad, militaryShip.capacity);
}

int MilitaryShip::getCapacity()
{
    return capacity;
}

int MilitaryShip::getCurrentLoad()
{
    return currentLoad;
}

std::string *MilitaryShip::getWeapons()
{
    return weapons;
}

void MilitaryShip::setCapacity(int capacity)
{
    std::string* temp = new std::string[currentLoad];

    for (int i = 0; i < currentLoad; i++)
    {
        temp[i] = weapons[i];
    }
    
    weapons = new std::string[capacity];

    for (int i = 0; i < currentLoad; i++)
    {
        weapons[i] = temp[i];
    }

    delete[] temp;
    
    this->capacity = capacity;
}

void MilitaryShip::setCurrentLoad(int currentLoad)
{
    this->currentLoad = currentLoad;
}

void MilitaryShip::setWeapons(std::string *weapons, int currentSize, int capacity)
{
    this->capacity = capacity;
    this->currentLoad = currentSize;
    this->weapons = new std::string[capacity];

    for (int i = 0; i < currentSize; i++)
    {
        this->weapons[i] = weapons[i];
    }
}

void MilitaryShip::addWeapon(const std::string weapon)
{
    if (currentLoad < capacity)
    {
        weapons[currentLoad] = weapon;
        currentLoad++;

        std::cout << "Item added: " << weapon << std::endl;
    }
    else
    {
        std::cout << "Cannot add item. MilitaryShip is full." << std::endl;
    }
}

void MilitaryShip::removeWeapon(const std::string weapon)
{
    for (int i = 0; i < currentLoad; i++)
    {
        if (weapons[i] == weapon)
        {
            for (int j = i; j < currentLoad - 1; j++)
            {
                weapons[j] = weapons[j + 1];
            }

            currentLoad--;

            std::cout << "Item removed: " << weapon << std::endl;
        }
    }

    std::cout << "Item not found: " << weapon << std::endl;
}

std::string MilitaryShip::toString()
{
    std::string output;

    output += "Ship " + std::to_string(shipId) + ": " + shipName + '\n';
    output += "load: " + std::to_string(currentLoad) + "/" + std::to_string(capacity) + '\n';
    output += "weapons:\n";

    for (int i = 0; i < currentLoad; i++)
    {
        output += "item " + std::to_string(i + 1) + ": " + weapons[i] + '\n';
    }

    return output;
}

Ship *MilitaryShip::clone()
{
    return new MilitaryShip(*this);
}

MilitaryMemento MilitaryShip::save(int saveId)
{
    return MilitaryMemento(shipName, shipId, capacity, currentLoad, saveId, weapons);
}

void MilitaryShip::restore(MilitaryMemento restorePoint)
{
    shipId = restorePoint.getShipId();
    shipName = restorePoint.getShipName();
    capacity = restorePoint.getCapacity();
    currentLoad = restorePoint.getCurrentLoad();
    setWeapons(restorePoint.getWeapons(), currentLoad, capacity);
}

MilitaryShip::~MilitaryShip()
{
    delete[] weapons;
}