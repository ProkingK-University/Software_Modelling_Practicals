#ifndef FACTORY_H
#define FACTORY_H

#include "Window.h"
#include "Primitive.h"

class Factory 
{
    public:
        virtual Window* createWindow() = 0;
        virtual Primitive* createPrimitive() = 0;
        virtual ~Factory();
};

#endif