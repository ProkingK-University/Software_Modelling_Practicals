#include "VulkanFactory.h"

Window* VulkanFactory::createWindow() 
{
   return new VulkanWindow();
}

Primitive* VulkanFactory::createPrimitive() 
{
    return new VulkanPrimitive();
}