/**
* @file main.cpp
* @brief Criação da classe Pirâmide
* @author 	Vinícius Ribeiro Bulcão
* @since 18/04/2018
* @date 20/04/2018
*/
class Piramide
{
private:
	/**
	@brief Criação dos parâmetros float
	@param area_base Representará a área da base da figura geométrica
	@param area_lateral Representará a área lateral da figura geométrica
	@param altura Representará o altura da figura geométrica
	@param area Representará o área da figura geométrica
	@param volume Representará o volume da figura geométrica
	*/
	float area_base, area_lateral, altura, area, volume;	
public:
	/** Método getPiramide() */
	int getPiramide(float area_base, float area_lateral, float altura, float area, float volume);
	
};