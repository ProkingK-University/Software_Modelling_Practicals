#ifndef TESTDECORATOR_H
#define TESTDECORATOR_H

#include "TestBed.h"
#include "Testable.h"

class TestDecorator : public Testable
{
private:
    TestBed internalTestBed;
public:
    TestBed getInternalTestBed();
    void setInternalTestBed(TestBed internalTestBed);
};

#endif