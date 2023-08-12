#ifndef OPENGLFACTORY_H
#define OPENGLFACTORY_H

#include "Factory.h"
#include "OpenGLWindow.h"
#include "OpenGLPrimitive.h"

class OpenGLFactory : public Factory
{
    public:
        Window* createWindow();
        Primitive* createPrimitive();
};

#endif