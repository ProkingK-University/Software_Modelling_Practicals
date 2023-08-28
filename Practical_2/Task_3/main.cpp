#include <iostream>
#include "BeforeTest.h"
#include "AfterTest.h"
#include "BooleanTest.h"
#include "NumericTest.h"
#include "TestBed.h"

void booleanTest();
void numericTest();

int main() {
    booleanTest();
    numericTest();
    
    return 0;
}

void booleanTest()
{
    std::cout << "======================= EVERTHING BOOLEAN =======================" << std::endl;
    
    Test* booleanTest = new BooleanTest();
    TestBed* testBed = new TestBed(booleanTest);
    TestDecorator* testDecorator = new AfterTest(new BeforeTest(testBed, "Starting Boolean Test..."), "Boolean Test Finished!");
    testDecorator->runTest();
}

void numericTest()
{
    std::cout << "======================= EVERTHING NUMERIC =======================" << std::endl;
    
    Test* numericTest = new NumericTest();
    TestBed* testBed = new TestBed(numericTest);
    TestDecorator* testDecorator = new AfterTest(new BeforeTest(testBed, "Starting Numeric Test..."), "Numeric Test Finished!");
    testDecorator->runTest();
}