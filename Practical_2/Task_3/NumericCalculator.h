#ifndef NUMERICCALCULATOR_H
#define NUMERICCALCULATOR_H

#include "Calculator.h"

class NumericCalculator : public Calculator
{
private:
    bool isOperator(char c);
    void applyOperator(std::stack<double> &operands, std::stack<char> &operators);

public:
    double performCalculation();
};

#endif