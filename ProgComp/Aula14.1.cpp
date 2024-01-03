// Ponteiros

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>



int main()


{

	// Todo nome de variável está associado a um endereço de memória,
  

	int total;      // declarada a variável de nome total. Aqui é reservado um local, 
	               // com um determinado endereço, com tamanho de 4 bytes e que também diz
	              // que alí existirá um int.
	total = 325; // atribuida um valor a variável

	// o operador de endereço "&" fornece a localização desse endereço de memória

	std::cout << total << std::endl;
	std::cout << &total; // aqui eu vejo a localização do endereço da variavel total
	std::cout << std::endl;
	// um ponteiro é um tipo especial que armazena endereços de memória.
	// Ele mesmo, apesar de guardar um endereço de memória, por ser uma variável 
	// possui também um endereço

	// a declaração de um ponteiro é feito definindo 
	// do lado esquerdo o tipo do elemento apontado
	// e na parte direita o nome do ponteiro
	// entre os dois lado eu uso o operador de indireção:

	// char * ptr;

	// eu posso declarar e atribuir um ponteio ao mesmo tempo. Caso meu programa
	// tivesse uma variavel do tipo char chamada casa e quissese que meu ponteiro
	// apontasse para essa variável, eu faria a seguinte instrução:

	// char * ptr = &casa;



	int * ptr = &total;  // o endereço da variável total foi armazenada no ponteiro ptr
	                   // Aqui o ponteiro foi declarado. 
                      // eu digo dessa forma que o ponteiro ptr aponta para "total" 
                     // ou também que ele aponta para o conteúdo de "total". 
	                // Neste caso, é um ponteiro para um int.

	std::cout << &ptr ; // aqui é como verifico o endereço do meu ponteiro
	std::cout << std::endl;
	std::cout << ptr; // aqui é como mostro o conteúdo (endereço) armazenado no meu ponteiro
	std::cout << std::endl;
	// caso eu queira acessar o conteúdo do endereço apontado pelo ponteiro
	// eu uso o operador indireção:

	std::cout << *ptr;
	std::cout << std::endl;
	// caso quisesse alterar o valor do conteúdo de total usando o ponteiro, poderia fazer assim:

	*ptr = *ptr + 5;
	std::cout << total;

	int *ptr1, *ptr2; // declarei dois ponteiros que estarão apontando para variáveis do tipo int

}
