// Alocação de Memória - Exercicio de Fixação 03

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

struct carro

{

	char modelo[20];
	int ano_fabricacao;
	float preco;

};


int main()

{ 
	carro vetor_[10]{ {"Vectra", 2009, 58000} , {"Polo",2008,45000} };
	std::cout << (vetor_ + 1)->modelo;
	std::cout << std::endl;
	std::cout << (vetor_ + 1)->ano_fabricacao;
	std::cout << std::endl;
	std::cout << (vetor_ + 1)->preco;
	std::cout << std::endl;

}
