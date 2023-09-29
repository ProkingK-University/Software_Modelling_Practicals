# Generic C++ Makefile

# Compiler
CXX := g++

# Flags
CXXFLAGS := -std=c++11 -Wall -Wextra

# Source files
SRCS := $(wildcard *.cpp)

# Object files
OBJS := $(SRCS:.cpp=.o)

# Executable name
EXEC := main

# Build target
all: $(EXEC)

# Rule to build the executable
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Rule to compile source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean the project
clean:
	rm -f $(EXEC) $(OBJS)

.PHONY: all clean
