/*#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v{ 1,2,3 };

	// Modern C++:
	for (auto& num : v)
	{
		std::cout << num;
	}
*/

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

 /*
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
	std::strcpy(nome_pergunta, nome_composto); // copiar uma string para outra. Strcpy
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


}*/






 /* #include <iostream>

int main()
{
	char nomes[6] = { 'm','a','r','i','a','\0' };
	char nomezinho[6] = { 'm','a','r','i','a','s'};
	std::cout << nomes << std::endl;
	std::cout << nomezinho;

}*/

/* #include <iostream>

int main()

{
	const int TamanhoVetor = 30;
	char nome[TamanhoVetor];
	char TipoComida[TamanhoVetor];
	std::cout << "Escreva seu nome completo: " << std::endl;
	std::cin.getline(nome, TamanhoVetor);
	std::cout << "Escreva o nome do tipo de comida favorita: " << std::endl;
	std::cin.getline(TipoComida, TamanhoVetor);
	std::cout << " Voce, " << nome << ", e alguem que gosta de comer " << TipoComida << std::endl;

}*/

/* #include <iostream>

int main()

{
	const int TamanhoVetor = 30;
	char nome[TamanhoVetor];
	char TipoComida[TamanhoVetor];
	std::cout << "Escreva seu nome completo: " << std::endl;
	std::cin.getline(nome, TamanhoVetor);
	std::cout << "Escreva sua idade: " << std::endl;
	int idade;
	std::cin >> idade;
	std::cin.get();
	std::cout << "Escreva o nome do tipo de comida favorita: " << std::endl;
	std::cin.getline(TipoComida, TamanhoVetor);
	std::cout << " Voce, " << nome << "e alguem que gosta de comer " << TipoComida << " apesar de ter apenas " <<idade<< " anos" <<std::endl;

}*/





#define _CRT_SECURE_NO_WARNINGS // sempre antes de <iostream> . Isso é para a strcpy funcionar no windows
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>


//double media(double a, double b);
//void sorria(void);
//void InformaHora(int, int);
//void CoversorTemperatura(float);
//void MediaHarmonica(float, float);
//float AumentaSalario(float);
// float iMC(float, float);
// float moduloVetor(int, int);
//void mercadinho(float []);
//int soma_Elemento_Vetor(int[]);
//float media_sistema_antigo(float[], int []);
//float media_sistema_novo(float[]);
//double calculo(double[]);
//void retorna_caractere(char[1000]);


/*struct numero_complex
{
	float a, b;

};

void exibir(numero_complex);
void somar_num_complex(numero_complex, numero_complex);

int main ()

{

	numero_complex primeiro_num_complexo;
	std::cout << "Digite a parte real do primeiro numero complexo ";
	std::cin >> primeiro_num_complexo.a;
	std::cout << "Digite a parte complexa do primeiro numero complexo ";
	std::cin >> primeiro_num_complexo.b;
	exibir(primeiro_num_complexo);
	numero_complex segundo_num_complexo;
	std::cout << "Digite a parte real do segundo numero complexo";
	std::cin >> segundo_num_complexo.a;
	std::cout << "Digite a parte complexa do segundo numero complexo";
	std::cin >> segundo_num_complexo.b;
	exibir(segundo_num_complexo);
	std::cout << "A soma dos dois numeros é ";
	somar_num_complex(primeiro_num_complexo, segundo_num_complexo);


}

void exibir(numero_complex K)
{
		std::cout << "O numero complexo digitado eh "
		<< " "
		<< K.a
		<< std::showpos
		<< K.b
		<<std::noshowpos
		<< "i"
		<< std::endl;

}

void somar_num_complex(numero_complex num1, numero_complex num2)

{
	numero_complex novo_numero_complexo;
	novo_numero_complexo.a = num1.a + num2.a;
	novo_numero_complexo.b = num1.b + num2.b;
	std::cout << "O valor da soma dos dois numeros complexo eh"
		<< " "
		<< novo_numero_complexo.a
		<< std::showpos
		<< novo_numero_complexo.b
		<<std::noshowpos
		<< "i"
		<< std::endl;
}*/

