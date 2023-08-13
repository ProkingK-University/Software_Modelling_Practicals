#ifndef OPENGLWINDOW_H
#define OPENGLWINDOW_H

#include "Window.h"
#include "OpenGLPrimitive.h"

class OpenGLWindow : public Window
{
    public:
        OpenGLWindow();
        ~OpenGLWindow();

        OpenGLPrimitive* primitives;

        OpenGLPrimitive* getPrimitives();
        void setPrimitives(OpenGLPrimitive* primitives);
        
        std::string toString();
};

#endif