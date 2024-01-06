// Alocação de Memória - Exercicio de revisão 01

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

int main()

{
	int vetor;
	std::cout << "Digite o tamanho do vetor a ser criado" << std::endl;
	std::cin >> vetor;
	std::cout << "Criando vetor para " << vetor << " inteiros ..." << std::endl;
	int* ptr = new int [vetor];
	delete[] ptr;
}
