#include "SmartState.h"

SmartState::SmartState(SmartContract& smartContract) : smartContract(smartContract) {}

SmartState::~SmartState() {}

void SmartState::addCondition() {}
void SmartState::rejectContract() {}
void SmartState::acceptContract() {}
void SmartState::removeCondition() {}
void SmartState::completeContract() {}