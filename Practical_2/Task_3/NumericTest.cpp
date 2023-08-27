#include "NumericTest.h" // Assuming you create a header file for NumericTest class

bool NumericTest::executeTest()
{
    std::vector<std::pair<std::string, double>> testCases = {
        {"2 + 3 * 4", 14},
        {"(6 - 2) * 5", 20}
    };

    bool allTestsPassed = true;
    for (const auto &testCase : testCases)
    {
        std::string input = testCase.first;
        double expected = testCase.second;

        NumericCalculator calculator;
        calculator.setInputString(input);

        double actual = calculator.performCalculation();

        bool testPassed;
        if (actual == expected)
        {
            testPassed = true;
        }
        else
        {
            testPassed = false;
        }

        std::cout << "Input: " << calculator.getInputString() << std::endl;
        std::cout << "Expected Result: " << expected << std::endl;
        std::cout << "Actual Result: " << actual << std::endl;
        std::cout << "Test Status: ";
        if (testPassed) 
        {
            std::cout << "Pass";
        } 
        else 
        {
            std::cout << "Fail";
        }
        std::cout << std::endl;
        
        if (!testPassed)
        {
            allTestsPassed = false;
        }
    }

    return allTestsPassed;
}
