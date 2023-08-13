#include "OpenGLFactory.h"

Window* OpenGLFactory::createWindow() 
{
    Window* windowObject = new OpenGLWindow();
    return windowObject;
}

Primitive* OpenGLFactory::createPrimitive() 
{
    Primitive* primitiveObject = new OpenGLPrimitive();
    return primitiveObject;
}