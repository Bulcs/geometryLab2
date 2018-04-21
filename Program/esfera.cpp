/**
* @file main.cpp
* @brief Programa para calcular as Área e Volume da Esfera
* @author 	Vinícius Ribeiro Bulcão
* @since 18/04/2018
* @date 20/04/2018
*/
#include <iostream>
#include "esfera.h"
#include <cmath>

using namespace std;

/** 
@brief chamada do Método getEsfera da classe Esfera 
@param 'raio' Representará o raio da figura geométrica
@param 'area' Representará o área total da figura geométrica
@param 'volume' Representará o volume da figura geométrica
*/
int Esfera::getEsfera(float raio, float area, float volume){
	/** @brief Criação dos floats para representar o raio, area, volume
		@param 'r' Representa o raio a ser implementada
		@param 'ar' Representa a area a ser implementada
		@param 'v' Representa o volume a ser implementada
		@param 'pi' Representa o pi implementado
	*/
	float pi=3.1415, r, ar, v;

	cout << "\nEsfera\n";
	cout << "Digite o raio da Esfera\n";
	/** @brief Cin para leitura do raio 'r' */
	cin >> r;

	/** @brief 'raio' recebe 'r' */
	raio = r;

	/** @brief Atribuição da fórmula da área */
	ar = 4*pi*pow(r,2);
	/** @brief Atribuição da fórmula do volume */
	v = 4*(pi * pow(r,3));

	/** @brief 'area' recebe 'ar' */
	area = ar;
	/** @brief 'volume' recebe 'v' */
	volume = v;

	/** @brief Impressão dos valores da área e volume */
	cout << "\nÁrea: " << area;
	cout << "\nVolume: " << volume/3 << endl;

	return 0;
}