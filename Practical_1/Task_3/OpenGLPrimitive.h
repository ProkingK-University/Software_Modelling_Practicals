#ifndef OPENGLPRIMITIVE_H
#define OPENGLPRIMITIVE_H

#include "Primitive.h"

class OpenGLPrimitive : public Primitive 
{
    public:
        int xcord;
        int ycord;

        int getXCord();
        int getYCord();

        void setXCord(int xcord);
        void setYCord(int ycord);

        std::string toString();
};
#endif