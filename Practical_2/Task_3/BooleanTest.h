#ifndef BOOLEANTEST_H
#define BOOLEANTEST_H

#include "Test.h"
#include "BooleanCalculator.h"
#include <iostream>
#include <vector>
#include <string>

class BooleanTest : public Test
{
public:
    BooleanTest();
    bool executeTest();
    ~BooleanTest();
};

#endif