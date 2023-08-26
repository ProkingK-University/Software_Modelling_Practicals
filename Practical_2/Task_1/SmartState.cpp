#include "SmartState.h"

SmartState::SmartState(SmartContract* smartContract)
{
    this->smartContract = smartContract;
    this->name = "";
}

SmartState::~SmartState()
{
    
}