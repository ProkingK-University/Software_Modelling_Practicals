#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <map>
#include <stack>
#include <string>

class Calculator
{
private:
    std::string inputString;
protected:
   virtual bool isOperator(char c) = 0;
public:
   std::string getInputString();
   virtual double performCalculation() = 0;
   void setInputString(std::string inputString);
};

#endif