#include "TestDecorator.h"

TestDecorator::TestDecorator(Testable* internalTestBed)
{
    this->internalTestBed = internalTestBed;
}

Testable* TestDecorator::getInternalTestBed()
{
    return internalTestBed;
}

void TestDecorator::setInternalTestBed(Testable* internalTestBed)
{
    this->internalTestBed = internalTestBed;
}

bool TestDecorator::runTest()
{
    return internalTestBed->runTest();
}

TestDecorator::~TestDecorator()
{
    delete internalTestBed;
}