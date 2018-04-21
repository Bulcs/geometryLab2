
#include <iostream>
#include <math.h>
using namespace std;

int menu(){
	int aux;
	std::cout << "Olá, bem-vindo ao Geometry, programa utilizado para calcular a ÁREA, VOLUME E PERÍMETRO das figuras geométricas.\n";
	std::cout << "Digite um dos seguintes números para selecionar as formas geométricas:\n";
	std::cout << "1 - Triângulo(equilátero)\n2 - Retângulo\n3 - Quadrado\n4 - Circulo\n5 - Pirâmide(base quadrangular)\n6 - Cubo\n7 - Paralelepípedo\n8 - Esfera\n";
	
	std::cin >> aux;
	return aux;
}

void Triangulo(){
	float base, altura, lado, area, perimetro;
	cout << "\nTriângulo\n";
	cout << "Digite a base: \n";
	cin >> base;
	cout << "\nDigite a altura: \n";
	cin >> altura;
	cout << "\nDigite o lado: \n";
	cin >> lado;
	area = (base * altura)/2;
	perimetro = lado*3;

	cout << "\nÁrea: " << area;
	cout << "\nPerimetro: " << perimetro << endl;
}

void Retangulo(){
	float base, altura, area, perimetro;
	cout << "\nRetângulo\n";
	cout << "Digite a base: \n";
	cin >> base;
	cout << "\nDigite a altura: \n";
	cin >> altura;
	area = base*altura;
	perimetro = (base+altura)*2;

	cout << "\nÁrea: " << area;
	cout << "\nPerimetro: " << perimetro << endl;
}

void Quadrado(){
	float lado, area, perimetro;

	cout << "\nQuadrado\n";
	cout << "Digite o lado: \n";
	cin >> lado;
	area = pow(lado,2);
	perimetro = 4*lado;

	cout << "\nÁrea: " << area;
	cout << "\nPerimetro: " << perimetro << endl;
}

void Circulo(){
	float raio;
	float area,perimetro,pi=3.1415;

	cout << "\nCírculo\n";
	cout << "Digite o raio: \n";
	cin >> raio;
	area = pi*pow(raio,2);
	perimetro = 2*pi*raio;

	cout << "\nÁrea: " << area;
	cout << "\nPerimetro: " << perimetro << endl;
}

void Piramide(){
	float area_base, area_lateral, altura, area, volume;

	cout << "\nPiramide\n";
	cout << "Digite a area da base: \n";
	cin >> area_base;

	cout << "\nDigite a area lateral: \n";
	cin >> area_lateral;

	area = area_base + area_lateral;

	cout << "\nDigite a altura da Piramide: \n";
	cin >> altura;

	volume = (area_base*altura)/3;
	cout << "\nÁrea: " << area;
	cout << "\nVolume: " <<volume<< endl;
}

void Cubo(){
	float aresta, volume , area;

	cout << "\nCubo\n";
	cout << "Digite a aresta: \n";
	cin >> aresta;

	area = 6*pow(aresta,2);
	volume = pow(aresta,3);

	cout << "\nÁrea: " << area;
	cout << "\nVolume: " << volume << endl;
}

void Paralelepipedo(){
	float aresta1,aresta2,aresta3,area,volume;

	cout << "\nParalelepípedo\n";
	cout << "Digite as 3 arestas do Paralelepípedo\n";
	cin >> aresta1;
	cin >> aresta2;
	cin >> aresta3;

	area = (2*aresta1*aresta2)+(2*aresta1*aresta3)+(2*aresta2*aresta3);
	volume = aresta1*aresta2*aresta3;

	cout << "\nÁrea: " << area;
	cout << "\nVolume: " << volume << endl;
}

void Esfera(){
	float pi=3.1415,raio,area,volume;

	cout << "\nEsfera\n";
	cout << "Digite o raio da Esfera\n";
	cin >> raio;

	area = 4*pi*pow(raio,2);
	volume = 4*(pi * pow(raio,3));

	cout << "\nÁrea: " << area;
	cout << "\nVolume: " << volume/3 << endl;
}