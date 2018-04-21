/**
* @file main.cpp
* @brief Programa para calcular as Área e Volume do Paralelepípedo
* @author 	Vinícius Ribeiro Bulcão
* @since 18/04/2018
* @date 20/04/2018
*/
#include <iostream>
#include "paralelepipedo.h"
#include <cmath>

using namespace std;

/** 
@brief chamada do Método getParalelepipedo da classe Paralelepipedo 
@param 'aresta1' Representará a aresta1 da figura geométrica
@param 'aresta2' Representará a aresta2 da figura geométrica
@param 'aresta3' Representará a aresta3 da figura geométrica
@param 'area' Representará o área total da figura geométrica
@param 'volume' Representará o volume da figura geométrica
*/
int Paralelepipedo::getParalelepipedo(float aresta1, float aresta2, float aresta3, float area, float volume){
	/** @brief Criação dos floats para representar as arestas, volume, area
		@param 'are[3]' Representa as arestas a serem implementadas
		@param 'ar' Representa a area implementado
		@param 'v' Representa o volume implementado
	*/
	float are[3],ar,v;

	cout << "\nParalelepípedo\n";
	cout << "Digite as 3 arestas do Paralelepípedo\n";
	/** @brief Cin para leitura das três arestas 'are[3]' */
	cin >> are[0];
	cin >> are[1];
	cin >> are[2];

	/** @brief 'aresta1' recebe 'are[0]' */
	aresta1 = are[0];
	/** @brief 'aresta2' recebe 'are[1]' */
	aresta2 = are[1];
	/** @brief 'aresta3' recebe 'are[2]' */
	aresta3 = are[2];

	/** @brief Atribuição da fórmula da área */
	ar = (2*are[0]*are[1])+(2*are[0]*are[2])+(2*are[1]*are[2]);
	/** @brief Atribuição da fórmula do volume */
	v = are[0]*are[1]*are[2];

	/** @brief 'area' recebe 'ar' */
	area = ar;
	/** @brief 'volume' recebe 'v' */
	volume = v;

	/** @brief Impressão dos valores da área e volume */
	cout << "\nÁrea: " << area;
	cout << "\nVolume: " << volume << endl;

	return 0;
}