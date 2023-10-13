// eu poderia também criar o novo tipo de variavel, incializando-a.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

struct loja
{
  char nome_loja[25];
  unsigned quantidade_funcionarios;
  float lucro_liquido_vendas;
};

int main ()

{

loja A = {"Piedade", 15, 500000};
loja B = {"Lapa", 32, 1500000.3};
loja C = {'Saboeiro, 5, 23000};

unsigned funcionarios_demitido = 8;
A.quantidade_funcionarios = A.quantidade_funcionarios - funcionarios_demitido;

std::cout << "A loja " <<A.nome_loja << " possui " <<A.quantidade_funcionarios<< " funcionarios" <<std::endl;
std::cout << "A loja " <<B.nome_loja << " possui " <<B.quantidade_funcionarios<< " funcionarios" <<std::endl;
std::cout << "A loja " <<C.nome_loja << " possui " <<C.quantidade_funcionarios<< " funcionarios" <<std::endl;
std::cout <<"Juntas possuem um faturamento mensal de R$" <<A.lucro_liquido_vendas + B.lucro_liquido_vendas + C.lucro_liquido_vendas <<std::endl;

}
