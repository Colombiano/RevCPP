// Alocação de Memória - Exercicio de revisão 02,03 e 04

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

struct peixe

{
	char tipo[20];
	float peso;
	unsigned comp;

};

void recebe_peixe(peixe* ptr);

int main()

{
	
	std::cout << "Digite o tamanho do vetor do tipo peixe" << std::endl;
	int usuario;
	std::cin >> usuario;
	peixe* ptr = new peixe [usuario];

	std::cout << "Digite o tipo do peixe, o peso e o comprimento " << std::endl;
    std::cin >> ptr[0].tipo >> ptr[0].peso >> ptr[0].comp;
	std::cout << "Tamanho do vetor : " << usuario;
	std::cout << std::endl;
	std::cout << std::endl;
	recebe_peixe(ptr);




	delete[] ptr;
}

void recebe_peixe(peixe* ptr)

{
	std::cout << "Digite o elemento do vetor peixes que voce quer saber o peso" << std::endl;
	int elemento;
	std::cin >> elemento;
	std::cout << ptr[elemento].peso;
}
