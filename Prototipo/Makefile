
lab2: main.o geometry.o
	g++ -o lab2 -Wall -pedantic -O0 -g -std=c++11 main.o geometry.o
main.o: main.cpp geometry.h
	g++ -Wall -pedantic -O0 -g -std=c++11 -c main.cpp
geometry.o: geometry.cpp
	g++ -Wall -pedantic -O0 -g -std=c++11 -c geometry.cpp

clean:
	rm *.o prova