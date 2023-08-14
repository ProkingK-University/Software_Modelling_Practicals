#include "OpenGLPrimitive.h"

OpenGLPrimitive::OpenGLPrimitive() : Primitive()
{
    xcord = 0;
    ycord = 0;
}

OpenGLPrimitive::OpenGLPrimitive(int xcord, int ycord, std::string shape) : Primitive(shape)
{
    this->xcord = xcord;
    this->ycord = ycord;
}

OpenGLPrimitive::~OpenGLPrimitive()
{

}

int OpenGLPrimitive::getXCord()
{
    return xcord;
} 

int OpenGLPrimitive::getYCord()
{
    return ycord;
}

void OpenGLPrimitive::setXCord(int xcord)
{
    this->xcord = xcord;
}

void OpenGLPrimitive::setYCord(int ycord)
{
    this->ycord = ycord;
}

std::string OpenGLPrimitive::toString()
{
    std::string openGLPrimitiveString = "OpenGL " + this->getShape() + ":\n";
    openGLPrimitiveString += "\tX coordinate: " + std::to_string(this->getXCord()) + "\n";
    openGLPrimitiveString += "\tX coordinate: " + std::to_string(this->getXCord()) + "\n";
    return openGLPrimitiveString;
}