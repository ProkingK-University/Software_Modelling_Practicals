#include <iostream>
#include "Factory.h"
#include "OpenGLFactory.h"
#include "VulkanFactory.h"

void testingOpenGLFactory();
void testingVulkanFactory();

int main() 
{
    //testingOpenGLFactory();
    testingVulkanFactory();
    return 0;
}

void testingOpenGLFactory()
{
    int OpenGLWindowPrimitives = 3;
    std::cout << "======================= Creating OpenGLFactory Object =======================" << std::endl;
    Factory* openGLFactory = new OpenGLFactory();
    std::cout << "LOADING..." << std::endl;
    std::cout << "OpenGLFactory Object has been created" << std::endl << std::endl;

    std::cout << "======================= TESTING OPENGLPRIMITIVE =======================" << std::endl;
    std::cout << "======================= Creating Square OpenGLPrimitive Object =======================" << std::endl;
    OpenGLPrimitive primitiveObjectSquare = *(OpenGLPrimitive*) openGLFactory->createPrimitive();
    primitiveObjectSquare.setShape("Square");

    primitiveObjectSquare.setXCord(0);
    primitiveObjectSquare.setYCord(0);

    primitiveObjectSquare.setXCord(0);
    primitiveObjectSquare.setYCord(4);

    primitiveObjectSquare.setXCord(4);
    primitiveObjectSquare.setYCord(4);

    primitiveObjectSquare.setXCord(4);
    primitiveObjectSquare.setYCord(0);

    std::cout << primitiveObjectSquare.toString() << std::endl << std::endl;

    std::cout << "======================= Creating Rectangle OpenGLPrimitive Object =======================" << std::endl;
    OpenGLPrimitive primitiveObjectRectangle = *(OpenGLPrimitive*) openGLFactory->createPrimitive();
    primitiveObjectRectangle.setShape("Rectangle");

    primitiveObjectRectangle.setXCord(0);
    primitiveObjectRectangle.setYCord(0);

    primitiveObjectRectangle.setXCord(0);
    primitiveObjectRectangle.setYCord(4);

    primitiveObjectRectangle.setXCord(8);
    primitiveObjectRectangle.setYCord(8);

    primitiveObjectRectangle.setXCord(8);
    primitiveObjectRectangle.setYCord(0);

    std::cout << primitiveObjectRectangle.toString() << std::endl << std::endl;

    std::cout << "======================= Creating Triangle OpenGLPrimitive Object =======================" << std::endl;
    OpenGLPrimitive primitiveObjectTriangle = *(OpenGLPrimitive*) openGLFactory->createPrimitive();
    primitiveObjectTriangle.setShape("Triangle");

    primitiveObjectTriangle.setXCord(0);
    primitiveObjectTriangle.setYCord(0);

    primitiveObjectTriangle.setXCord(0);
    primitiveObjectTriangle.setYCord(4);

    primitiveObjectTriangle.setXCord(4);
    primitiveObjectTriangle.setYCord(0);
    
    std::cout << primitiveObjectTriangle.toString() << std::endl << std::endl;

    std::cout << "======================= Creating OpenGLPrimitive Object Array =======================" << std::endl;
    OpenGLPrimitive* primitives = new OpenGLPrimitive[OpenGLWindowPrimitives];
    primitives[0] = primitiveObjectSquare;
    primitives[1] = primitiveObjectRectangle;
    primitives[2] = primitiveObjectTriangle;

    std::cout << "======================= TESTING OPENGLPRIMITIVE DONE! =======================" << std::endl << std::endl;

    std::cout << "======================= TESTING OPENGLWINDOW =======================" << std::endl;
    OpenGLWindow* openGLWindow = (OpenGLWindow*) openGLFactory->createWindow();
    openGLWindow->setScreenHeight(100);
    openGLWindow->setScreenWidth(300);
    openGLWindow->setPrimitiveCapacity(OpenGLWindowPrimitives);
    openGLWindow->setPrimitiveCount(3);
    openGLWindow->setPrimitiveCapacity(3);
    openGLWindow->setPrimitives(primitives, openGLWindow->getPrimitiveCapacity());
    std::cout << openGLWindow->toString() << std::endl << std::endl;

    std::cout << "======================= TESTING OPENGLWINDOW DONE! =======================" << std::endl << std::endl;

    std::cout << "======================= DELETING OBJECTS & POINTERS =======================" << std::endl;
    delete openGLFactory;
    delete[] primitives;
    delete primitives;
    std::cout << "LOADING..." << std::endl;
    std::cout << "DELETING OBJECTS & POINTERS COMPLETED!" << std::endl << std::endl;
}