/*

 struct casa
{
	int numero_da_casa[10];
	float portas;
	char modelo_de_casas[20];
};


void maximizar(casa);
casa criar_novo_imovel();

int main()

{

	casa primeira;
	std::cout << "Digite a quantidade de portas \n";
	std::cin >> primeira.portas;
	std::cout << "\n";
	std::cout << "Digite o modelo da casa \n";
	std::cin >> primeira.modelo_de_casas;
	std::cout << "\n";
	std::cout << "Digite o numero da casa \n";
	int numero_casa_inicial;
	std::cin >> numero_casa_inicial;
	primeira.numero_da_casa[0] = numero_casa_inicial;
	maximizar(primeira);
	std::cout << " \n";
	std::cout << " \n";
	std::cout << " \n";
	std::cout << "Agora vamos criar um novo imovel \n";
	casa nova = criar_novo_imovel();
	std::cout << "Os dados da casa nova sao: " << nova.modelo_de_casas << " " << nova.numero_da_casa[0] << " " << nova.portas << std::endl;



}

void maximizar(casa Y)

{

	float abrir = Y.portas * 10;
	char fechar[15] = "Apartamento";
	strcpy(Y.modelo_de_casas, fechar);
	Y.numero_da_casa[0] = Y.numero_da_casa[0] + 1;
	std::cout << "A quantidade de portas eh " << abrir << std::endl;
	std::cout << "O modelo de casa eh " << Y.modelo_de_casas << std::endl;
	std::cout << "O numero da casa vizinha eh " << Y.numero_da_casa[0] << std::endl;

}

casa criar_novo_imovel()

{
	casa imovel_novo;
	std::cout << "Digite a quantidade de portas \n";
	std::cin >> imovel_novo.portas;
	std::cout << "\n";
	std::cout << "Digite o modelo da casa \n";
	std::cin >> imovel_novo.modelo_de_casas;
	std::cout << "\n";
	std::cout << "Digite o numero da casa \n";
	int numero_novo_casa;
	std::cin >> numero_novo_casa;
	imovel_novo.numero_da_casa[0] = numero_novo_casa;


	return imovel_novo;
}*/







/*struct jogador
{
	char nome[20];
	float salario;
	unsigned gols;
};

struct jogadoras
{
	char nome[40];
	float salario;
	unsigned gols;
};


int main ()

{

jogador zico;


zico.salario = 1000;
std::cout << zico.salario << std::endl;
strcpy(zico.nome, "Zico Galinho");
std::cout << zico.nome << std::endl;
std::cout << "Digite a quantidade de gols de Zico" << std::endl;
std::cin >> zico.gols;
std::cout << "Zico fez " <<zico.gols << " GOLS" << std::endl;

jogadoras marta = { "Marta Alagoana", 50000, 10000 }; // inicializei o registro de uma vez

std::cout << marta.gols << " ";
std::cout << marta.nome << " ";
std::cout << marta.salario << " ";

}*/








/* {
	std::cout << "Quais suas datas comemorativas preferidas ? \n";
	char data_01[250];
	std::cin.getline(data_01, 20);
	char data_02[20];
	std::cin.getline(data_02, 20);
	char data_03[20];
	std::cin.getline(data_03, 20);
	char data_checagem[20] = "natal";
	
	if (int comparacao_1 = strcmp(data_01, data_checagem) == 0)

	{
		
		std::strcat(data_01, ", ");
		std::strcat(data_01, data_02);
		std::strcat(data_01, " e ");
		std::strcat(data_01, data_03);
		std::strcat(data_01, " sao belas festas");
		std::puts(data_01);

		std::cout << "Natal tambem eh uma das minhas datas favoritas \n";

	}
	
	if (int comparacao_2 = strcmp(data_02, data_checagem) == 0)
	
	
	{

		std::strcat(data_01, ", ");
		std::strcat(data_01, data_02);
		std::strcat(data_01, " e ");
		std::strcat(data_01, data_03);
		std::strcat(data_01, " sao belas festas");
		std::puts(data_01);

		std::cout << "Natal tambem eh uma das minhas datas favoritas \n";
	}


	if (int comparacao_3 = strcmp(data_03, data_checagem) == 0)

	{

		std::strcat(data_01, ", ");
		std::strcat(data_01, data_02);
		std::strcat(data_01, " e ");
		std::strcat(data_01, data_03);
		std::strcat(data_01, " sao belas festas");
		std::puts(data_01);

		std::cout << "Natal tambem eh uma das minhas datas favoritas \n";
	}


	else
	
	{
		std::strcat(data_01, ", ");
		std::strcat(data_01, data_02);
		std::strcat(data_01, " e ");
		std::strcat(data_01, data_03);
		std::strcat(data_01, " sao belas festas");
		std::puts(data_01);

	}
} */





