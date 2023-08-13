#include "VulkanFactory.h"

Window* VulkanFactory::createWindow() 
{
    Window* windowObject = new VulkanWindow();
    return windowObject;
}

Primitive* VulkanFactory::createPrimitive() 
{
    Primitive* primitiveObject = new VulkanPrimitive();
    return primitiveObject;
}