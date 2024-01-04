
// Ponteiros Exercicio de revisao 03 e 04

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

struct animal

{

	char tipo[20];
	float peso;
	int comprimento;


};

void receba(animal* ptr);

int main()

{

	animal peixe;
	peixe = { "Peixe de rio", 150.12, 2 };
	animal* ptr = &peixe;
	receba(&peixe);

}

void receba(animal* ptr)

{
	std::cout <<"O peixe eh do tipo: " << ptr->tipo << std::endl;
	std::cout << "O peso do peixe em kg eh: " << ptr->peso << std::endl;
	std::cout << "O comprimento do peixe em metros eh: " << ptr->comprimento << std::endl;

}
