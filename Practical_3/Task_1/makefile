ofiles = Accepted.o Completed.o main.o Negotiation.o Rejected.o SmartContract.o SmartState.o Tentatively.o Observer.o SmartObserver.o
flags = g++ -std=c++11 -c -g

output: $(ofiles)
	g++ -o output $(ofiles)

$(ofiles): Accepted.h Completed.h Negotiation.h Rejected.h Rejected.h SmartContract.h SmartState.h Tentatively.h SmartObserver.h Observer.h Contract.h

Accepted.o: Accepted.cpp
	$(flags) Accepted.cpp

Completed.o: Completed.cpp
	$(flags) Completed.cpp

main.o: main.cpp
	$(flags) main.cpp
	
Negotiation.o: Negotiation.cpp
	$(flags) Negotiation.cpp

Rejected.o: Rejected.cpp
	$(flags) Rejected.cpp

SmartContract.o: SmartContract.cpp
	$(flags) SmartContract.cpp

SmartState.o: SmartState.cpp
	$(flags) SmartState.cpp

Tentatively.o: Tentatively.cpp
	$(flags) Tentatively.cpp

SmartObserver.o: SmartObserver.cpp
	$(flags) SmartObserver.cpp

Observer.o: Observer.cpp
	$(flags) Observer.cpp

make: run runv clean

run:
	./output

runv:
	valgrind --leak-check=full ./output

clean:
	rm -f *.o output
