ofiles = Factory.o main.o OpenGLFactory.o OpenGLPrimitive.o OpenGLWindow.o Primitive.o VulkanFactory.o VulkanPrimitive.o VulkanWindow.o Window.o
flags = g++ -std=c++11 -c -g

output: $(ofiles)
	g++ -o output $(ofiles)

$(ofiles): Factory.h OpenGLFactory.h OpenGLPrimitive.h OpenGLWindow.h Primitive.h VulkanFactory.h VulkanPrimitive.h VulkanWindow.h Window.h

Factory.o: Factory.cpp
	$(flags) Factory.cpp

main.o: main.cpp
	$(flags) main.cpp

OpenGLFactory.o: OpenGLFactory.cpp
	$(flags) OpenGLFactory.cpp

OpenGLPrimitive.o: OpenGLPrimitive.cpp
	$(flags) OpenGLPrimitive.cpp

OpenGLWindow.o: OpenGLWindow.cpp
	$(flags) OpenGLWindow.cpp

Primitive.o: Primitive.cpp
	$(flags) Primitive.cpp

VulkanFactory.o: VulkanFactory.cpp
	$(flags) VulkanFactory.cpp

VulkanPrimitive.o: VulkanPrimitive.cpp
	$(flags) VulkanPrimitive.cpp

VulkanWindow.o: VulkanWindow.cpp
	$(flags) VulkanWindow.cpp

Window.o: Window.cpp
	$(flags) Window.cpp

make:

run:
	./output

runv:
	valgrind --leak-check=full ./output

clean:
	rm -f *.o output