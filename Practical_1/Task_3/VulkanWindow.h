#ifndef VULKANWINDOW_H
#define VULKANWINDOW_H

#include "Window.h"
#include "VulkanPrimitive.h"

#include <iostream>

class VulkanWindow : public Window
{
    public:
        VulkanWindow();
        ~VulkanWindow();

        VulkanPrimitive* primitives;

        VulkanPrimitive* getPrimitives();
        void setPrimitives(VulkanPrimitive* primitives, int size);
        
        std::string toString();

        void setPrimitiveCount(int primitiveCount);
        void setPrimitiveCapacity(int primitveCapacity);
};

#endif