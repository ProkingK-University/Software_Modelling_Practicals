#include "Ship.h"

int Ship::getShipId() {
    return shipId;
}

std::string Ship::getShipName() {
    return shipName;
}

void Ship::setShipId(int shipId) {
    this->shipId = shipId;
}

void Ship::setShipName(std::string shipName) {
    this->shipName = shipName;
}