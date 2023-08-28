#ifndef TEST_H
#define TEST_H

#include "Calculator.h"

class Test
{
protected:
   Calculator* calculator;

public:
   virtual bool executeTest() = 0;
   virtual ~Test();
};

#endif