void testingVulkanFactory()
{
    int VulkanWindowPrimitives = 9;
    std::cout << "======================= Creating OpenGLFactory Object =======================" << std::endl;
    Factory* openGLFactory = new OpenGLFactory();
    std::cout << "LOADING..." << std::endl;
    std::cout << "OpenGLFactory Object has been created" << std::endl << std::endl;

    std::cout << "======================= TESTING OPENGLPRIMITIVE =======================" << std::endl;
    std::cout << "======================= Creating Square VulkanPrimitive Object =======================" << std::endl;
    VulkanPrimitive primitiveObjectSquare = *(VulkanPrimitive*) openGLFactory->createPrimitive();
    primitiveObjectSquare.setShape("Square");

    primitiveObjectSquare.setXCord(0.0);
    primitiveObjectSquare.setYCord(0.0);

    primitiveObjectSquare.setXCord(0.0);
    primitiveObjectSquare.setYCord(4.0);

    primitiveObjectSquare.setXCord(4.0);
    primitiveObjectSquare.setYCord(4.0);

    primitiveObjectSquare.setXCord(4.0);
    primitiveObjectSquare.setYCord(0.0);

    std::cout << primitiveObjectSquare.toString() << std::endl << std::endl;

    std::cout << "======================= Creating Rectangle VulkanPrimitive Object =======================" << std::endl;
    VulkanPrimitive primitiveObjectRectangle = *(VulkanPrimitive*) openGLFactory->createPrimitive();
    primitiveObjectRectangle.setShape("Rectangle");

    primitiveObjectRectangle.setXCord(0);
    primitiveObjectRectangle.setYCord(0);

    primitiveObjectRectangle.setXCord(0);
    primitiveObjectRectangle.setYCord(4);

    primitiveObjectRectangle.setXCord(8);
    primitiveObjectRectangle.setYCord(8);

    primitiveObjectRectangle.setXCord(8);
    primitiveObjectRectangle.setYCord(0);

    std::cout << primitiveObjectRectangle.toString() << std::endl << std::endl;

    std::cout << "======================= Creating Triangle OpenGLPrimitive Object =======================" << std::endl;
    VulkanPrimitive primitiveObjectTriangle = *(VulkanPrimitive*) openGLFactory->createPrimitive();
    primitiveObjectTriangle.setShape("Triangle");

    primitiveObjectTriangle.setXCord(0);
    primitiveObjectTriangle.setYCord(0);

    primitiveObjectTriangle.setXCord(0);
    primitiveObjectTriangle.setYCord(4);

    primitiveObjectTriangle.setXCord(4);
    primitiveObjectTriangle.setYCord(0);
    
    std::cout << primitiveObjectTriangle.toString() << std::endl << std::endl;

    std::cout << "======================= Creating VulkanPrimitive Object Array =======================" << std::endl;
    VulkanPrimitive* primitives = new VulkanPrimitive[VulkanWindowPrimitives];
    primitives[0] = primitiveObjectSquare;
    primitives[1] = primitiveObjectRectangle;
    primitives[2] = primitiveObjectTriangle;

    std::cout << "======================= TESTING VULKANPRIMITIVE DONE! =======================" << std::endl << std::endl;

    std::cout << "======================= TESTING VULKANWINDOW =======================" << std::endl;
    VulkanWindow* vulkanWindow = (VulkanWindow*) openGLFactory->createWindow();
    vulkanWindow->setScreenHeight(100);
    vulkanWindow->setScreenWidth(300);
    vulkanWindow->setPrimitiveCapacity(VulkanWindowPrimitives);
    vulkanWindow->setPrimitiveCount(3);
    vulkanWindow->setPrimitiveCapacity(3);
    vulkanWindow->setPrimitives(primitives, vulkanWindow->getPrimitiveCapacity());
    std::cout << vulkanWindow->toString() << std::endl << std::endl;

    delete openGLFactory;
    delete[] primitives;
}
