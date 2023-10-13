#include <iostream>

int main()
{
	char nomes[6] = { 'm','a','r','i','a','\0' };
	char nomezinho[6] = { 'm','a','r','i','a','s'};
	std::cout << nomes << std::endl;
	std::cout << nomezinho;

}

/* #include <iostream>

int main()

{
	const int TamanhoVetor = 30;
	char nome[TamanhoVetor];
	char TipoComida[TamanhoVetor];
	std::cout << "Escreva seu nome completo: " << std::endl;
	std::cin.getline(nome, TamanhoVetor);
	std::cout << "Escreva o nome do tipo de comida favorita: " << std::endl;
	std::cin.getline(TipoComida, TamanhoVetor);
	std::cout << " Voce, " << nome << ", e alguem que gosta de comer " << TipoComida << std::endl;

}*/


/* #include <iostream>

int main()

{
	const int TamanhoVetor = 30;
	char nome[TamanhoVetor];
	char TipoComida[TamanhoVetor];
	std::cout << "Escreva seu nome completo: " << std::endl;
	std::cin.getline(nome, TamanhoVetor);
	std::cout << "Escreva sua idade: " << std::endl;
	int idade;
	std::cin >> idade;
	std::cin.get();
	std::cout << "Escreva o nome do tipo de comida favorita: " << std::endl;
	std::cin.getline(TipoComida, TamanhoVetor);
	std::cout << " Voce, " << nome << "e alguem que gosta de comer " << TipoComida << " apesar de ter apenas " <<idade<< " anos" <<std::endl;

}*/
