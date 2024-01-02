// LAB12 EXERCICIO DE APRENDIZAGEM 05

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

struct Data
{
	int dia;
	int mes;
	int ano;

};

struct Horario
{
	int hora;
	int minuto;
	int segundo;
};

struct Evento
{
	Data calendario;
	Horario relogio;
	char local[15];

};

void calendario_preencher(Evento);

int main()

{

	Evento segunda{};
	std::cout << "Gentileza digitar os dados do evento" << std::endl;
	calendario_preencher(segunda);


}

void calendario_preencher (Evento x)
{ 
std::cout << "Gentileza digitar os dados da data do evento, ano, mes e dia" << std::endl;
std::cin >> x.calendario.ano;
std::cin >> x.calendario.mes;
std::cin >> x.calendario.dia;
std::cout << "Gentileza digitar os dados horario do evento, hora, minuto e segundo" << std::endl;
std::cin >> x.relogio.hora;
std::cin >> x.relogio.minuto;
std::cin >> x.relogio.segundo;
std::cout << "Gentileza digitar os dados do local do evento" << std::endl;
std::cin >> x.local;
std::cout << "O evento ocorrerah no dia " << x.calendario.dia << "/" << x.calendario.mes << "/" << x.calendario.ano
<< " , as " << x.relogio.hora << ":" << x.relogio.minuto << ":" << x.relogio.segundo << ", no bairro da " << x.local << std::endl;

}
