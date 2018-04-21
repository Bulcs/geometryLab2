/**
* @file quadrado.cpp
* @brief Programa para calcular as Área e Perímetro do quadrado
* @author 	Vinícius Ribeiro Bulcão
* @since 18/04/2018
* @date 20/04/2018
*/
#include <iostream>
#include "quadrado.h"
#include <cmath>

using namespace std;
/** 
@brief chamada do Método getQuadrado da classe Quadrado 
@param 'lado' Representará o lado da figura geométrica
@param 'area' Representará o área da figura geométrica
@param 'perimetro' Representará o perímetro da figura geométrica
*/
int Quadrado::getQuadrado(float lado, float area, float perimetro){
	/** @brief Criação dos floats para representar o lado, area, perimetro
		@param 'l' Representa o lado a ser implementada
		@param 'ar' Representa a area a ser implementada
		@param 'p' Representa a perimetro a ser implementada
	*/
	float l, ar, p;

	cout << "\nQuadrado\n";
	cout << "Digite o lado: \n";
	/** @brief Cin para leitura do lado 'l' */
	cin >> l;

	/** @brief 'lado' recebe 'l' */
	lado = l;

	/** @brief Atribuição da fórmula da área */
	ar = pow(l,2);
	/** @brief Atribuição da fórmula do perímetro */
	p = 4*l;

	/** @brief 'area' recebe 'ar' */
	area = ar;
	/** @brief 'perimetro' recebe 'p' */
	perimetro = p;

	/** @brief Impressão dos valores da área e perímetro */
	cout << "\nÁrea: " << area;
	cout << "\nPerimetro: " << perimetro << endl;

	return 0;
}