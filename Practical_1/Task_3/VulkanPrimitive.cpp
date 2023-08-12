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
    std::string openGLPrimitiveString = "OpenGL " + this->getShape() + ":\n";
    openGLPrimitiveString += "\tX coordinate: " + std::to_string(this->getXCord()) + "\n";
    openGLPrimitiveString += "\tX coordinate: " + std::to_string(this->getXCord()) + "\n";
    return openGLPrimitiveString;
}