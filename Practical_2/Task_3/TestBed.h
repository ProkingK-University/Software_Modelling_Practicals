#ifndef TESTBED_H
#define TESTBED_H

#include "Test.h"
#include "Testable.h"

class TestBed : public Testable
{
private:
    Test test;
public:
    TestBed(Test test);
    
    Test getTest();
    bool runTest();
    void setTest(Test test);
};

#endif