/* {
	std::cout << "Digite seu nome completo \n";
	char nome_completo[50];
	std::cin.getline(nome_completo, 50);
	std::cout << "Digite a data atual \n";
	char data_atual[10];
	std::cin.getline(data_atual, 10);
	//char concatenar[100];
	std::strcat(nome_completo, " esteve aqui em ");
	//std::strcat(concatenar, " esteve aqui em ");
	std::strcat(nome_completo, data_atual);
	std::puts(nome_completo);


}*/







/* {
	std::cout << "Digite um numero: \n";
	char primeiro_num[25];
	std::cin.getline (primeiro_num,25);
	std::cout << "Digite o segundo numero: \n";
	int segundo_num;
	std::cin >> segundo_num;
	int num_convert = std::atoi(primeiro_num); // converte uma string em inteiro
	std::cout << "A multiplicaçao entre o primeiro e o segundo numero eh = " << num_convert * segundo_num;


}*/






/*{
	std::cout << "Digite a senha " << std::endl;
	char senha_usuario[10];
	std::cin.getline(senha_usuario, 10);
	std::cout <<"\n";
	char senha_real[] = "alicate";
	if (int comparacao = strcmp(senha_usuario, senha_real) != 0)

		std::cout << "Senha incorreta";
	else
		std::cout << "Senha correta";

}*/




/* {
	std::cout << "Digite uma palavra" << std::endl;
	char palavra[1000];
	std::cin.getline(palavra, 1000);
	retorna_caractere(palavra);


}

void retorna_caractere(char Y[1000])
{
	int var = strlen(Y) - 1;
		
	char letra = Y[var];

	std::cout << "Em " << Y << " " << "a ultima letra eh " << letra << std::endl;
}*/






/*{
	char nome[] = "C++ Primer Plus";
	std::cout << strlen(nome) << std::endl; // vai mostrar 15
	std::cout << sizeof(nome) << std::endl; // vai mostrar 16 pois conta o '\0'


}*/






/*{
	std::cout << "Qual eh o seu nome? \n";
	char nome[60];
	std::cin.getline(nome, 60);
	std::cout << "Que conceito voce merece ? \n";
	char conceito;
	std::cin >> conceito;
	conceito = conceito + 1;
	std::cout << "Bom dia, " << nome << ". " << "Seu conceito eh " << conceito;


}*/





/* {
	char nome[10];
	std::cout << "Primeiro nome? \n";
	std::cin.getline(nome, 10);
	std::cout << "\n";
	std::cout << "Segundo nome ? \n";
	char segundo_nome[10];
	std::cin.getline(segundo_nome, 10);
	std::cout << "\n";
	std::cout << "Seja bem vido " << nome[0] << segundo_nome[0] << "!" << std::endl;

}*/





/*{
	char exemplo[5] = { 'L','U','I','Z','\0' };
	std::string exemplinho;
	char exemplo_1[6] = "Paulo";
	char exemplo_2[] = "Santana";
	char exemplo_3[] = "Meu nome eh "      "Luiz Paulo";
	std::cout << exemplo << std::endl;
	std::cout << exemplo_1 << std::endl;
	std::cout << exemplo_2 << std::endl;
	std::cout << exemplo_3 << std::endl;
	char exemplo_4[15] = {};
	std::cout << "Digite seu nome" << std::endl;
	std::cin.getline(exemplo_4, 15); //std::cin só consegue ler uma palavra e não frases com espaço
	std::cout << "Seu nome " << exemplo_4 << std::endl;
	char exemplo_6[8] = "Abelha";
	char exemplo_7[7];
	strcpy(exemplo_7, "peixe");
	std::cout << "O nome da variavel eh " << exemplo_7 << std::endl;
	strcpy(exemplo_7,exemplo_6);
	std::cout << "O nome da variavel eh " << exemplo_7 << std::endl;


}*/





/*{
	double vetA[3] = {};
	std::cout << "Digite os tres valores do vetor A " << std::endl;
	std::cin >> vetA[0];
	std::cin >> vetA[1];
	std::cin >> vetA[2];
	std::cout << "O resultado da expressao é " << calculo(vetA);

}

double calculo(double Y[3])

{

	return (Y[0] * Y[2]) / Y[1];

}*/ 




