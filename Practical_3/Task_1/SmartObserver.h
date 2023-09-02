#ifndef SMARTOBSERVER_H
#define SMARTOBSERVER_H

#include "Observer.h"
#include "SmartState.h"

class SmartObserver : public Observer
{
private:
    SmartState* observerState;
    SmartContract* smartContract;
public:
    SmartObserver(std::string name, SmartContract* smartContract);
    void update();
    ~SmartObserver();
};

#endif