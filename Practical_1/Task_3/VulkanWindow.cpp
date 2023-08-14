#include "VulkanWindow.h"

VulkanWindow::VulkanWindow()
{
    int size = this->getPrimitiveCount();
    primitives = new VulkanPrimitive[size];
    for (int i = 0; i < size; i++) 
    {
        primitives[i] = VulkanPrimitive();
    }  
}

VulkanWindow::~VulkanWindow()
{
    delete[] primitives;
}

VulkanPrimitive* VulkanWindow::getPrimitives()
{
    return primitives;
}

void VulkanWindow::setPrimitives(VulkanPrimitive* primitives)
{
    if (primitives != nullptr)
    {
        this->primitives = new VulkanPrimitive[9];
        for (int i = 0; i < 9; i++) {
            this->primitives[i] = primitives[i];
        }
    }
}

std::string VulkanWindow::toString()
{
    std::string vulkanWindow = "OpenGL window " + std::to_string(this->getScreenWidth()) + "x";
    vulkanWindow += std::to_string(this->getScreenHeight()) + ":";
    int size = this->getPrimitiveCount();
    for (int i = 0; i < size; i++)
    {
        vulkanWindow += "\n\t\tPrimitive #" + std::to_string(i) + ": " + primitives[i].toString() + "\n";
    }
    return vulkanWindow;
}