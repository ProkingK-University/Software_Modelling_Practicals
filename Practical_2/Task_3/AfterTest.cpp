#include "AfterTest.h"

AfterTest::AfterTest(TestBed internalTestBed, std::string output) : TestDecorator(internalTestBed)
{
    this->output = output;
}

bool AfterTest::runTest()
{
    bool result = TestDecorator::runTest();

    std::cout << output << std::endl;

    return result;
}