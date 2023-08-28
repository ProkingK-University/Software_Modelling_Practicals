#ifndef NUMERICTEST_H
#define NUMERICTEST_H

#include <vector>
#include <string>
#include <iostream>

#include "Test.h"
#include "NumericCalculator.h"

class NumericTest : public Test
{
public:
    NumericTest();
    bool executeTest();
    ~NumericTest();
};

#endif