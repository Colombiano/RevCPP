// Ponteiros Exercicio de fixação 01

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

int main()

{

	int x;
	int* p = &x;
	int* q = (int*)p;
	x = 10;
	std::cout << *q;


}
