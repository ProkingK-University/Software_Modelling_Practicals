ofiles = AfterTest.o BeforeTest.o BooleanCalculator.o BooleanTest.o Calculator.o main.o NumericCalculator.o NumericTest.o Test.o TestBed.o TestDecorator.o
flags = g++ -std=c++11 -c -g

output: $(ofiles)
	g++ -o output $(ofiles)

$(ofiles): AfterTest.h BeforeTest.h BooleanCalculator.h BooleanTest.h Calculator.h NumericCalculator.h NumericTest.h Test.h Testable.h TestBed.h TestDecorator.h

AfterTest.o: AfterTest.cpp
	$(flags) AfterTest.cpp

BeforeTest.o: BeforeTest.cpp
	$(flags) BeforeTest.cpp

BooleanCalculator.o: BooleanCalculator.cpp
	$(flags) BooleanCalculator.cpp

BooleanTest.o: BooleanTest.cpp
	$(flags) BooleanTest.cpp

Calculator.o: Calculator.cpp
	$(flags) Calculator.cpp

main.o: main.cpp
	$(flags) main.cpp

NumericCalculator.o: NumericCalculator.cpp
	$(flags) NumericCalculator.cpp
	
NumericTest.o: NumericTest.cpp
	$(flags) NumericTest.cpp

Test.o: Test.cpp
	$(flags) Test.cpp

TestBed.o: TestBed.cpp
	$(flags) TestBed.cpp

TestDecorator.o: TestDecorator.cpp
	$(flags) TestDecorator.cpp

make: run runv clean

run:
	./output

runv:
	valgrind --leak-check=full ./output

clean:
	rm -f *.o output
