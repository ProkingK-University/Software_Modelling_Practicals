#include "OpenGLWindow.h"

OpenGLWindow::OpenGLWindow()
{
    int size = this->getPrimitiveCount();
    primitives = new OpenGLPrimitive[size];
    for (int i = 0; i < size; i++) 
    {
        primitives[i] = OpenGLPrimitive();
    }  
}

OpenGLWindow::~OpenGLWindow()
{
    delete[] primitives;
}

OpenGLPrimitive* OpenGLWindow::getPrimitives()
{
    return primitives;
}

void OpenGLWindow::setPrimitives(OpenGLPrimitive* primitives)
{
    if (primitives != nullptr)
    {
        this->primitives = new OpenGLPrimitive[3];
        for (int i = 0; i < 3; i++) {
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
        openGLWindow += "\n\t\tPrimitive #" + std::to_string(i) + ": " + primitives[i].toString() + "\n";
    }
}