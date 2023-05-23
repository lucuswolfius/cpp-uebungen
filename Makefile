CPP_OPTS = -std=c++11

main:	person.h person.o main.cpp
	g++ $(CPP_OPTS) -Wall -o person main.cpp person.o

person.o: person.h person.cpp
	g++ $(CPP_OPTS) -Wall -c person.cpp