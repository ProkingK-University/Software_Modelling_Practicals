#include "OpenGLFactory.h"

Window* OpenGLFactory::createWindow() 
{
    return new OpenGLWindow();
}

Primitive* OpenGLFactory::createPrimitive() 
{
    return new OpenGLPrimitive();
}