ofiles = main.o Handler.o SignUp.o SignIn.o Validate.o
flags = g++ -std=c++11 -c -g

output: $(ofiles)
	g++ -o output $(ofiles)

$(ofiles): Handler.h User.h SignUp.h SignIn.h Validate.h Authorized.h

main.o: main.cpp
	$(flags) main.cpp

Handler.o: Handler.cpp
	$(flags) Handler.cpp

SignUp.o: SignUp.cpp
	$(flags) SignUp.cpp

SignIn.o: SignIn.cpp
	$(flags) SignIn.cpp

Validate.o: Validate.cpp
	$(flags) Validate.cpp

make: run runv clean

run:
	./output

runv:
	valgrind --leak-check=full ./output

clean:
	rm -f *.o output