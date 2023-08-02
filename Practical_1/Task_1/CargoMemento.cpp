#include "CargoMemento.h"

int CargoMemento::getShipId() {
    return shipId;
}

int CargoMemento::getVersion() {
    return version;
}

std::string* CargoMemento::getItems() {
    return items;
}

std::string CargoMemento::getShipName() {
    return shipName;
}

int CargoMemento::getCurrentLoad() {
    return currentLoad;
}

CargoMemento::CargoMemento(std::string shipName, int shipId, int capacity, int currentLoad, std::string* items) {
    this->shipName = shipName;
    this->shipId = shipId;
    this->currentLoad = currentLoad;
    this->items = items;
}