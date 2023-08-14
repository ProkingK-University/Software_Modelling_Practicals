#include "OpenGLWindow.h"

OpenGLWindow::OpenGLWindow() : Window()
{
    primitives = nullptr;
}

OpenGLWindow::~OpenGLWindow()
{
    delete[] primitives;
}

OpenGLPrimitive* OpenGLWindow::getPrimitives()
{
    return primitives;
}

void OpenGLWindow::setPrimitives(OpenGLPrimitive* primitives, int size)
{
    if (primitives != nullptr) {
        this->primitives = new OpenGLPrimitive[size];
        for (int i = 0; i < size; i++) {
            this->primitives[i] = primitives[i];
        }
    }
}

std::string OpenGLWindow::toString()
{
    std::string openGLWindow = "OpenGL window " + std::to_string(this->getScreenWidth()) + "x";
    openGLWindow += std::to_string(this->getScreenHeight()) + ":";
    int size = this->getPrimitiveCount();
    for (int i = 0; i < size; i++)
    {
        openGLWindow += "\n\tPrimitive #" + std::to_string(i) + ": " + primitives[i].toString() + "\n";
    }
    return openGLWindow;
}

void OpenGLWindow::setPrimitiveCount(int primitiveCount)
{
    if (primitiveCount <= 3 || this->getPrimitiveCapacity() != 3)
    {
        this->primitiveCount = primitiveCount;
    }
    else
    {
        std::cout << "ERROR: INVALID PRIMITIVE COUNT!" << std::endl;
    }
}

void OpenGLWindow::setPrimitiveCapacity(int primitiveCapacity)
{
    if (primitiveCapacity <= 3) {
        this->primitiveCapacity = primitiveCapacity;
        int size = this->primitiveCapacity;
        OpenGLPrimitive* tempPrimitives = new OpenGLPrimitive[size];
        for (int i = 0; i < size; i++) 
        {
            tempPrimitives[i] = OpenGLPrimitive();
        }
        primitives = tempPrimitives;
    }
    else
    {
        std::cout << "ERROR: INVALID PRIMITIVE CAPACITY!" << std::endl;
    }
}