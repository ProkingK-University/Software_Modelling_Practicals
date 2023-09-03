#include "SmartObserver.h"

SmartObserver::SmartObserver(std::string name, SmartContract* smartContract) : Observer(name)
{
    this->smartContract = smartContract;
}

void SmartObserver::update()
{
    observerState = smartContract->getState();
}

SmartObserver::~SmartObserver()
{
    delete observerState;
    delete smartContract;
}