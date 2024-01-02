// LAB12 EXERCICIO DE APRENDIZAGEM 02

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

struct Palavra
{
	char trad_por[20];
	char trad_ing[20];
	char trad_esp[20];
};

void mostrar_dic(Palavra);

int main()

{
	Palavra dicionario[10]{ {"casa ","home "," casa"}, {" avo"," grandpapa"," abuelo"} };
	
	std::cout << "Gentileza digite a nova palavra" << std::endl;
	std::cin >> dicionario[2].trad_por;
	std::cin >> dicionario[2].trad_ing;
	std::cin >> dicionario[2].trad_esp;
	mostrar_dic(dicionario[0]);
	mostrar_dic(dicionario[1]);
	mostrar_dic(dicionario[2]);

}


void mostrar_dic(Palavra x)
{
	std::cout << "O dicionario eh: " << " " << x.trad_por << " " << x.trad_ing << " " <<x.trad_esp << std::endl;

}
