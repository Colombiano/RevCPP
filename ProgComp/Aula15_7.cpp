// Alocação de Memória - Exercicio de Fixação 02

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

struct balao
{
	float diametro;
	char marca[20];
	int modelo;

};

void exibir_registro(balao* ptr);

int main()

{

	balao* ptr = new balao;
	std::cout << "Digite os valores de balao - diametro, marca e modelo";
	std::cout << std::endl;
	std::cin >> ptr->diametro >> ptr->marca >> ptr[0].modelo;
	exibir_registro(ptr);
}

void exibir_registro(balao* ptr)
{
	std::cout << "Os valores de balao sao : " << std::endl; 
	std::cout << "Diametro - " << ptr[0].diametro;
	std::cout << std::endl;
	std::cout << "Marca - " << ptr[0].marca;
	std::cout << std::endl;
	std::cout << "Modelo - " << ptr[0].modelo;
	std::cout << std::endl;

}
