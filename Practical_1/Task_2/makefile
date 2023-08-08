CC = g++
CFLAGS = -std=c++11 -Wall

TARGET = output
SRCS = main.cpp Consumer.cpp ODataConsumer.cpp JSONConsumer.cpp ConsumerCreator.cpp
OBJS = $(SRCS:.cpp=.o)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)