#ifndef OPENGLWINDOW_H
#define OPENGLWINDOW_H

#include "Window.h"
#include "OpenGLPrimitive.h"

#include <iostream>

class OpenGLWindow : public Window
{
    public:
        OpenGLWindow();
        ~OpenGLWindow();

        OpenGLPrimitive* primitives;

        OpenGLPrimitive* getPrimitives();
        void setPrimitives(OpenGLPrimitive* primitives, int size);
        
        std::string toString();

        void setPrimitiveCount(int primitiveCount);
        void setPrimitiveCapacity(int primitveCapacity);
};

#endif