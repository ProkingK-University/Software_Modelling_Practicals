#ifndef SHIP_H
#define SHIP_H

#include <string>

class Ship {

public:
    int shipId;
    std::string shipName;
    
    int getShipId();
    std::string getShipName();

    void setShip(int shipId);
    void setShipName(std::string shipName);

protected:

    virtual Ship* clone() = 0;
};
#endif