#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

// operações com números complexos

struct complexo
{
	float real;
	float imaginario;
};


complexo soma(complexo, complexo);
complexo subtracao(complexo, complexo);
void exibir(complexo);

int main()

{

	complexo c1 = { 1,2 };
	complexo c2 = { 3,4 };
	exibir (c1);
	exibir(c2);
	complexo c3 = soma(c1, c2);
	complexo c4 = subtracao(c1, c2);
	std::cout << "o valor da soma eh :";
	exibir(c3);
	std::cout << std::endl;
	std::cout << "o valor da subtracao eh :";
	exibir(c4);
	std::cout << std::endl;
	

}


complexo soma(complexo a, complexo b)

{
	complexo c;
	c.real = a.real + b.real;
	c.imaginario = a.imaginario + b.imaginario;
	return c;

}

complexo subtracao(complexo a, complexo b)

{
	complexo c;
	c.real = a.real - b.real;
	c.imaginario = a.imaginario - b.imaginario;
	return c;

}

void exibir(complexo d)

{
	std::cout << d.real;
	std::cout << std::showpos;
	std::cout << d.imaginario;
	std::cout << std::noshowpos;
	std::cout << "i" << std::endl;

}
