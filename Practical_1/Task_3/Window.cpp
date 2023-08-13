#include "Window.h"

Window::Window()
{
    screenHeight = 0;
    screenWidth = 0;
    primitiveCount = 0;
    primitiveCapacity = 0;
}

Window::Window(int screenHeight, int screenWidth, int primitiveCount, int primitiveCapacity)
{
    this->screenHeight = screenHeight;
    this->screenWidth = screenWidth;
    this->primitiveCount = primitiveCount;
    this->primitiveCapacity = primitiveCapacity;
}

Window::~Window()
{

}

int Window::getScreenHeight()
{
    return screenHeight;
}

int Window::getScreenWidth()
{
    return screenWidth;
}

int Window::getPrimitiveCount()
{
    return primitiveCount;
}

int Window::getPrimitiveCapacity()
{
    return primitiveCapacity;
}

void Window::setScreenHeight(int screenHeight)
{
    this->screenHeight = screenHeight;
}

void Window::setScreenWidth(int screenWidth)
{
    this->screenWidth = screenWidth;
}

void Window::setPrimitiveCount(int primitiveCount)
{
    this->primitiveCount = primitiveCount;
}

void Window::setPrimitiveCapacity(int primitiveCapacity)
{
    this->primitiveCapacity = primitiveCapacity;
}