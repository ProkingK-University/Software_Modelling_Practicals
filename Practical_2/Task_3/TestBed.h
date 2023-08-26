#ifndef TESTBED_H
#define TESTBED_H

#include "Test.h"
#include "Testable.h"

class TestBed : public Testable
{
private:
    Test test;
public:
    Test getTest();
    void setTest(Test test);
};

#endif