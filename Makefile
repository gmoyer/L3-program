CXX = g++  # the compiler
CXXFLAGS = -std=c++20 -Wall  # flags for the compiler (use c++20 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!

# runs for "make all"
all: target1 target2

target1: functions_to_implement.o
	$(CXX) $(CXXFLAGS) main.cpp functions_to_implement.o -o main

target2: functions_to_implement.o
	$(CXX) $(CXXFLAGS) test.cpp functions_to_implement.o catch.hpp -o tests

functions_to_implement.o:
	$(CXX) $(CXXFLAGS) -c functions_to_implement.cpp

clean:
	rm main functions_to_implement.o