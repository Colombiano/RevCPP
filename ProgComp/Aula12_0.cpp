// Registro define um novo tipo de dado, no qual dentro dele podemos ter tanto os tipos basicos 
// ou tambem vetores ou mesmo outros registros criados. Tambem podem ser argumento de funções

// Tudo isso através de um unico identificador.
// A declaraçao de um registro e feito através da palavra chave struct, seguida do nome registro (identificador) 
// seguido de chaves onde iremos colocar os membros do registro.

/* struct casa
 {
	char nome_da_casa[20];
	unsigned numero_da_casa;
	float preço_casa;

 };*/

// Acima eu apenas fiz a definiçao um novo tipo de dado chamado cabana. Ainda nao foi criada variavel
// que faço atrraves do seguinte procedimento :

// casa cabana;

// eu criei dessa forma uma variavel do tipo casa que se chama cabana.

// caso eu queira acessar ou atribuir algo na variavel cabana, eu teria que usar o operador membro "."
// sem esquecer que ao lidar com vetores eu tenho que usar as funçoes strcpy

// cabana.preço_casa = 150000;
//cabana.numero_da_casa = 23;
//strcpy (nome_da_casa, "Casa Salvador");

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

struct casa
{
	char nome_da_casa[20];
	unsigned numero_da_casa;
	float preço_casa;
};

int main()

{
	casa cabana;
	cabana.preço_casa = 150000;
	cabana.numero_da_casa = 23;
	strcpy(cabana.nome_da_casa, "Casa Salvador");
	std::cout << "O nome da cabana eh " << cabana.nome_da_casa << " que fica no numero "<< cabana.numero_da_casa << " e custa R$ "<< cabana.preço_casa << " reais" << std::endl;
}
