STD = -std=c++11

all: kakuro

kakuro: Kakuro.o Kset.o
	g++ $(STD) Kakuro.o Kset.o -o kakuro

Kakuro.o: Kakuro.cpp Kakuro.h
	g++ $(STD) -c Kakuro.cpp

Kset.o: Kset.cpp Kset.h
	g++ $(STD) -c Kset.cpp

clean:
	rm -rf enigma *.o

.PHONY: clean all
