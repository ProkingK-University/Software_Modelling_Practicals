#include "VulkanPrimitive.h"

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
    VulkanPrimitiveString += "\tX coordinate: " + std::to_string(this->getXCord()) + "\n";
    return VulkanPrimitiveString;
}