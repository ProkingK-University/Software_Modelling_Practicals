#include "VulkanPrimitive.h"

int VulkanPrimitive::vulkanPrimitiveCounter = 0;

VulkanPrimitive::VulkanPrimitive() : Primitive()
{
    vulkanPrimitiveCounter++;
    xcord = 0.0;
    ycord = 0.0;
}

float VulkanPrimitive::getXCord()
{
    return xcord;
}

float VulkanPrimitive::getYCord()
{
    return ycord;
}

void VulkanPrimitive::setXCord(float xcord)
{
    this->xcord = xcord;
}

void VulkanPrimitive::setYCord(float ycord)
{
    this->ycord = ycord;
}

std::string VulkanPrimitive::toString()
{
    std::string VulkanPrimitiveString = "OpenGL " + this->getShape() + ":\n";
    VulkanPrimitiveString += "\tX coordinate: " + std::to_string(this->getXCord()) + "\n";
    VulkanPrimitiveString += "\ty coordinate: " + std::to_string(this->getYCord()) + "\n";
    return VulkanPrimitiveString;
}