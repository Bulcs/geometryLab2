/**
* @file main.cpp
* @brief Programa para calcular as Área e Volume da Pirâmide
* @author 	Vinícius Ribeiro Bulcão
* @since 18/04/2018
* @date 20/04/2018
*/
#include <iostream>
#include "piramide.h"
#include <cmath>

using namespace std;

/** 
@brief chamada do Método getPiramide da classe Piramide 
@param 'area_base' Representará a área da base da figura geométrica
@param 'area_lateral' Representará o área lateral da figura geométrica
@param 'altura' Representará a altura da figura geométrica
@param 'area' Representará o área total da figura geométrica
@param 'volume' Representará o volume da figura geométrica
*/
int Piramide::getPiramide(float area_base, float area_lateral, float altura, float area, float volume){
	/** @brief Criação dos floats para representar o area_base, area_lateral, altura, volume, area
		@param 'arb' Representa a area_base a ser implementada
		@param 'arl' Representa a area_lateral a ser implementada
		@param 'a' Representa a altura a ser implementada
		@param 'ar' Representa a area implementado
		@param 'v' Representa o volume implementado
	*/
	float arb, arl, a, ar, v;

	cout << "\nPiramide\n";
	cout << "Digite a area da base: \n";
	/** @brief Cin para leitura da área da base 'arb' */
	cin >> arb;

	/** @brief 'area_base' recebe 'arb' */
	area_base = arb;

	cout << "\nDigite a area lateral: \n";
	/** @brief Cin para leitura da área lateral 'arl' */
	cin >> arl;

	/** @brief 'area_lateral' recebe 'arl' */
	area_lateral = arl;

	/** @brief Atribuição da fórmula da área */
	ar = arb + arl;

	/** @brief 'area' recebe 'ar' */
	area = ar;

	cout << "\nDigite a altura da Piramide: \n";
	/** @brief Cin para leitura da altura 'arb' */
	cin >> a;

	/** @brief 'altura' recebe 'a' */
	altura = a;

	/** @brief Atribuição da fórmula do volume */
	v = (arb*a)/3;

	/** @brief 'volume' recebe 'v' */
	volume = v;

	/** @brief Impressão dos valores da área e volume */
	cout << "\nÁrea: " << area;
	cout << "\nVolume: " << volume << endl;

	return 0;
}