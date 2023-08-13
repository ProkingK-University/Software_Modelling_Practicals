#ifndef VULKANWINDOW_H
#define VULKANWINDOW_H

#include "Window.h"
#include "VulkanPrimitive.h"

class VulkanWindow : public Window
{
    public:
        VulkanWindow();
        ~VulkanWindow();

        VulkanPrimitive* primitives;

        VulkanPrimitive* getPrimitives();
        void setPrimitives(VulkanPrimitive* primitives);
        
        std::string toString();

};

#endif