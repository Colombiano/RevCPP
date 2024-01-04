// Ponteiros Exercicio de revisao 02 


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

int main ()


{
	float torque[10] = { 2.5, 8.1, 9.2, 5.7, 9.6, 6.3, 8.0, 5.4, 4.9 };
	float* ptr = &torque[0];
	std::cout << "Primeiro: " << *ptr << std::endl;
	float* ptr1 = &torque[8];
	std::cout << "Ultimo : " << *ptr1;


}
