// Ponteiros Exercicio de revisao 01 


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

int main()

{

	double litros;
	litros = 3.4;
	double* ptr = &litros;
	std::cout << "O valor de litros eh " << *ptr << std::endl;



}
