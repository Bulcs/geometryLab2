#include <iostream>
#include "geometry.h"

using namespace std;


int main(int argc, char const *argv[])
{
	int escolha;


	escolha = menu();

	switch(escolha){
		case 1: Triangulo();
		break;
	
		case 2: Retangulo();
		break;

		case 3: Quadrado();
		break;

		case 4: Circulo();
		break;

		case 5: Piramide();
		break;

		case 6: Cubo();
		break;

		case 7: Paralelepipedo();
		break;

		case 8: Esfera();
		break;

		default: 
			cout << "\nNúmero fora dos valores estabelecidos\n";
		break;
	}
	return 0;
}