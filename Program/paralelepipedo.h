/**
* @file main.cpp
* @brief Criação da classe Paralelepípedo
* @author 	Vinícius Ribeiro Bulcão
* @since 18/04/2018
* @date 20/04/2018
*/
class Paralelepipedo
{
private:
	/**
	@brief Criação dos parâmetros float
	@param aresta1 Representará uma das arestas da figura geométrica
	@param aresta2 Representará uma das arestas da figura geométrica
	@param aresta3 Representará uma das arestas da figura geométrica
	@param area Representará o área da figura geométrica
	@param volume Representará o volume da figura geométrica
	*/
	float aresta1, aresta2, aresta3,area,volume;
public:
	/** Método getParalelepipedo() */
	int getParalelepipedo(float aresta1,float aresta2, float aresta3, float area, float volume);
	
};