#ifndef TESTDECORATOR_H
#define TESTDECORATOR_H

#include <string>
#include <iostream>
#include "TestBed.h"
#include "Testable.h"

class TestDecorator : public Testable
{
private:
    Testable* internalTestBed;
public:
    TestDecorator(Testable* internalTestBed);
    
    virtual bool runTest();
    Testable* getInternalTestBed();
    void setInternalTestBed(Testable* internalTestBed);
};

#endif