// Alocação dinâmica de memória  - Parte 02

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

int main()

{

	// tenho que ter cuidado para não realizar "delete" duplo  
	// ou mesmo deletar um "new" que é compartilhado  
	// entre funções. Não podemos usar o "delete"  
	// para liberar memória criada por alocação automática. 
	
	// Não usamos alocação dinâmica para substituir a 
	// alocação automática e sim para criar vetores 
	// dinâmicos e vetores dinâmicos de registro. 
	
	
	int * vet = new int [20]; // Aqui é a declaração de um vetor dinâmico
	delete [] vet;
	// eu guardo no ponteiro vet o endereço do 
	// primeiro elemento do vetor.Esse ponteiro também 
	// recebe o rotulo do vetor dinâmico.
						  
	std::cout << "Digite o tamanho do vetor: " << std::endl;
	int tamanho;
	std::cin >> tamanho;
	int* vet1 = new int[tamanho]; // neste caso, definimos o tamanho do 
	// durante a execução do programa. Contudo, 
	// depois de criado o vetor não muda de tamanho.
	
	delete[] vet1;

	int * vet2 = new int [5];

	vet2[0] = 15;
	vet2[1] = 5;
	std::cout << *vet2; // O resulto será 15 
	// Neste caso, como o ponteiro memoriza o endereço
	// do primeiro vetor, usando o operador de indireção  
	// eu posso pegar o valor armazenado no endereço.
	

	std::cout << std::endl;
	std::cout << *(vet2 +1); // O resulto será 5  
	// Eu posso usar essa notação de ponteiro, neste caso 
	// Somando +1 à posição de *vet2, que no 
	// caso é vet2[0], logo resultando em vet2[1]

	std::cout << std::endl;
	std::cout << vet2[1]; // O resulto será 5,
	// provando que *(vet2 +1) = vet2[1]
	// quando faço vet2 = vet2 + 1, eu estou na verdade 
	// somando, por ser um vetor do tipo inteiro 4 bytes
	// a vet2, fazendo com que ele passe a armazenar a
	// próxima posição subsequente a vet2 = vet2[0]
	// ou seja, vet2[1]. 

	// Com isso vemos uma curiosidade:
	// A notação de colchete é apenas uma forma 
	// de facilitar o uso do operador indireção.


	int* pvet = new int;
	pvet[0] = 74;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << *pvet;
	delete pvet;

	// Posso também fazer o mesmo no sentido
	// contrário, usando a notação de ponteiro
	// para um vetor estático.

	int pvet1[10];
	std::cout << &pvet1;
	std::cout << std::endl;
	*pvet1 = 12; // A mesma coisa de fazer pvet1[0] = 12;
	*(pvet1 + 1) = 13; // a mesma que fazer pvet1[2] = 13;
	std::cout << &pvet1; // provando que o nome de um vetor estático é um endereço 
	 // no caso, a primeira posição do vetor estático.
	std::cout << std::endl;
	std::cout << *(pvet1 + 0) << std::endl; // a mesma coisa que std::cout <<pvet1[0];
	
	// Ao fazer essa aritmética eu sempre devo
	// voltar a posição original antes de fazer
	// o "delete". Com isso vemos que os endereços
	// armazenados nos ponteiros podem ser somados
	// e subtraídos, dependendo do tipo ao qual
	// ele aponta.
	
	// 1 int = 4 bytes; 1 short = 2 bytes; 1 char = 1 byte

	

	delete[] vet2;

}
