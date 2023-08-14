#include "VulkanWindow.h"

VulkanWindow::~VulkanWindow()
{
    delete[] primitives;
}

VulkanPrimitive* VulkanWindow::getPrimitives()
{
    return primitives;
}

void VulkanWindow::setPrimitives(VulkanPrimitive* primitives, int size)
{
    if (primitives != nullptr) {
        this->primitives = new VulkanPrimitive[size];
        for (int i = 0; i < size; i++) {
            this->primitives[i] = primitives[i];
        }
    }
}

std::string VulkanWindow::toString()
{
    std::string VulkanWindow = "Vulkan window " + std::to_string(this->getScreenWidth()) + "x";
    VulkanWindow += std::to_string(this->getScreenHeight()) + ":";
    int size = this->getPrimitiveCount();
    for (int i = 0; i < size; i++)
    {
        VulkanWindow += "\n\tPrimitive #" + std::to_string(i) + ": " + primitives[i].toString() + "\n";
    }
    return VulkanWindow;
}

void VulkanWindow::setPrimitiveCount(int primitiveCount)
{
    if (primitiveCount <= 9 || this->getPrimitiveCapacity() != 9)
    {
        this->primitiveCount = primitiveCount;
    }
    else
    {
        std::cout << "ERROR: INVALID PRIMITIVE COUNT!" << std::endl;
    }
}

void VulkanWindow::setPrimitiveCapacity(int primitiveCapacity)
{
    if (primitiveCapacity <= 9) {
        this->primitiveCapacity = primitiveCapacity;
        int size = this->primitiveCapacity;
        VulkanPrimitive* tempPrimitives = new VulkanPrimitive[size];
        for (int i = 0; i < size; i++) 
        {
            tempPrimitives[i] = VulkanPrimitive();
        }
        primitives = tempPrimitives;
    }
    else
    {
        std::cout << "ERROR: INVALID PRIMITIVE CAPACITY!" << std::endl;
    }
}