/**
* @file main.cpp
* @brief Programa para calcular as Área e Volume do Cubo
* @author 	Vinícius Ribeiro Bulcão
* @since 18/04/2018
* @date 20/04/2018
*/
#include <iostream>
#include "cubo.h"
#include <cmath>

using namespace std;

/** 
@brief chamada do Método getCubo da classe Cubo 
@param 'aresta' Representará a aresta da figura geométrica
@param 'area' Representará o área total da figura geométrica
@param 'volume' Representará o volume da figura geométrica
*/

int Cubo::getCubo(float aresta, float volume, float area){
	/** @brief Criação dos floats para representar o aresta, volume, area
		@param 'are' Representa a aresta a ser implementada
		@param 'ar' Representa a area implementado
		@param 'v' Representa o volume implementado
	*/
	float are, v, ar;

	cout << "\nCubo\n";
	cout << "Digite a aresta: \n";
	/** @brief Cin para leitura da aresta 'are' */
	cin >> are;

	/** @brief 'aresta' recebe 'are' */
	aresta = are;

	/** @brief Atribuição da fórmula da área */
	ar = 6*pow(are,2);
	/** @brief Atribuição da fórmula do volume */
	v = pow(are,3);

	/** @brief 'ares' recebe 'ar' */
	area = ar;
	/** @brief 'volume' recebe 'v' */
	volume = v;

	/** @brief Impressão dos valores da área e volume */
	cout << "\nÁrea: " << area;
	cout << "\nVolume: " << volume << endl;

	return 0;
}