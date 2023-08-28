#ifndef TESTDECORATOR_H
#define TESTDECORATOR_H

#include <string>
#include <iostream>
#include "TestBed.h"
#include "Testable.h"

class TestDecorator : public Testable
{
private:
    TestBed* internalTestBed;
public:
    TestDecorator(TestBed* internalTestBed);
    
    virtual bool runTest();
    TestBed* getInternalTestBed();
    void setInternalTestBed(TestBed* internalTestBed);
};

#endif