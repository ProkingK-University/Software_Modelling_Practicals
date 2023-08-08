CC = g++
CFLAGS = -std=c++11 -Wall

TARGET = main
SRCS = main.cpp Ship.cpp CargoShip.cpp MilitaryShip.cpp ShipMemento.cpp CargoMemento.cpp MilitaryMemento.cpp
OBJS = $(SRCS:.cpp=.o)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
    $(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -f $(OBJS) $(TARGET)