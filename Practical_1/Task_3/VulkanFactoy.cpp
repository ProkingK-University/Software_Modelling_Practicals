#include "VulkanFactory.h"

Window* OpenGLFactory::createWindow() 
{

}

Primitive* OpenGLFactory::createPrimitive() 
{
    Primitive* primitiveObject = new OpenGLPrimitive();
    return primitiveObject;
}