
geometria: main.o menu.o triangulo.o retangulo.o quadrado.o circulo.o piramide.o cubo.o paralelepipedo.o esfera.o
	g++ -o geometria -Wall -pedantic -O0 -g -std=c++11 main.o menu.o triangulo.o retangulo.o quadrado.o circulo.o piramide.o cubo.o paralelepipedo.o esfera.o

main.o: main.cpp menu.cpp
	g++ -Wall -pedantic -O0 -g -std=c++11 -c main.cpp  menu.cpp

menu.o: menu.cpp menu.h triangulo.cpp retangulo.cpp quadrado.cpp circulo.cpp piramide.cpp cubo.cpp paralelepipedo.cpp esfera.cpp
	g++ -Wall -pedantic -O0 -g -std=c++11 -c menu.cpp -c triangulo.cpp retangulo.cpp quadrado.cpp circulo.cpp piramide.cpp cubo.cpp paralelepipedo.cpp esfera.cpp

triangulo.o: triangulo.cpp triangulo.h
	g++ -Wall -pedantic -O0 -g -std=c++11 -c triangulo.cpp

retangulo.o: retangulo.cpp retangulo.h
	g++ -Wall -pedantic -O0 -g -std=c++11 -c retangulo.cpp 

quadrado.o: quadrado.cpp quadrado.h
	g++ -Wall -pedantic -O0 -g -std=c++11 -c quadrado.cpp 

circulo.o: circulo.cpp circulo.h
	g++ -Wall -pedantic -O0 -g -std=c++11 -c circulo.cpp 

piramide.o: piramide.cpp piramide.h
	g++ -Wall -pedantic -O0 -g -std=c++11 -c piramide.cpp

cubo.o: cubo.cpp cubo.h
	g++ -Wall -pedantic -O0 -g -std=c++11 -c cubo.cpp 

paralelepipedo.o: paralelepipedo.cpp paralelepipedo.h
	g++ -Wall -pedantic -O0 -g -std=c++11 -c paralelepipedo.cpp 

esfera.o: esfera.cpp esfera.h
	g++ -Wall -pedantic -O0 -g -std=c++11 -c esfera.cpp  


clean:
	rm *.o geometria