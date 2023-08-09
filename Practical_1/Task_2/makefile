ofiles = Consumer.o JSONConsumer.o ODataConsumer.o ConsumerCreator.o main.o
flags = g++ -std=c++11 -c -g

output: $(ofiles)
	g++ -o output $(ofiles)

$(ofiles): Consumer.h JSONConsumer.h ODataConsumer.h ConsumerCreator.h

Consumer.o: Consumer.cpp
	$(flags) Consumer.cpp

JSONConsumer.o: JSONConsumer.cpp
	$(flags) JSONConsumer.cpp

ODataConsumer.o: ODataConsumer.cpp
	$(flags) ODataConsumer.cpp

ConsumerCreator.o: ConsumerCreator.cpp
	$(flags) ConsumerCreator.cpp

main.o: main.cpp
	$(flags) main.cpp

make: run runv clean

run:
	./output

runv:
	valgrind --leak-check=full ./output

clean:
	rm -f *.o output