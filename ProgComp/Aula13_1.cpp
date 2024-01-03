// uniao e enumeraçoes

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

union Exemplo // como criar uma uniao
{

	char casa;
	int numero_casa;
	float valor_aluguel_casa;

};

enum class Exemplo1 // enumeraçao com escopo. Poderiamos usar "enum struct Exemplo1 {};"
{
	vermelho = 1, amarelo, verde, preto = 15
};

enum Exemplo3 // enumeraçao criada do jeito antigo, antes do c++11

{ vermelho, amarelo, verde, preto

};
int main()

{
	Exemplo predio{};
    std::cout << predio.casa;
	std::cout << predio.numero_casa;
    std::cout << predio.valor_aluguel_casa;
    std::cout << "Digite o valor do aluguel da casa" << std::endl;
	std::cin >> predio.valor_aluguel_casa;
	std::cout << predio.valor_aluguel_casa << std::endl;
	std::cout << "Digite o numero do apartamento" << std::endl;
	std::cin >> predio.numero_casa;
	std::cout << predio.numero_casa << std::endl;
	std::cout << predio.valor_aluguel_casa;

	Exemplo1 condominio{};
	int separador = int(Exemplo1::vermelho);
	std::cout << separador << std::endl;
	float carga = float(Exemplo1::verde) + (0.1); // conversao explicita, typecast.
	std::cout << carga;

}
