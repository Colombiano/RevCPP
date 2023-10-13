// trabalhando os registros como argumento de funcoes

#define __CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

struct loja
{
  char nome_loja[25];
	unsigned quantidade_funcionarios;
	float lucro_liquido_vendas;
};

void exibir (loja); // veja que a função teve seu protótipo criado depois da definição do novo de tipo de variavel (registro)

int main ()
{

  loja A = { "Piedade", 15, 500000 };
	loja B = { "Lapa", 32, 1500000 };
  exibir (A);
}


void exibir (loja X)
{
 //std::cout <<X.nome_loja << " " <<X.quantidade_funcionarios << " " <<X.lucro_liquido_vendas <<std:endl;
  std::cout << "A loja " << X.nome_loja << " " <<"possui " << X.quantidade_funcionarios << " funcionarios " <<"e tem um lucro mensal de R$ " << X.lucro_liquido_vendas << " reais" << std::endl;

}
