/**
* @file triangulo.cpp
* @brief Programa para calcular as Área/Perímetro/Volume das figuras geométricas
* @author 	Vinícius Ribeiro Bulcão
* @since 18/04/2018
* @date 20/04/2018
*/
#include <iostream>
#include "triangulo.h"
#include <cmath>

using namespace std;
/** 
@brief chamada do Método getTriangulo da classe Triangulo 
@param 'base' Representará a base da figura geométrica
@param 'altura' Representará a altura da figura geométrica
@param 'lado' Representará o lado da figura geométrica
@param 'area' Representará o área da figura geométrica
@param 'perimetro' Representará o perímetro da figura geométrica
*/
int Triangulo::getTriangulo(float base, float altura, float lado, float area, float perimetro){
	/** @brief Criação dos floats para representar a base, altura, lado, area, perimetro
		@param 'b' Representa a base a ser implementada
		@param 'a Representa a altura a ser implementada
		@param 'l' Representa o lado a ser implementada
		@param 'ar' Representa a area a ser implementada
		@param 'p' Representa a perimetro a ser implementada
	*/
	float b, a, l, ar, p;
	cout << "\nTriângulo\n";
	cout << "Digite a base: \n";
	/** @brief Cin para leitura da base 'b' */
	cin >> b;

	/** @brief 'base' recebe 'b' */
	base = b;

	cout << "\nDigite a altura: \n";
	/** @brief Cin para leitura da altura 'a' */
	cin >> a;
	/** @brief 'altura' recebe 'a' */
	altura = a;

	cout << "\nDigite o lado: \n";
	/** @brief Cin para leitura da lado 'l' */
	cin >> l;
	/** @brief 'lado' recebe 'l' */
	lado = l;
	/** @brief Atribuição da fórmula da área */

	ar = (b * a)/2;
	/** @brief Atribuição da fórmula do perímetro */
	p = l*3;
	/** @brief 'area' recebe 'ar' */
	area = ar;
	/** @brief 'perimetro' recebe 'p' */
	perimetro = p;

	/** @brief Impressão dos valores da área e perímetro */
	cout << "\nÁrea: " << area;
	cout << "\nPerimetro: " << perimetro << endl;
	return 0;
}