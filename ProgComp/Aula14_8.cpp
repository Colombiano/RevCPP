// Ponteiros Exercicio de fixação 03

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

void Mais(int* ptr);
void incrementa(int);

int main()

{
	int exemplo;
	std::cout << "digite um valor" << std::endl;
	std::cin >> exemplo;
	std::cout << std::endl;
	int* ptr = &exemplo;
	Mais (&exemplo);
	incrementa(exemplo);



}

void Mais(int* ptr)

{
	*ptr = *ptr + 1;
	std::cout << "O resultado apos Mais : " << *ptr << std::endl;

}

void incrementa(int x)

{
	x = x + 1;
	std::cout << "O resultado apos incrementa : " << x << std::endl;

}