/* {

	int pesos_notas[3] = { 2,3, 4 };
	float notas_alunos[3] = {};
	std::cout << "Qual são as suas notas " << std::endl;
	std::cin >> notas_alunos[0];
	std::cin >> notas_alunos[1];
	std::cin >> notas_alunos[2];
	std::cout << "A média antiga eh " << media_sistema_antigo(notas_alunos, pesos_notas) << std::endl;
	std::cout << "A média nova eh " << media_sistema_novo(notas_alunos) << std::endl;
}

float media_sistema_antigo(float Y[3],int Z[3])

{
	return (Y[0] * Z[0] + Y[1] * Z[1] + Y[2] * Z[2]) / 9;

}

float media_sistema_novo(float Y[3])

{
	return (Y[0] + Y[1] + Y[2]) / 3;

}*/





/*{
	int vetor[5] = {};
	std::cout << "Digite 5 valores: " << std::endl;
	std::cin >> vetor[0];
	std::cin >> vetor[1];
	std::cin >> vetor[2];
	std::cin >> vetor[3];
	std::cin >> vetor[4];
	std::cout << "A soma do vetor e " << soma_Elemento_Vetor(vetor) << std::endl;
}

int soma_Elemento_Vetor(int Y[5])
{

	return Y[0] + Y[1] + Y[2] + Y[3] + Y[4];
}*/





/* {

	int vetA[5] = { 10,20,30,40,50 };
	int vetB[5] = { 10,20 };
	int vetC[5] = { 0,0,30 };
	std::cout << "Vetor A: " << vetA[0] <<" " << vetA[1] << " " << vetA[2] << " " << vetA[3] << " " << vetA[4] << std::endl;
	std::cout << "Vetor B: " << vetB[0] <<" " << vetB[1] << " " << vetB[2] << " " << vetB[3] << " " << vetB[4] << std::endl;
	std::cout << "Vetor C: " << vetC[0] <<" " << vetC[1] << " " << vetC[2] << " " << vetC[3] << " " << vetC[4] << std::endl;

}*/




/* {

	float vetor_tipo_mercadinho[3] = {1.50, 2.0,1 };
	std::cout << "Prezado Cliente," << std::endl;
    mercadinho(vetor_tipo_mercadinho);

}

void mercadinho(float Y[3])

{

	float vetor_quandidade_produto[3] = {};
	float resultado[3] = {};
	std::cout << "Digite a quantidade de quilos desejados:"<< std::endl;
	std::cin >> vetor_quandidade_produto[0];
	std::cin >> vetor_quandidade_produto[1];
	std::cin >> vetor_quandidade_produto[2];
	resultado[0] = Y[0] * vetor_quandidade_produto[0];
	resultado[1] = Y[1] * vetor_quandidade_produto[1];
	resultado[2] = Y[2] * vetor_quandidade_produto[2];
	std::cout << "Resumo das Compras " << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << "Alface        = R$" << resultado[0] << std::endl;
	std::cout << "Beterraba     = R$" << resultado[1] << std::endl;
	std::cout << "Cenoura       = R$" << resultado[2] << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << "Total         = R$" << resultado[0] + resultado[1] + resultado[2] << std::endl;


}*/



/* {

	int novo_vetor[3];

	novo_vetor[0] = novo_vetor[1] = novo_vetor[2] = 0;

	std::cout << "O indice 0 é " << novo_vetor[0] << "O indice 1 é " << novo_vetor[1] << "O indice 2 é " << novo_vetor[2] << std::endl;
}*/






/*{
	std::cout << "Digita a coordena X do vetor: " << std::endl;
	int xCoordenada;
	std::cin >> xCoordenada;
	std::cout << "Digita a coordena Y do vetor: " << std::endl;
	int yCoordenada;
	std::cin >> yCoordenada;
	std::cout << " O tamanho do vetor e " << moduloVetor(xCoordenada, yCoordenada) << std::endl;
}

float moduloVetor(int X, int Y)

{
	return sqrt(pow(X, 2) + pow(Y, 2));


}*/




/* {
	std::cout << "Digite sua altura e sua massa " << std::endl;
	float altura;
	std::cin >> altura;
	float massa;
	std::cin >> massa;
	std::cout << "Altura: " << altura << std::endl;
	std::cout << "Massa:  " << massa << std::endl;
	std::cout << "IMC: " << iMC(altura, massa) << std::endl;
}

float iMC(float Y, float Z)
{

	return (Z /pow (Y,2));



}*/




/* {
	int casa{ 12 };
	std::cout << casa;

}*/





/*{
	std::cout << "Digite seu salario: " << std::endl;
	float salarioInicial;
	std::cin >> salarioInicial;
	std::cout << "Salario ajustado para " << AumentaSalario(salarioInicial) << std::endl;
}


float AumentaSalario(float X)
{
	return X * 15 / 100 + X;

}*/





