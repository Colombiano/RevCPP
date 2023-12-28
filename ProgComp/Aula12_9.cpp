// soma e subtração de números complexos utilizando o STD::CIN e STD::COUT e as funções internas OPERATOR+, OPERATOR- E OPERATOR<<

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

struct complexo
{
	float real;
	float imaginario;
};


complexo operator+(complexo, complexo);
complexo operator-(complexo, complexo);
std::ostream& operator<<(std::ostream&,complexo&);
complexo ler();

int main()

{

	std::cout << "Digite o primeiro numero complexo" << std::endl;
	complexo c1 = ler();
	std::cout << "Digite o segundo numero complexo" << std::endl;
	complexo c2 = ler();
	std::cout << c1;
	std::cout << c2;
	complexo c3 = c1 + c2;
	complexo c4 = c1 - c2;
	std::cout << "o valor da soma eh :";
	std::cout << c3;
	std::cout << std::endl;
	std::cout << "o valor da subtracao eh :";
	std::cout << c4;
	std::cout << std::endl;


}


complexo operator+(complexo a, complexo b)

{
	complexo c;
	c.real = a.real + b.real;
	c.imaginario = a.imaginario + b.imaginario;
	return c;

}

complexo operator-(complexo a, complexo b)

{
	complexo c;
	c.real = a.real - b.real;
	c.imaginario = a.imaginario - b.imaginario;
	return c;

}

std::ostream& operator<<(std::ostream& os,complexo &d)

{
	os << d.real;
	os << std::showpos;
	os << d.imaginario;
	os << std::noshowpos;
	os << "i" << std::endl;
	return os;
}

complexo ler()
{
	complexo leitura;
	std::cin >> leitura.real;
	std::cin >> leitura.imaginario;
	std::cin.get();
	return leitura;


}
