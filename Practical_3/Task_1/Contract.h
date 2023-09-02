#ifndef CONTRACT_H
#define CONTRACT_H

#include <vector>

#include "Observer.h"

class Contract
{
protected:
    std::vector<Observer*> observerList;
public:
    virtual void notify() = 0;
    virtual void attach(Observer observer) = 0;
    virtual void detach(Observer observer) = 0;
};

#endif