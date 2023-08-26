#ifndef BOOLEANCALCULATOR_H
#define BOOLEANCALCULATOR_H

#include "Calculator.h"

class BooleanCalculator : public Calculator
{
private:
    bool isOperator(char c);
    void applyOperator(std::stack<bool>& values, std::stack<char>& operators);

public:
    double performCalculation();
};

#endif