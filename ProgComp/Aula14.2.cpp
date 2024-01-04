// Ponteiros Parte 02 (Ponteiros, Registros, Strings e Funções)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>


struct casa

{

	double valor_aluguel;
	char nome_bairro[20];
	int numero_apartamento;

};

void modificar(casa* ptr); // usando funcao cujo argumento é um ponteiro 
                          // eu evito copiar dados e tambem consigo 
                         //acessar os dados do endereço de memoria
                        // ao qual o ponteiro do argumento aponta

int main()

{


	casa saboeiro;
	saboeiro = { 320.12,"Saboeiro de Cima", 850 };
	//casa* ptr;
	casa* ptr = &saboeiro;
	std::cout << ptr->nome_bairro; // Operador "->" é como acesso o conteúdo armazenado
	std::cout << std::endl;
	std::cout << ptr->numero_apartamento;
	std::cout << std::endl;
	std::cout << ptr->valor_aluguel;
	std::cout << std::endl;
	modificar(&saboeiro);
	std::cout << saboeiro.numero_apartamento;
	std::cout << std::endl;
	std::cout << saboeiro.nome_bairro;
	std::cout << std::endl;
	casa apartamento[15];
	apartamento[0] = { 430.15, "Ladeira da Preguica", 123 };
	casa* ptr1 = &apartamento[0];
	std::cout << ptr1->nome_bairro;
	std::cout << std::endl;
	std::cout << ptr1->numero_apartamento;
	std::cout << std::endl;
	std::cout << ptr1->valor_aluguel;
	std::cout << std::endl;
	char*ptr2 = &apartamento[0].nome_bairro[0];
	*ptr2 = 'C';
	std::cout << apartamento[0].nome_bairro;
	// *ptr->valor_aluguel = *ptr->valor_aluguel + 300.23;


}

void modificar(casa* ptr)

{

	ptr->numero_apartamento = 15;
	// ptr->nome_bairro = "Pituba";
	ptr->nome_bairro[0] = 'C'; // nao consigo modificar a string inteiramente e sim char por char
	ptr->nome_bairro[1] = 'a';
	ptr->nome_bairro[2] = 'b';
	ptr->nome_bairro[3] = 'u';
	ptr->nome_bairro[4] = 'l';
	ptr->nome_bairro[5] = 'a';
	ptr->nome_bairro[6] = '\0';



}
