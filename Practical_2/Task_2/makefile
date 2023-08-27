ofiles = Individual.o main.o OrgStructure.o
flags = g++ -std=c++11 -c -g

output: $(ofiles)
	g++ -o output $(ofiles)

$(ofiles): Individual.h Organisation.h OrgStructure.h

Individual.o: Individual.cpp
	$(flags) Individual.cpp

main.o: main.cpp
	$(flags) main.cpp
	
OrgStructure.o: OrgStructure.cpp
	$(flags) OrgStructure.cpp

make: run runv clean

run:
	./output

runv:
	valgrind --leak-check=full ./output

clean:
	rm -f *.o output
