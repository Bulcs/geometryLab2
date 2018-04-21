/**
* @file retangulo.cpp
* @brief Programa para calcular as Área e Perímetro do Retângulo
* @author 	Vinícius Ribeiro Bulcão
* @since 18/04/2018
* @date 20/04/2018
*/
#include <iostream>
#include "retangulo.h"
#include <cmath>

using namespace std;
/** 
@brief chamada do Método getRetangulo da classe Retangulo 
@param 'base' Representará a base da figura geométrica
@param 'altura' Representará a altura da figura geométrica
@param 'area' Representará o área da figura geométrica
@param 'perimetro' Representará o perímetro da figura geométrica
*/
int Retangulo::getRetangulo(float base, float altura, float area, float perimetro){
	/** @brief Criação dos floats para representar a base, altura, area, perimetro
		@param 'b' Representa a base a ser implementada
		@param 'a Representa a altura a ser implementada
		@param 'ar' Representa a area a ser implementada
		@param 'p' Representa a perimetro a ser implementada
	*/
	float b, a, ar, p;
	cout << "\nRetângulo\n";
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
	
	/** @brief Atribuição da fórmula da área */
	ar = b*a;
	/** @brief Atribuição da fórmula do perímetro */
	p = (b+a)*2;

	/** @brief 'area' recebe 'ar' */
	area = ar;
	/** @brief 'perimetro' recebe 'p' */
	perimetro = p;
	
	/** @brief Impressão dos valores da área e perímetro */
	cout << "\nÁrea: " << area;
	cout << "\nPerimetro: " << perimetro << endl;
	return 0;
}