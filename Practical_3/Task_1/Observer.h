#ifndef OBSERVER_H
#define OBSERVER_H

#include <string>

class Observer
{
private:
    std::string name;
public:
    Observer(std::string name);

    virtual void update() = 0;
};

#endif