#include "Ship.h"

Ship::Ship() {
    this->shipId = 0;
    this->shipName = "";
}

Ship::Ship(int shipId, std::string shipName) {
    this->shipId = shipId;
    this->shipName = shipName;
}

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