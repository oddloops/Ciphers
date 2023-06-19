# Variables used by makefile

CC=g++
CXXFLAGS=-Wall -std=c++17
EXE=main
OBJECTS=caeser.o

# Recipes for targets
caeser.o: caeser.cpp caeser.h pch.h
	$(CC) $(CXXFLAGS) -c caeser.cpp

$(EXE): $(OBJECTS) $(EXE).cpp
	$(CC) $(CXXFLAGS) -o $(EXE) $(OBJECTS)  $(EXE).cpp

# PHONY targets

.PHONY: clean
clean:
	rm -rf *~ $(EXE) $(OBJECTS)

# End of makefile
