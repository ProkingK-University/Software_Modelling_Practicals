#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>

class Calculator
{
private:
    std::string inputString;
public:
   std::string getInputString();
   void performCalculator();
   void setInputString(std::string inputString);
};

#endif