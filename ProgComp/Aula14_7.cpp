// Ponteiros Exercicio de fixação 02

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

int main()

{
	char varivel = 'A';
	std::cout << varivel << std::endl;
	char* ptr = &varivel;
	*ptr = 'B';
	std::cout << *ptr;


}
