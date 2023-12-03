#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

struct animais

{
	char nome[50];
	float peso;
	unsigned altura;
	float quantidade_de_animais;

};


int main()

{

	animais parque_nacional[10] = //inicialização de um vetor de registros
	
  {
		{"panteras",300,180,400},{"macacos",80,120,1200}

	};

	std::cout << "O parque possui atualmente "
		      << parque_nacional[0].quantidade_de_animais + parque_nacional[1].quantidade_de_animais
		      << " de individuos, basicamente "
		      << parque_nacional[0].nome << " e " << parque_nacional[1].nome
		      << std::endl;

}
