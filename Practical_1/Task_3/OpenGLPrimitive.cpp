#include "OpenGLPrimitive.h"

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