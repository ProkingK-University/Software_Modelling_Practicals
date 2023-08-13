#include <iostream>
#include "Factory.h"
#include "OpenGLFactory.h"
#include "VulkanFactory.h"

int main() {
    // Create an OpenGL Factory
    Factory* openglFactory = new OpenGLFactory();
    Window* openglWindow = openglFactory->createWindow();
    Primitive* openglPrimitive = openglFactory->createPrimitive();

    // Set properties for OpenGL window and primitive
    openglWindow->setScreenHeight(1080);
    openglWindow->setScreenWidth(1920);
    openglWindow->setPrimitiveCount(3);

    openglPrimitive->setShape("Triangle");
    openglPrimitive->setXCord(50);
    openglPrimitive->setYCord(30);

    // Create a Vulkan Factory
    Factory* vulkanFactory = new VulkanFactory();
    Window* vulkanWindow = vulkanFactory->createWindow();
    Primitive* vulkanPrimitive = vulkanFactory->createPrimitive();

    // Set properties for Vulkan window and primitive
    vulkanWindow->setScreenHeight(720);
    vulkanWindow->setScreenWidth(1280);
    vulkanWindow->setPrimitiveCount(9);

    vulkanPrimitive->setShape("Square");
    vulkanPrimitive->setXCord(80);
    vulkanPrimitive->setYCord(60);

    // Display information
    std::cout << "OpenGL Window Info:\n" << openglWindow->toString() << "\n";
    std::cout << "OpenGL Primitive Info:\n" << openglPrimitive->toString() << "\n";

    std::cout << "Vulkan Window Info:\n" << vulkanWindow->toString() << "\n";
    std::cout << "Vulkan Primitive Info:\n" << vulkanPrimitive->toString() << "\n";

    // Clean up
    delete openglFactory;
    delete openglWindow;
    delete openglPrimitive;

    delete vulkanFactory;
    delete vulkanWindow;
    delete vulkanPrimitive;

    return 0;
}
