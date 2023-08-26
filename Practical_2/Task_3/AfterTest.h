#ifndef AFTERTEST_H
#define AFTERTEST_H

#include "TestDecorator.h"

class AfterTest : public TestDecorator
{
private:
    std::string output;

public:
    AfterTest(TestBed internalTestBed, std::string output);

    bool runTest();
};

#endif