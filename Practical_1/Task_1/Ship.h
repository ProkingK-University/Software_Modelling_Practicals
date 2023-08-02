#ifndef SHIP_H
#define SHIP_H

class Ship {

    public:
        std::string shipName;
        int shipId;

    protected:
        virtual Ship* clone() = 0;
};
#endif