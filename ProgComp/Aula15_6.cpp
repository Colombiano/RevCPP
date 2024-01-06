// Alocação de Memória - Exercicio de Fixação 01

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

int main()

{
	std::cout << "Digite o numero de alunos da turma " << std::endl;
	int numero_alunos;
	std::cin >> numero_alunos;

	float* ptr = new float[numero_alunos];

	std::cout << "Digite a nota do primeiro aluno" << std::endl;
	std::cin >> ptr[0];
	std::cout << "Digite a nota do segundo aluno" << std::endl;
	std::cin >> ptr[1];
	std::cout << "As notas digitadas foram " << ptr[0] << " e " << ptr[1] << std::endl;

	delete[] ptr;

}
