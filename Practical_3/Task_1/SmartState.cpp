#include "SmartState.h"

SmartState::SmartState(SmartContract& smartContract) : smartContract(smartContract) {}

SmartState::~SmartState() {}

void SmartState::rejectContract() {}
void SmartState::acceptContract() {}
void SmartState::completeContract() {}
void SmartState::addCondition(std::string condition) {}
void SmartState::removeCondition(std::string condition) {}