# Variables used by makefile

CC=g++
CXXFLAGS=-Wall -std=c++17
EXE=main
OBJECTS=ciphers.o

# Recipes for targets
caeser.o: ciphers.cpp ciphers.h pch.h
	$(CC) $(CXXFLAGS) -c cipher.cpp

$(EXE): $(OBJECTS) $(EXE).cpp
	$(CC) $(CXXFLAGS) -o $(EXE) $(OBJECTS)  $(EXE).cpp

# PHONY targets

.PHONY: clean
clean:
	rm -rf *~ $(EXE) $(OBJECTS)

# End of makefile
