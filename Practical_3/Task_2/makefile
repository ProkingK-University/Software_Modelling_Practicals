ofiles = BreadthFirstIterator.o DepthFirstIterator.o Enemy.o Lair.o LairIterator.o LairPlayground.o main.o Tile.o
flags = g++ -std=c++11 -c -g

output: $(ofiles)
	g++ -o output $(ofiles)

$(ofiles): BreadthFirstIterator.h DepthFirstIterator.h Enemy.h Lair.h LairIterator.h LairPlayground.h Tile.o

BreadthFirstIterator.o: BreadthFirstIterator.cpp
	$(flags) BreadthFirstIterator.cpp

DepthFirstIterator.o: DepthFirstIterator.cpp
	$(flags) DepthFirstIterator.cpp

Enemy.o: Enemy.cpp
	$(flags) Enemy.cpp

Lair.o: Lair.cpp
	$(flags) Lair.cpp

LairIterator.o: LairIterator.cpp
	$(flags) LairIterator.cpp

LairPlayground.o: LairPlayground.cpp
	$(flags) LairPlayground.cpp

main.o: main.cpp
	$(flags) main.cpp

Tile.o: Tile.cpp
	$(flags) Tile.cpp


make: run runv clean

run:
	./output

runv:
	valgrind --leak-check=full ./output

clean:
	rm -f *.o output
