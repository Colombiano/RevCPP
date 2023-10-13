#define _CRT_SECURE_NO_WARNINGS // sempre antes de <iostream> . Isso é para a strcpy funcionar no windows
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>

struct numero_complex
{
	float a, b;

};

void exibir(numero_complex);
void somar_num_complex(numero_complex, numero_complex);

int main ()

{

	numero_complex primeiro_num_complexo;
	std::cout << "Digite a parte real do primeiro numero complexo ";
	std::cin >> primeiro_num_complexo.a;
	std::cout << "Digite a parte complexa do primeiro numero complexo ";
	std::cin >> primeiro_num_complexo.b;
	exibir(primeiro_num_complexo);
	numero_complex segundo_num_complexo;
	std::cout << "Digite a parte real do segundo numero complexo";
	std::cin >> segundo_num_complexo.a;
	std::cout << "Digite a parte complexa do segundo numero complexo";
	std::cin >> segundo_num_complexo.b;
	exibir(segundo_num_complexo);
	std::cout << "A soma dos dois numeros é ";
	somar_num_complex(primeiro_num_complexo, segundo_num_complexo);


}

void exibir(numero_complex K)
{
		std::cout << "O numero complexo digitado eh "
		<< " "
		<< K.a
		<< std::showpos
		<< K.b
		<<std::noshowpos
		<< "i"
		<< std::endl;

}

void somar_num_complex(numero_complex num1, numero_complex num2)

{
	numero_complex novo_numero_complexo;
	novo_numero_complexo.a = num1.a + num2.a;
	novo_numero_complexo.b = num1.b + num2.b;
	std::cout << "O valor da soma dos dois numeros complexo eh"
		<< " "
		<< novo_numero_complexo.a
		<< std::showpos
		<< novo_numero_complexo.b
		<<std::noshowpos
		<< "i"
		<< std::endl;
}
