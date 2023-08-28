#include "TestBed.h"

TestBed::TestBed(Test* test) : test(test) {}

Test* TestBed::getTest()
{
    return test;
}

void TestBed::setTest(Test* test)
{
    this->test = test;
}

bool TestBed::runTest()
{
    return test->executeTest();
}