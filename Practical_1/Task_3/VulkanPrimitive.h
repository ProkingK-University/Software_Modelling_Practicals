#ifndef VULKANPRIMITIVE_H
#define VULKANPRIMITIVE_H

#include "Primitive.h"

class VulkanPrimitive : public Primitive
{
    public:
        float xcord;
        float ycord;

        static int vulkanPrimitiveCounter;

        VulkanPrimitive();
        
        float getXCord();
        float getYCord();

        void setXCord(float xcord);
        void setYCord(float ycord);

        std::string toString();
};

#endif