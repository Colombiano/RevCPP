// Alocação de Memória - Exercicio de Fixação 04

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

struct carro

{

	char modelo[20];
	int ano_fabricacao;
	float preco;

};

void recebe_carro(carro* ptr1);

int main()

{
 
	carro* ptr = new carro[10];
	recebe_carro(ptr);
	delete[] ptr;
}

void recebe_carro(carro* ptr1)

{
	std::cout << "Digite os dois primeiros dados dos carros. Os dados são MODELO, ANO FABRICACAO E VALOR";
	std::cout << std::endl;
	std::cin >> ptr1[0].modelo >> ptr1[0].ano_fabricacao >> ptr1[0].preco >> ptr1[1].modelo >> ptr1[1].ano_fabricacao >> ptr1[1].preco;
	std::cout << " O valor total dos carros eh: " << ptr1[0].preco + ptr1[1].preco;

}
