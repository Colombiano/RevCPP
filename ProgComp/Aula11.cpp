/* Aula - 11

Strings são todos os vetores de caractere cujo último elemento é '\0'.

char nomes [6] = {'m','a','r','i','a','\0'}; // é um string
char nomes [5] = {'m','a','r','i','a'}; // não é um string, e sim um vetor de caractere.

Eu posso incializar uma string desse modo ou usando uma constante string:

char nomes [6] = "maria";// fica implícito a inclusão do caractere "\0", que neste caso irá ocupar as duas últimas posições do string.
char casas [] = "apartamento"; // aqui o compilador vai contar quantos caracteres será o string casas. Teremos um string de 12 carac-
//teres (11 referente a "apartamento" + 1 caractere referente '\0'). 

// Também posso ter o caso:

char nomes_nomes [10] = {"maria"}; 

// Neste caso os 05 caracteres restantes, após o último "a" de Maria seriam todos '\0'

*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <string>
int main()

{

	char nomes[10] = { "Maria" };
	char nomeS[6] = { 'm','a','r','i','o','\0' };
	char nomezinho[6] = { 'm','a','r','i','a','s' };
	char nomezao[] = { "cabeca de tijolo" };
	char nome_pergunta[15];
	char nome_composto[80];
	std::cout << nomes[0] << std::endl;
	std::cout << nomes << std::endl;
	std::cout << nomes[5] << std::endl;
	std::cout << nomeS << std::endl;
	std::cout << nomezao << std::endl;
	
  std::cout << nomezinho << std::endl; // aqui teremos um vetor de caractere usando cout e apresentado erro
	
  std::cout << strlen(nomezao) << std::endl; // conta o comprimento da string, sem incluir o '\0'
	
  std::cout << sizeof(nomezao) << std::endl; // diz o tamanho da string, incluido o '\0'
	std::cout << "Digite o seu nome" << std::endl;
	
  std::cin >> nome_pergunta; // cin só consegue ler tudo antes de um espaço, 
	//tabulação ou enter. Quando faz isso ele acrescenta um '\0' no final do 
	// buffer do teclado. Nomes compostos ele não consegue ler.
	
  std::cin.get(); // descartar o '\0' armanezanado no buffer do teclado do cin acima 
	// e que não foi extraido no processo de passar o que foi digitado para a memória
	// isso evitar que o cin.getline abaixo do desse cin dê problema. Toda vez que 
	// tivermos um cin.getline após um cin temos que fazer isso
	
  std::cout << "O seu nome eh : " << nome_pergunta << std::endl;
	std::cout << "Digite o seu nome composto" << std::endl;
	
  std::cin.getline(nome_composto, 80); // eu consigo ler caracteres e também os espaços
	// é bom para que eu possa ler nomes compostos, nomes espaçados, etc.
	
  std::cout << "O seu nome eh : " << nome_composto << std::endl;
	std::strcpy(nome_pergunta, nome_composto); 
  
  // copiar uma string para outra. Strcpy
	// funciona tendo a string de destino e depois, após a virgula a string de origem.
	// Ter atenção porque ele não faz a verificação se os strings possuem paridade de tamanhos
	
  std::cout << "O seu nome agora eh : " << nome_pergunta << std::endl;
	std::cout << "Mudei de ideia e seu nome agora mudou novamente" << std::endl;
	std::strcpy(nome_pergunta, "Monica Saes"); // Outra forma de atribuir caracteres
	// para string já definido
	
  std::cout << "Seu nome agora eh : " << nome_pergunta << std::endl;
	
  // Poderia também usar o tipo string, definido em c++98. É do paradigma OO
	// O bom dele é que na hora de atribuir, de um string para outro, não preciso de
	// artifícios como a strcpy.
	
  std::string nome_casa = { "Apartamento" };
	std::cout <<" O tipo de sua casa eh : " << nome_casa << std::endl;
	std::string nome_casa_nova = { "Chale" };
	
  nome_casa = nome_casa_nova; // Atribuir, de um string para outro
	std::cout << "O seu novo tipo de casa eh : " << nome_casa << std::endl;

}
