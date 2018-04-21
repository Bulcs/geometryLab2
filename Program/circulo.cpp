/**
* @file main.cpp
* @brief Programa para calcular as Área e Perímetro do Círculo
* @author 	Vinícius Ribeiro Bulcão
* @since 18/04/2018
* @date 20/04/2018
*/
#include <iostream>
#include "circulo.h"
#include <cmath>

using namespace std;

/** 
@brief chamada do Método getCirculo da classe Circulo 
@param 'raio' Representará o raio da figura geométrica
@param 'area' Representará o área da figura geométrica
@param 'perimetro' Representará o perímetro da figura geométrica
*/
int Circulo::getCirculo(float raio, float area, float perimetro){
	/** @brief Criação dos floats para representar o lado, area, perimetro
		@param 'r' Representa o raio a ser implementada
		@param 'ar' Representa a area a ser implementada
		@param 'p' Representa a perimetro a ser implementada
		@param 'pi' Representa o pi implementado
	*/
	float r;
	float ar,p,pi=3.1415;

	cout << "\nCírculo\n";
	cout << "Digite o raio: \n";
	/** @brief Cin para leitura do raio 'r' */
	cin >> r;

	/** @brief 'raio' recebe 'r' */
	raio = r;

	/** @brief Atribuição da fórmula da área */
	ar = pi*pow(r,2);
	/** @brief Atribuição da fórmula do perímetro */
	p = 2*pi*r;

	/** @brief 'area' recebe 'ar' */
	area = ar;
	/** @brief 'perimetro' recebe 'p' */
	perimetro = p;

	/** @brief Impressão dos valores da área e perímetro */
	cout << "\nÁrea: " << area;
	cout << "\nPerimetro: " << perimetro << endl;

	return 0;
}
