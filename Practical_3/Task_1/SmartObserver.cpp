#include "SmartObserver.h"

SmartObserver::SmartObserver(std::string name, SmartContract* smartContract) : Observer(name)
{
    this->smartContract = smartContract;
}

void SmartObserver::update()
{
    observerState = smartContract->getState();

    std::cout<< name << ": Observed contact change to " << observerState->getName() <<std::endl;
}

SmartObserver::~SmartObserver()
{
    delete observerState;
}