#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

struct animais
{
	char nome[50];
	float peso;
	unsigned altura;
	float quantidade_de_animais;

};

struct zoologico
{
	animais doentes;

	struct
	{
		int x;
		int y;

	} localizacao;
};

int main()

{
	zoologico salvador[22];
	std::strcpy(salvador[0].doentes.nome, "camelo");
	salvador[0].localizacao.x = 23;
	std::strcpy(salvador[12].doentes.nome, "flamingo");
	std::cout << salvador[0].doentes.nome << std::endl;
	std::cout << salvador[12].doentes.nome << std::endl;
	std::cout << salvador[12].doentes.nome[2] << std::endl; // Vai imprimir o caractere "a" de flamingo
	std::cout << salvador[1].doentes.nome << std::endl;
}
