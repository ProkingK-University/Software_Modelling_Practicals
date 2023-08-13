# Compiler
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

# Source files
SOURCES = main.cpp Factory.cpp OpenGLFactory.cpp OpenGLPrimitive.cpp OpenGLWindow.cpp \
          Primitive.cpp VulkanFactory.cpp VulkanPrimitive.cpp VulkanWindow.cpp Window.cpp

# Object files
OBJECTS = $(SOURCES:.cpp=.o)

# Executable name
EXECUTABLE = abstract_factory_demo

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(EXECUTABLE)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
