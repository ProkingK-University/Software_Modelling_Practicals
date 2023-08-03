ofiles = Ship.o CargoShip.o main.o
flags = g++ -std=c++98 -c -g

output: $(ofiles)
	g++ -o output $(ofiles)

$(ofiles): Ship.h CargoShip.h

Ship.o: Ship.cpp
	$(flags) Ship.cpp

CargoShip.o: CargoShip.cpp
	$(flags) CargoShip.cpp

main.o: main.cpp
	$(flags) main.cpp

make: run runv clean

run:
	./output

runv:
	valgrind --leak-check=full ./output

clean:
	rm -f *.o output