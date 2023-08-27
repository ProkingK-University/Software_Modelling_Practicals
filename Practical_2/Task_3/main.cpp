#include <iostream>
#include "BeforeTest.h"
#include "AfterTest.h"
#include "BooleanTest.h"
#include "NumericTest.h"
#include "TestBed.h"

int main() {
    // Create a BooleanTest instance
    BooleanTest booleanTest;

    // Create BeforeTest and AfterTest decorators for the BooleanTest
    BeforeTest beforeDecorator(booleanTest, "Starting Boolean Test...");
    AfterTest afterDecorator(beforeDecorator, "Boolean Test Finished!");

    // Create a TestBed with the decorator chain
    TestBed booleanTestBed(afterDecorator);

    // Run the BooleanTest with decorators
    booleanTestBed.runTest();

    std::cout << std::endl;

    // Create a NumericTest instance
    NumericTest numericTest;

    // Create BeforeTest and AfterTest decorators for the NumericTest
    BeforeTest beforeDecoratorNumeric(numericTest, "Starting Numeric Test...");
    AfterTest afterDecoratorNumeric(beforeDecoratorNumeric, "Numeric Test Finished!");

    // Create a TestBed with the decorator chain
    TestBed numericTestBed(afterDecoratorNumeric);

    // Run the NumericTest with decorators
    numericTestBed.runTest();

    return 0;
}
