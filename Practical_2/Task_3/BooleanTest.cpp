#include "BooleanTest.h" // Assuming you create a header file for BooleanTest class

bool BooleanTest::executeTest()
{
    std::vector<std::pair<std::string, bool>> testCases = {
        {"T && F || T", true},
        {"F || T && F", false}
    };

    bool allTestsPassed = true;

    for (const auto &testCase : testCases)
    {
        std::string input = testCase.first;
        bool expected = testCase.second;

        BooleanCalculator calculator;
        calculator.setInputString(input);

        bool actual = calculator.performCalculation();

         bool testPassed;
        if (actual == expected)
        {
            testPassed = true;
        }
        else
        {
            testPassed = false;
        }

        std::cout << "Input: " << input << std::endl;
        std::cout << "Expected Result: ";
        if (expected) 
        {
            std::cout << "true";
        } 
        else 
        {
            std::cout << "false";
        }
        std::cout << std::endl;

        std::cout << "Actual Result: ";
        if (actual) 
        {
            std::cout << "true";
        } 
        else 
        {
            std::cout << "false";
        }
        std::cout << std::endl;

        std::cout << "Test Status: ";
        if (testPassed) 
        {
            std::cout << "Pass";
        } 
        else {
            std::cout << "Fail";
        }
        std::cout << std::endl;
        std::cout << std::endl;

        if (!testPassed)
        {
            allTestsPassed = false;
        }
    }

    return allTestsPassed;
}
