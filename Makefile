CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -g

game: main.o game.o
	$(CXX) $(CXXFLAGS) -o game main.o game.o

main.o: main.cc game.h
	$(CXX) $(CXXFLAGS) -c main.cc

game.o: game.cc game.h
	$(CXX) $(CXXFLAGS) -c game.cc

.PHONY: clean
clean:
	rm -f *.o game