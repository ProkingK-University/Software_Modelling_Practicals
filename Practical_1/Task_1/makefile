ofiles = CargoMemento.o CargoShip.o main.o MilitaryMemento.o MilitaryShip.o Ship.o ShipMemento.o
flags = g++ -std=c++11 -c -g

output: $(ofiles)
	g++ -o output $(ofiles)

$(ofiles): CargoMemento.h CargoShip.h MilitaryMemento.h MilitaryShip.h Ship.h ShipMemento.h

CargoMemento.o: CargoMemento.cpp
	$(flags) CargoMemento.cpp

CargoShip.o: CargoShip.cpp
	$(flags) CargoShip.cpp

main.o: main.cpp
	$(flags) main.cpp
	
MilitaryMemento.o: MilitaryMemento.cpp
	$(flags) MilitaryMemento.cpp

MilitaryShip.o: MilitaryShip.cpp
	$(flags) MilitaryShip.cpp

Ship.o: Ship.cpp
	$(flags) Ship.cpp

ShipMemento.o: ShipMemento.cpp
	$(flags) ShipMemento.cpp

make: run runv clean

run:
	./output

runv:
	valgrind --leak-check=full ./output

clean:
	rm -f *.o output
