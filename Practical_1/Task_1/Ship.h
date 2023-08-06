#ifndef SHIP_H
#define SHIP_H

#include <string>

class Ship
{
protected:
    virtual Ship *clone() = 0;

public:
    Ship(int shipId, std::string shipName);

    int shipId;
    std::string shipName;

    int getShipId();
    std::string getShipName();

    void setShipId(int shipId);
    void setShipName(std::string shipName);
};
#endif