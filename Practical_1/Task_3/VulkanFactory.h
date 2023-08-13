#ifndef VULKANFACTORY_H
#define VULKANFACTORY_H

#include "Factory.h"
#include "VulkanWindow.h"
#include "VulkanPrimitive.h"

class VulkanFactory : public Factory
{
    public:
        Window* createWindow();
        Primitive* createPrimitive();

};

#endif