/*{
	std::cout << "Digite o primeiro numero: " << std::endl;
	float num1;
	std::cin >> num1;
	std::cout << "Digite o segundo numero: " << std::endl;
	float num2;
	std::cin >> num2;
	MediaHarmonica(num1, num2);


}


void MediaHarmonica(float X, float Y)

{
	std::cout << "A media harmonica dos numeros e " << (2 * X * Y) / (X + Y) << std::endl;

}*/








/* {
	float TempCelsius;
	std::cout << "Digite a temperatura em graus Celsius" << std::endl;
	std::cin >> TempCelsius;
	CoversorTemperatura(TempCelsius);
}
	
void CoversorTemperatura(float Temp)

{
	std::cout << Temp << " graus Celsius equivalem a " << Temp * 1.8 + 32 << " graus Fahrenheit";


}*/
	
	
	
	/*	int hora, minuto;
	std::cout << "Informe a hora" << std::endl;
	std::cin >> hora;
	std::cout << "Informe os minutos" << std::endl;
	std::cin >> minuto;
	InformaHora(hora,minuto);

}*/

//void InformaHora(int H, int M)
//{
//std::cout << "Agora sao " << H << ":" << M << std::endl;

//}


	/*int casa;
	//int nuvem;
	std::cout << "Digite o valor da casa" << std::endl;
	std::cin >> casa;
	nuvem = (10 * casa);
	std::cout << "O valor da nuvem eh: " << nuvem << std::endl;
	std::cout << "Primeiro Codigo" << std::endl;
	std::cout << "Segundo Codigo" << std::endl;
	//system("PAUSE");
  //  return 0; */


	// Operador de extração >>
	// Operador de inserção <<

	/*int cenouras;
	char nome;
	nome ='a';
	std::cout << "Digite a quantidade de cenouras no cesto " << std::endl;
	std::cin >> cenouras;
	std::cout << "Irei comer uma dessas cenouras, pois estou com fome" << std::endl;
	cenouras = cenouras - 1;
	std::cout << std::endl;
	std::cout << "Agora teremos no cesto a quantida de " << cenouras << " cenouras";
	std::cout << std::endl; // endl sempre precisa de cout
	std::cout << nome;*/
	/*int a, b;
	a = 2;
	b = 5;
	a = b;
	b = a;*/

	/*float altura, largura, comprimento;
	std::cout << "Digite a altura, largura e comprimento" << std::endl;
	std::cin >> altura >> largura >> comprimento;
	std::cout << "O valor do cubo é " << altura * largura * comprimento << std::endl;
	*/

	/*int idade_fumante;
	float preço_carteira_cigarro, rateio_cigarro_carteira, cigarros_dia;
	std::cout << "Quanto tempo você fuma ?" << std::endl;
	std::cin >> idade_fumante;
	std::cout << "Quantos cigarros você fuma por dia ?" << std::endl;
	std::cin >> cigarros_dia;
	rateio_cigarro_carteira = cigarros_dia / 20;
	std::cout << "Qual o preço da carteira de cigarro ?" << std::endl;
	std::cin >> preço_carteira_cigarro;
	std::cout << "Você gastou R$ " << idade_fumante *365*preço_carteira_cigarro * rateio_cigarro_carteira << std::endl;
	*/

	/* int numero_escolhido, multiplicador;
	std::cout << "Escolha um número entre 1 e 10" << std::endl;
	std::cin >> numero_escolhido;
	multiplicador = 0;
	std::cout << std::endl;
	std::cout << "A Tabuada de " << numero_escolhido << " eh" << std::endl;
	std::cout << std::endl;
		while (multiplicador < 11) 
	{ 
		std::cout << numero_escolhido << " X " << multiplicador << " = " << numero_escolhido * multiplicador << std::endl;
		multiplicador = multiplicador + 1;
	}

	*/

	
	//std::cout << "Sorria! " << "Sorria! " << "Sorria! ";
	//sorria();
	//std::cout << "Sorria! ";
	//sorria();
	//sorria();
	
	
	//void sorria(void)
	//{
	//	std::cout << "Sorria! " << std::endl;


	//}



	/*double quantidade, num1, num2;
	std::cout << "Digite dois numeros ";
	std::cin >> num1;
	std::cin >> num2;
	quantidade = media(num1,num2);
	std::cout << "A media é : " << quantidade << std::endl;
	std::cout << '\a';
}

double media(double a, double b)
{

	double A = (a + b) / 2;
	return A;

} */