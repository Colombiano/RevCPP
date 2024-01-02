// LAB12 EXERCICIO DE APRENDIZAGEM 01

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

struct conta_bancaria
{
	char nome_cliente[30];
	float saldo;
};

void mostrar_conta(conta_bancaria);
void manipular_conta(conta_bancaria);
int main ()

{

	conta_bancaria variavel;
	variavel.saldo = 0;
	std::cout << "Gentileza digitar os dados da conta" << std::endl;
	std::cin >> variavel.nome_cliente;
	std::cin >> variavel.saldo;
	mostrar_conta(variavel);
	manipular_conta(variavel);


}

void mostrar_conta (conta_bancaria x)
{
	std::cout <<"O nome do cliente eh: " << x.nome_cliente << std::endl;
	std::cout << "O saldo da conta eh: R$" << x.saldo << std::endl;

}

void manipular_conta(conta_bancaria y)

{
	float a,b;
	a = y.saldo;
	std::cout << "Digite quantos reais voce deseja depositar quantos reais na sua conta ?" << std::endl;
	std::cin >> b;
	y.saldo = a + b;
	mostrar_conta(y);

}
