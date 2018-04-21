/**
* @file triangulo.h
* @brief Programa para calcular as Área/Perímetro/Volume das figuras geométricas
* @author 	Vinícius Ribeiro Bulcão
* @since 18/04/2018
* @date 20/04/2018
*/

class Triangulo
{
private:
	/**
	@brief Criação dos parâmetros float
	@param base Representará a base da figura geométrica
	@param altura Representará a altura da figura geométrica
	@param lado Representará o lado da figura geométrica
	@param area Representará o área da figura geométrica
	@param perimetro Representará o perímetro da figura geométrica
	*/
	float base, altura, lado, area, perimetro;
public:	
	/** Método getTriangulo() */
	int getTriangulo(float base, float altura, float lado, float area, float perimetro);
	
};