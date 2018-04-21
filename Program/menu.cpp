/**
* @file menu.cpp
* @brief Menu do programa utilizado para chamar os métodos das classes
* @author 	Vinícius Ribeiro Bulcão
* @since 18/04/2018
* @date 20/04/2018
* @sa www.cppreference.com/reference/string/string/compare/
*/

#include <iostream>
#include "menu.h"
/** @brief Chamando as classes */
#include "triangulo.h"
#include "retangulo.h"
#include "quadrado.h"
#include "circulo.h"
#include "piramide.h"
#include "cubo.h"
#include "paralelepipedo.h"
#include "esfera.h"

#include <string.h>
using namespace std;
/** @brief Chamando o método getMenu */
int Menu::getMenu(){
	string aux; /** @brief aux string criada para chamar a forma geométrica */
	int contador = 0; /** @details Criação de um contados para analisar se a figura geométrica está presente entre as alternativas */
	/** @brief Cout com as instruções do programa */
	std::cout << "Olá, bem-vindo ao Geometry, programa utilizado para calcular a ÁREA, VOLUME E PERÍMETRO das figuras geométricas.\n";
	std::cout << "Digite o nome da forma geométrica para seleciona-la:\n";
	std::cout << "1 - Triângulo(equilátero)\n2 - Retângulo\n3 - Quadrado\n4 - Circulo\n5 - Pirâmide(base quadrangular)\n6 - Cubo\n7 - Paralelepípedo\n8 - Esfera\n" << endl;
	/** Leitura da string aux */
	cin >> aux;

	/** @brief Instanciação de um objeto Triangulo(t1) */
	Triangulo t1;
	/** @brief Criação da comparação de strings */
	if(aux.compare("triangulo") == 0)
	/** @brief t1 recebe o método getTriangulo() */
		t1.getTriangulo(0,0,0,0,0);
	
	else
	/** @brief Caso a string não seja a esperada, soma-se 1 ao contador */
		contador++;

	/** @brief Instanciação de um objeto Retangulo(r1) */
	Retangulo r1;

	if(aux.compare("retangulo") == 0)
		/** @brief r1 recebe o método getRetangulo() */
		r1.getRetangulo(0,0,0,0);
	
	else
	/** @brief Caso a string não seja a esperada, soma-se 1 ao contador */
		contador++;

	/** @brief Instanciação de um objeto Quadrado(q1) */
	Quadrado q1;

	if(aux.compare("quadrado") == 0)
	/** @brief q1 recebe o método getQuadrado() */
		q1.getQuadrado(0,0,0);
	
	else
	/** @brief Caso a string não seja a esperada, soma-se 1 ao contador */
		contador++;

	/** @brief Instanciação de um objeto Circulo(c1) */
	Circulo c1;

	if(aux.compare("circulo") == 0)
	/** @brief c1 recebe o método getCirculo() */
		c1.getCirculo(0,0,0);
	
	else
	/** @brief Caso a string não seja a esperada, soma-se 1 ao contador */
		contador++;

	/** @brief Instanciação de um objeto Piramide(p1) */
	Piramide p1;

	if(aux.compare("piramide") == 0)
	/** @brief p1 recebe o método getPiramide() */
		p1.getPiramide(0,0,0,0,0);
	
	else
	/** @brief Caso a string não seja a esperada, soma-se 1 ao contador */
		contador++;

	/** @brief Instanciação de um objeto Cubo(cbo1) */
	Cubo cbo1;

	if(aux.compare("cubo") == 0)
	/** @brief cbo1 recebe o método getCubo() */
		cbo1.getCubo(0,0,0);
	
	else
	/** @brief Caso a string não seja a esperada, soma-se 1 ao contador */
		contador++;

	/** @brief Instanciação de um objeto Paralelepipedo(pa1) */
	Paralelepipedo pa1;

	if(aux.compare("paralelepipedo") == 0)
	/** @brief pa1 recebe o método getParalelepipedo() */
		pa1.getParalelepipedo(0,0,0,0,0);
	
	else
	/** @brief Caso a string não seja a esperada, soma-se 1 ao contador */
		contador++;

	/** @brief Instanciação de um objeto Esfera(e1) */
	Esfera e1;

	if(aux.compare("esfera") == 0)
	/** @brief e1 recebe o método getEsfera() */
		e1.getEsfera(0,0,0);
	
	else
	/** @brief Caso a string não seja a esperada, soma-se 1 ao contador */
		contador++;

	/** @details Caso o contador chegue a 8, significa que nenhuma das strings bateu com as formas geométricas disponiveis */
	if(contador == 8){
		cout << "\nForma geométrica não encontrada." << endl;
	}
	/** @brief Return */
	return 0;
}