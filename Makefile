CPP_OPTS = -std=c++11

main:	poll.h poll.o main.cpp
	g++ $(CPP_OPTS) -Wall -o poll main.cpp rectangle.o

poll.o: poll.h poll.cpp
	g++ $(CPP_OPTS) -Wall -c poll.cpp

answer.o: answer.h answer.cpp
	g++ $(CPP_OPTS) -Wall -c answer.cpp