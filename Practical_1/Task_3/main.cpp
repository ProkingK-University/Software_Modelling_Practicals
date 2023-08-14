#include <iostream>
#include "Factory.h"
#include "OpenGLFactory.h"
#include "VulkanFactory.h"

void testingOpenGLFactory();
//void testingVulkanFactory();

int main() 
{
    testingOpenGLFactory();
    //testingVulkanFactory();

    

/*
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
*/
    return 0;
}

void testingOpenGLFactory()
{
    std::cout << "======================= Creating OpenGLFactory Object =======================" << std::endl;
    Factory* openGLFactory = new OpenGLFactory();
    std::cout << "LOADING..." << std::endl;
    std::cout << "OpenGLFactory Object has been created" << std::endl << std::endl;

    std::cout << "======================= TESTING OPENGLPRIMITIVE =======================" << std::endl;
    std::cout << "======================= Creating Square OpenGLPrimitive Object =======================" << std::endl;
    OpenGLPrimitive* primitiveObjectSquare = (OpenGLPrimitive*) openGLFactory->createPrimitive();
    primitiveObjectSquare->setShape("Square");

    primitiveObjectSquare->setXCord(0);
    primitiveObjectSquare->setYCord(0);

    primitiveObjectSquare->setXCord(0);
    primitiveObjectSquare->setYCord(4);

    primitiveObjectSquare->setXCord(4);
    primitiveObjectSquare->setYCord(4);

    primitiveObjectSquare->setXCord(4);
    primitiveObjectSquare->setYCord(0);

    std::cout << primitiveObjectSquare->toString() << std::endl << std::endl;

    std::cout << "======================= Creating Rectangle OpenGLPrimitive Object =======================" << std::endl;
    OpenGLPrimitive* primitiveObjectRectangle = (OpenGLPrimitive*) openGLFactory->createPrimitive();
    primitiveObjectRectangle->setShape("Rectangle");

    primitiveObjectRectangle->setXCord(0);
    primitiveObjectRectangle->setYCord(0);

    primitiveObjectRectangle->setXCord(0);
    primitiveObjectRectangle->setYCord(4);

    primitiveObjectRectangle->setXCord(8);
    primitiveObjectRectangle->setYCord(8);

    primitiveObjectRectangle->setXCord(8);
    primitiveObjectRectangle->setYCord(0);

    std::cout << primitiveObjectRectangle->toString() << std::endl << std::endl;

    std::cout << "======================= Creating Triangle OpenGLPrimitive Object =======================" << std::endl;
    OpenGLPrimitive* primitiveObjectTriangle = (OpenGLPrimitive*) openGLFactory->createPrimitive();
    primitiveObjectTriangle->setShape("Triangle");

    primitiveObjectTriangle->setXCord(0);
    primitiveObjectTriangle->setYCord(0);

    primitiveObjectTriangle->setXCord(0);
    primitiveObjectTriangle->setYCord(4);

    primitiveObjectTriangle->setXCord(4);
    primitiveObjectTriangle->setYCord(0);
    
    std::cout << primitiveObjectTriangle->toString() << std::endl << std::endl;

    std::cout << "======================= TESTING OPENGLPRIMITIVE DONE! =======================" << std::endl << std::endl;

    std::cout << "======================= TESTING OPENGLWINDOW =======================" << std::endl;



}
