SRC_FILES := $(wildcard *.cpp)
OBJ_FILES := $(patsubst %.cpp, %.o, $(SRC_FILES))

all: linked_list.exe

linked_list.exe: $(OBJ_FILES)
	g++ -Wall -o linked_list.exe $^

%.o: %.cpp
	g++ -c -o $@ $<