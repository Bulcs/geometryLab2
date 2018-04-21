/**
* @file retangulo.h
* @brief Classe Retangulo
* @author 	Vinícius Ribeiro Bulcão
* @since 18/04/2018
* @date 20/04/2018
*/
class Retangulo
{
private:
	/**
	@brief Criação dos parâmetros float
	@param base Representará a base da figura geométrica
	@param altura Representará a altura da figura geométrica
	@param area Representará o área da figura geométrica
	@param perimetro Representará o perímetro da figura geométrica
	*/
	float base, altura, area, perimetro;
public:
	/** Método getRetangulo() */
	int getRetangulo(float base, float altura, float area, float perimetro);
	
};