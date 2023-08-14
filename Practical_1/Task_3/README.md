# TASK 3

## Design pattern used:
### Abstract Factory

![Alt text](https://cdn.discordapp.com/attachments/1092393954856669235/1140724238026817546/Abstract_Factory.jpg)

## Abstract Factory

### Classification:
Creational

### Strategy:
Delegation (Object)

### Intent:
Provide an interface for creating families of related or dependent objects without specifying the concrete classes.

### Participants

| Participant         | Entity in application                                           |
| :-----------------: | :--------------------------------------------------------------:|
| AbstractFactory     | Factory                                                         |
| ConcreteFactory     | OpenGLFactory and VulkanFactory                                 |
| AbstractProduct     | Window and Primitive                                            |
| ConcreteProduct     | OpenGLWindow, VulkanWindow, OpenGLPrimitive and VulkanPrimitive |

## Description
Imagine you're developing a graphics application that needs to render shapes using different graphics libraries: OpenGL and Vulkan. You're tasked with implementing an abstract factory method to create windows and primitives for these libraries. <br />

First, you create an abstract class called Primitive with the following attributes and methods:
* Attributes:
    * shape (string)
    * xcoord (float)
    * ycoord (float)

* Methods:
    * Getters and setters for all attributes.
    * toString() method that formats the primitive's information as described.

Next, you create two concrete classes: OpenGLPrimitive and VulkanPrimitive, both inheriting from the Primitive class. They implement the toString() method based on the provided template.

Moving on to the window classes, you have an abstract class called Window with the following attributes and methods:
* Attributes:
    * width (int)
    * height (int)
    * primitives (list of Primitive)

* Methods:
    * Getters and setters for width and height.
    * Method to add a primitive to the primitives list.
    * toString() method that formats the window's information as described, including iterating through and printing the toString() output of each primitive.

Now, you create two concrete classes: OpenGLWindow and VulkanWindow, both inheriting from the Window class. They implement the toString() method based on the provided template. However, there are constraints on the number of primitives each window can hold: the OpenGLWindow can only hold up to 3 primitives, while the VulkanWindow can hold up to 9 primitives.

In your application, you'll use the abstract factory method to create instances of windows and primitives. Depending on the chosen graphics library, you'll instantiate the appropriate factories: OpenGLFactory and VulkanFactory. These factories will provide methods to create instances of OpenGLWindow, VulkanWindow, OpenGLPrimitive, and VulkanPrimitive with the required attributes.

In summary, the abstract factory pattern allows you to create families of related objects (windows and primitives in this case) without specifying their concrete classes. This design promotes modularity, as you can easily add support for new graphics libraries by creating new concrete factory classes.
