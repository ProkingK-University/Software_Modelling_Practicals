#include <iostream>
#include "BeforeTest.h"
#include "AfterTest.h"
#include "BooleanTest.h"
#include "NumericTest.h"
#include "TestBed.h"

void booleanTest();
void numericTest();

int main() {
    //booleanTest();
    numericTest();
    return 0;
}

/*void booleanTest()
{
    std::cout << "======================= EVERTHING BOOLEAN =======================" << std::endl;
    
    Test* booleanTest = new BooleanTest();
    TestBed context(*booleanTest);

    TestDecorator* concreteDecoratorB_1 = new BeforeTest(context, "Starting Boolean Test...");
    context.runTest();
    TestDecorator* concreteDecoratorA_1 = new AfterTest(context, "Boolean Test Finished!");
}*/

void numericTest()
{
    std::cout << "======================= EVERTHING NUMERIC =======================" << std::endl;
    
    Test* numericTest = new NumericTest();
    TestBed* testBed = new TestBed(numericTest);
    TestDecorator* testDecorator = new AfterTest(new BeforeTest(testBed, "Starting Numeric Test..."), "Numeric Test Finished!");
    testDecorator->runTest();
}