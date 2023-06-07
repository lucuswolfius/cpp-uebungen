SRC_FILES := $(wildcard *.cpp)
OBJ_FILES := $(patsubst %.cpp, %.o, $(SRC_FILES))

all: stack.exe

stack.exe: $(OBJ_FILES)
	g++ -Wall -o stack.exe $^

%.o: %.cpp
	g++ -c -o $@ $<