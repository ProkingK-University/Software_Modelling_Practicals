flags = g++ -std=c++11 -c -g
ofiles = Individual.o OrgStructure.o main.o

output: $(ofiles)
	g++ -o output $(ofiles)

$(ofiles): Individual.h OrgStructure.h

Individual.o: Individual.cpp
	$(flags) Individual.cpp

OrgStructure.o: OrgStructure.cpp
	$(flags) OrgStructure.cpp

main.o: main.cpp
	$(flags) main.cpp

make: run runv clean

run:
	./output

runv:
	valgrind --leak-check=full ./output

clean:
	rm -f *.o output