SRC_FILES := $(wildcard *.cpp)
OBJ_FILES := $(patsubst %.cpp, %.o, $(SRC_FILES))

all: login.exe

login.exe: $(OBJ_FILES)
	g++ -Wall -o login.exe $^

%.o: %.cpp
	g++ -c -o $@ $<