#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
int main()

{
	struct //usamos essa estrutura sem o struct não tendo nome quando queremos usá-lo como uma variável local
	{
		int x;
		int y;
		int z;
	}
	ponto; //obrigatorio gerar a variavel
	std::cout << "Digite o valor do eixo X " << std::endl;
	std::cin >> ponto.x;
	std::cout << "Digite o valor do eixo Y " << std::endl;
	std::cin >> ponto.y;
	std::cout << "Digite o valor do eixo Z " << std::endl;
	std::cin >> ponto.z;
	std::cout << "O ponto possui a seguinte configuracao : "
		<< "(" << ponto.x
		<< ","
		<< ponto.y
		<< ","
		<< ponto.z
		<< ")" << std::endl;
}
