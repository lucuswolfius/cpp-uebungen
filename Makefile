CPP_OPTS = -std=c++11

main:	player.h player.o main.cpp
	g++ $(CPP_OPTS) -o main main.cpp player.o

player.o: player.h player.cpp
	g++ $(CPP_OPTS) -c player.cpp