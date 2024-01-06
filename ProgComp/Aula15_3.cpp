// Alocação dinâmica de memória  - Parte 03

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

struct ExemploPrimeiro
{
	char nome[15];
	long long numero_cpf;
	char nome_bairro[30];
	float salario_mensal;

};

int main()

{
	// Eu posso criar com "new" registros dinâmicos
	// Usando, por exemplo, a notação de declaração
	// ExemploPrimeiro* ptr = new ExemploPrimeiro;
	// Abaixo uma notação onde declaro e atribuição

	ExemploPrimeiro* ptr = new ExemploPrimeiro{ "Edson", 12324034567, "Pituba", 3500.12 };

	std::cout << ptr->nome; // Com ponteiro eu uso " -> "
	std::cout << std::endl;
	std::cout << (*ptr).nome; // Com o registro, eu uso o operado membro ".", 
	// que é igual a usar ptr->nome;
	std::cout << std::endl;

	ExemploPrimeiro* ptr1 = new ExemploPrimeiro;

	std::cout << "Digite os dados do cliente" << std::endl;
	std::cin >> ptr1->nome >> ptr1->numero_cpf >> ptr1->nome_bairro >> ptr1->salario_mensal;
	std::cout << "O nome do cliente eh " << ptr1->nome << " e ele ganha mensalmente R$ " << ptr1->salario_mensal;
	std::cout << std::endl;
	ptr1->salario_mensal = 5000.34;
	strcpy(ptr1->nome, "Henrique"); // Lembrando como mudar o vetor de caractere
	std::cout << "O nome do cliente eh " << ptr1->nome << " e ele ganha mensalmente R$ " << ptr1->salario_mensal;

	delete ptr, ptr1;

	// Também posso criar com o "new" Vetores dinâmicos de registro
	// através da seguinte declaração:

	ExemploPrimeiro* ptr2 = new ExemploPrimeiro[10];

	// Eu tenho neste caso 10 vetores dinâmicos tendo como tipo
	// o registro "ExemploPrimeiro.
	// Poderia também declarar e já inicializar o vetor dinâmico:

	ExemploPrimeiro* ptr3 = new ExemploPrimeiro[10]{ {"Andre", 12324034567, "Barra", 3500.12},{"Pedro", 1567638593, "Brotas", 2500.34} };

	std::cout << ptr3[0].nome << " eh o nome do nosso primeiro cliente" << std::endl;
	std::cout << ptr3->nome << " eh o nome do nosso cliente" << std::endl; // usando ponteiro
	std::cout << (ptr3 + 1) ->nome << " eh o nome do nosso segundo cliente" << std::endl; // mesma coisa que ptr3 [1].nome

	

	delete [] ptr2; // "delete" de vetor dinâmico deve usar colchete
	delete [] ptr3;
