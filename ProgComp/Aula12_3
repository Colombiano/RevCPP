#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

struct apartamento

{
	char nome_predio[50];
	unsigned numero_predio;
	unsigned numero_apartamento;
	float valor_apartamento;
};

void exibir_dados_apartamento(apartamento);
apartamento receber_dados();

int main()

{
	apartamento casa_patricia = { "Morada_Cabula",12,805,350000 };
	exibir_dados_apartamento(casa_patricia);
	apartamento predio_Garibaldi = receber_dados();
  exibir_dados_apartamento(predio_Garibaldi);
}

void exibir_dados_apartamento(apartamento X)

{
	std::cout << "O nome do imovel eh " 
            << X.nome_predio 
            << " cujo numero eh " 
            << X.numero_predio 
            << " tendo como numero da unidade " 
            << X.numero_apartamento 
            << " e o valor de mercado eh, em reais R$ " 
            << X.valor_apartamento 
            << std::endl;

}


apartamento receber_dados()

{
	apartamento Y;
	char nome_imovel[50];
	std::cout << "Digite o nome do imovel" << std::endl;
	std::cin.getline(nome_imovel, 50);
	strcpy(Y.nome_predio, nome_imovel);
	std::cout << "Digite o numero do predio" << std::endl;
	std::cin >> Y.numero_predio;
	std::cout << "Digite o numero do apartamento" << std::endl;
	std::cin >> Y.numero_apartamento;
	std::cout << "Digite o valor do apartamento" << std::endl;
	std::cin >> Y.valor_apartamento;
	//exibir_dados_apartamento(Y);
	return Y;
}
