#include "TestDecorator.h"

TestDecorator::TestDecorator(TestBed internalTestBed) : internalTestBed(internalTestBed) {}

TestBed TestDecorator::getInternalTestBed()
{
    return internalTestBed;
}

void TestDecorator::setInternalTestBed(TestBed internalTestBed)
{
    this->internalTestBed = internalTestBed;
}

bool TestDecorator::runTest()
{
    return internalTestBed.runTest();
}