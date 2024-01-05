// Alocação dinâmica de memória

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

int* GetNum(char);


int main ()


{
	// Alocação dinâmica: 
	
	    // Toda vez que declaro uma variável, dentro de uma função 
	   //eu automaticamente eu aloco memória
		
	int ver = 6;                           // declaração e atribuição
	std::cout << &ver;                    // e aqui eu vejo o endereço dessa memória
	
	
	int* ptr = new int;                 // Aqui é a forma da alocação dinâmica, que eu realizo 
	                                   // através operador new, que solicita ao sistema 
	                                  // um endereço de memoria não rotulado. Essa quantidade
					 // de memória tem relação com o tipo de dado escolhido
					// pelo "new". Esse endereço é guardado num ponteiro
				       //e com esse ponteiro eu posso acessar e modificar 
				      // os dados que estão neste endereço.
						
				    // Do lado esquerdo eu defino uma variável, do tipo 
				   // ponteiro compatível com o tipo de dado 
				  // requisitado/apontado. 
			         // Do lado direito eu uso new e o tipo de dado, que é
	                        // quem faz a reserva de memória de fato.

	delete ptr;           // Toda vez que faço uso de alocação dinâmica de 
	                     // memória a responsabilidade de liberar a memória, 
			    // retornando-a para o sistema, é o programador, 
	                   // que faz isso com o uso do "delete" sobre o ponteiro. 
			  // Quando fazemos isso nós liberamos a memória mas, 
			 // não destruímos o ponteiro, que pode ser reutilizado.

	ptr = new int;
       *ptr = 40;
	delete ptr;   // cada "new" deve ter usado com um delete para evitar 
	             // vazamento de memória, que nada mais é do que espaços 
		    // de memória que eu não consigo mais desalocar porque o 
		   // ponteiro original com a informação que guardava o
		  // endereço e agora aponta para outro endereço e aquele, 
	         // ninguém sabe mais qual é. Erro muito comum quando acontece
	        // muitas vezes até que falte memória no sistema.



	int* ptr2 = GetNum('A'); // Não devemos fazer esse tipo de construção, 
	std::cout << ptr2;      // porque ela tende a fazer com que esqueçamos o uso do delete
	delete ptr2;           // Por isso usamos o "delete" aqui. Em OO isso é automatizado.
	                      //  A dica é: A função onde aparece o new é a mesma onde deve ocorrer o delete
}

int* GetNum(char x)

{

	int* ptr1 = new int{ x };  // inicializando o ponteiro, alocando memoria 
	                          // e também atribuindo com o valor x,que é um inteiro,
				 // o conteúdo do endereço de memória apontado 
	return ptr1;


}
