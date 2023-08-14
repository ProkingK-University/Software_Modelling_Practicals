#ifndef WINDOW_H
#define WINDOW_H

#include <string>

class Window
{
    public:
        int screenHeight;
        int screenWidth;
        int primitiveCount;
        int primitiveCapacity;

        Window();
        Window(int screenHeight, int screenWidth, int primitiveCount, int primitiveCapacity);
        virtual ~Window();

        int getScreenHeight();
        int getScreenWidth();
        int getPrimitiveCount();
        int getPrimitiveCapacity();

        void setScreenHeight(int screenHeight);
        void setScreenWidth(int screenWidth);
        virtual void setPrimitiveCount(int primitiveCount);
        virtual void setPrimitiveCapacity(int primitveCapacity);

    protected:
        virtual std::string toString() = 0;
};

#endif