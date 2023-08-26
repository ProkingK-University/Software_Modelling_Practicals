#ifndef BEFORETEST_H
#define BEFORETEST_H

#include "TestDecorator.h"

class BeforeTest : public TestDecorator
{
private:
    std::string output;

public:
    BeforeTest(TestBed internalTestBed, std::string output);

    bool runTest();
};

#endif