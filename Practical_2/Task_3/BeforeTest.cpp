#include "BeforeTest.h"

BeforeTest::BeforeTest(TestBed* internalTestBed, std::string output) : TestDecorator(internalTestBed)
{
    this->output = output;
}

bool BeforeTest::runTest()
{
    std::cout << output << std::endl;

    return TestDecorator::runTest();
}